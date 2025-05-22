package BOJ.BFS.boj_21609;

import java.util.*;
import java.io.*;

public class Main {
    static int N, M;
    static int[][] board;
    static boolean[][] visited;
    static int[] dx = {-1, 0, 1, 0};
    static int[] dy = {0, -1, 0, 1};
    static List<Group> groups;
    static int score = 0;

    static class Group {
        List<int[]> blocks;
        int size;
        int standardRow;
        int standardCol;
        int rainbowCount;

        Group(List<int[]> blocks, int rainbowCount) {
            this.blocks = blocks;
            this.size = blocks.size();
            this.rainbowCount = rainbowCount;
            
            // 기준 블록 계산
            int r = 21, c = 21;
            for (int[] pos : blocks) {
                int x = pos[0], y = pos[1];
                if (board[x][y] != 0) { // 일반 블록만 기준 후보
                    if (x > r || (x == r && y > c)) {
                        r = x;
                        c = y;
                    }
                }
            }
            this.standardRow = r;
            this.standardCol = c;
        }
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        board = new int[N][N];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                board[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        autoPlay();
        System.out.println(score);
    }

    static void autoPlay() {
        while (true) {
            visited = new boolean[N][N];
            groups = new ArrayList<>();

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (!visited[i][j] && board[i][j] > 0) {
                        List<int[]> union = bfs(i, j);
                        if (union.size() >= 2) {
                            int rainbow = 0;
                            for (int[] b : union) {
                                if (board[b[0]][b[1]] == 0) rainbow++;
                            }
                            groups.add(new Group(union, rainbow));
                        }
                    }
                }
            }

            if (groups.isEmpty()) break;
            sortGroups();
            Group g = groups.get(0);
            for (int[] pos : g.blocks) {
                board[pos[0]][pos[1]] = -2;
            }
            score += g.size * g.size;
            gravity();
            rotate();
            gravity();
        }
    }

    static List<int[]> bfs(int x, int y) {
        Queue<int[]> queue = new LinkedList<>();
        List<int[]> union = new ArrayList<>();
        List<int[]> rainbow = new ArrayList<>();
        int color = board[x][y];

        queue.offer(new int[]{x, y});
        union.add(new int[]{x, y});
        visited[x][y] = true;

        while (!queue.isEmpty()) {
            int[] cur = queue.poll();
            for (int d = 0; d < 4; d++) {
                int nx = cur[0] + dx[d];
                int ny = cur[1] + dy[d];
                if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                if (visited[nx][ny]) continue;
                if (board[nx][ny] == 0 || board[nx][ny] == color) {
                    visited[nx][ny] = true;
                    queue.offer(new int[]{nx, ny});
                    union.add(new int[]{nx, ny});
                    if (board[nx][ny] == 0) rainbow.add(new int[]{nx, ny});
                }
            }
        }

        for (int[] pos : rainbow) visited[pos[0]][pos[1]] = false;
        return union;
    }

    static void gravity() {
        for (int j = 0; j < N; j++) {
            for (int i = N - 2; i >= 0; i--) {
                if (board[i][j] >= 0) {
                    int r = i;
                    while (r + 1 < N && board[r + 1][j] == -2) {
                        board[r + 1][j] = board[r][j];
                        board[r][j] = -2;
                        r++;
                    }
                }
            }
        }
    }

    static void rotate() {
        int[][] temp = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                temp[N - 1 - j][i] = board[i][j];
            }
        }
        board = temp;
    }

    static void sortGroups() {
        groups.sort((g1, g2) -> {
            if (g1.size != g2.size) return g2.size - g1.size;
            if (g1.rainbowCount != g2.rainbowCount) return g2.rainbowCount - g1.rainbowCount;
            if (g1.standardRow != g2.standardRow) return g2.standardRow - g1.standardRow;
            return g2.standardCol - g1.standardCol;
        });
    }
}