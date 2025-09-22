package CodeTree.mintChoco;

import java.io.*;
import java.util.*;

public class Main {
    static int N, T;
    static int[][] F; // 음식 (비트마스크)
    static int[][] B; // 신앙심
    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        T = Integer.parseInt(st.nextToken());
        F = new int[N][N];
        B = new int[N][N];

        for (int i = 0; i < N; i++) {
            String str = br.readLine();
            for (int j = 0; j < N; j++) {
                char ch = str.charAt(j);
                if (ch == 'T') F[i][j] = 1;
                else if (ch == 'C') F[i][j] = 2;
                else F[i][j] = 4;
            }
        }

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                B[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for (int t = 0; t < T; t++) {
            morning();
            List<int[]> heads = afternoon();
            evening(heads);
            print();
        }
    }

    static void morning() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                B[i][j]++;
            }
        }
    }

    static boolean isRange(int x, int y) {
        return x >= 0 && x < N && y >= 0 && y < N;
    }

    static int[] getHeadAndAdd(boolean[][] visited, int x, int y) {
        Queue<int[]> queue = new LinkedList<>();
        List<int[]> members = new ArrayList<>();

        queue.add(new int[]{x, y});
        visited[x][y] = true;
        members.add(new int[]{x, y});

        while (!queue.isEmpty()) {
            int[] curr = queue.poll();
            int cx = curr[0], cy = curr[1];

            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];

                if (!isRange(nx, ny) || visited[nx][ny] || F[cx][cy] != F[nx][ny]) continue;

                queue.add(new int[]{nx, ny});
                visited[nx][ny] = true;
                members.add(new int[]{nx, ny});
            }
        }

        int hx = members.get(0)[0], hy = members.get(0)[1];
        for (int[] m : members) {
            int mx = m[0], my = m[1];
            if (B[mx][my] > B[hx][hy] ||
                    (B[mx][my] == B[hx][hy] && (mx < hx || (mx == hx && my < hy)))) {
                hx = mx; hy = my;
            }
        }

        for (int[] m : members) {
            int mx = m[0], my = m[1];
            if (mx == hx && my == hy) continue;
            B[mx][my]--;
        }
        B[hx][hy] += members.size() - 1;

        return new int[]{hx, hy};
    }

    static List<int[]> afternoon() {
        boolean[][] visited = new boolean[N][N];
        List<int[]> heads = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (!visited[i][j]) {
                    heads.add(getHeadAndAdd(visited, i, j));
                }
            }
        }
        return heads;
    }

    static void evening(List<int[]> heads) {
        heads.sort((a, b) -> {
            int foodCountA = Integer.bitCount(F[a[0]][a[1]]);
            int foodCountB = Integer.bitCount(F[b[0]][b[1]]);
            if (foodCountA != foodCountB) return foodCountA - foodCountB;

            int beliefA = B[a[0]][a[1]];
            int beliefB = B[b[0]][b[1]];
            if (beliefA != beliefB) return beliefB - beliefA;

            if (a[0] != b[0]) return a[0] - b[0];
            return a[1] - b[1];
        });

        boolean[][] defended = new boolean[N][N];

        for (int[] head : heads) {
            int x = head[0], y = head[1];
            if (defended[x][y]) continue;

            int power = B[x][y] - 1;
            int dir = B[x][y] % 4;
            int food = F[x][y];

            B[x][y] = 1;

            int cx = x, cy = y;
            while (power > 0) {
                cx += dx[dir];
                cy += dy[dir];
                if (!isRange(cx, cy)) break;

                if (F[cx][cy] == food) continue; // 같은 음식이면 패스

                defended[cx][cy] = true;
                if (power > B[cx][cy]) {
                    F[cx][cy] = food;
                    power -= (B[cx][cy] + 1);
                    B[cx][cy]++;
                } else {
                    F[cx][cy] |= food;
                    B[cx][cy] += power;
                    break;
                }
            }
        }
    }

    static void print() {
        long[] S = new long[8];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                S[F[i][j]] += B[i][j];
            }
        }

        System.out.println(S[7] + " " + S[3] + " " + S[5] + " " +
                S[6] + " " + S[4] + " " + S[2] + " " + S[1]);
    }
}
