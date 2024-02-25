package BOJ.DFS.boj_24484;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {
    // 일부 케이스 통과 안 된 이유 ; int 타입 오버플로우 발생
    static long cnt;
    static long[] visited;
    static long[] depth;
    static ArrayList<ArrayList<Integer>> graph = new ArrayList<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int r = Integer.parseInt(st.nextToken());

        visited = new long[n + 1];
        depth = new long[n + 1];

        // 그래프 초기화
        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<Integer>());
            depth[i] = -1;
        }

        // list에 값 저장
        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            graph.get(a).add(b);
            graph.get(b).add(a);
        }
        for (int i = 1; i <= n; i++) {
            Collections.sort(graph.get(i), Comparator.reverseOrder());
        }

        cnt = 1;
        depth[r] = 0;
        long result = 0L;
        dfs(r);

        for (int i = 1; i < visited.length; i++) {
            result += visited[i] * depth[i];
        }

        System.out.println(result);
    }

    private static void dfs(int node) {
        visited[node] = cnt;

        for (int next : graph.get(node)) {
            if (visited[next] == 0) {
                cnt++;
                if (depth[next] == -1) {
                    visited[next] = visited[node] + 1;
                    depth[next] = depth[node] + 1;
                    dfs(next);
                }
            }
        }
    }
}
