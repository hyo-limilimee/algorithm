package BOJ.DFS.boj_2468;

import java.util.*;

public class Main {

    static int N;
    static int[][] graph;
    static boolean[][] visited;
    static int[] dx = {1, 0, -1, 0};
    static int[] dy = {0, -1, 0, 1};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        graph = new int[N][N];

        int max = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                graph[i][j] = sc.nextInt();

                // 최대값 갱신
                if (max < graph[i][j]) {
                    max = graph[i][j];
                }
            }
        }

        int res = 0;
        for (int i = 0; i <= max; i++) {
            int cnt = 0;
            visited = new boolean[N][N];
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++) {
                    if (graph[j][k] > i && !visited[j][k]) {
                        cnt++;
                        dfs(j, k, i);
                    }
                }
            }
            res = Math.max(cnt, res);
        }

        System.out.println(res);
    }

    static void dfs(int x, int y, int height) {
        visited[x][y] = true;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= N || graph[nx][ny] <= height || visited[nx][ny]) {
                continue;
            }

            dfs(nx, ny, height);
        }
    }
}
