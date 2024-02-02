package BOJ.DFS.boj_24481;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    static ArrayList<ArrayList<Integer>> graph;
    static int depth[];

    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(bf.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());

        graph = new ArrayList<>();
        depth = new int[N + 1];

        // 배열 초기화 & depth를 -1로 설정
        for (int i = 0; i <= N; i++) {
            graph.add(new ArrayList<>());
            depth[i] = -1;
        }

        // 간선 추가
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(bf.readLine());
            int u = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());

            graph.get(u).add(v);
            graph.get(v).add(u);
        }

        // 간선 오름차순 정렬
        for (int i = 1; i <= N; i++) {
            Collections.sort(graph.get(i));
        }

        depth[R] = 0;   // 현재 간선 depth를 0으로 설정
        dfs(R);

        // 각 노드에 depth 추가
        for (int i = 1; i <= N; i++) {
            bw.write(depth[i] + "\n");
        }
        bw.flush();
    }

    private static void dfs(int r) {
        for (int i = 0; i < graph.get(r).size(); i++) {
            // depth가 -1인 경우 (방문 한 적 없는 경우)
            if (depth[graph.get(r).get(i)] == -1) {
                depth[graph.get(r).get(i)] = depth[r] + 1;
                dfs(graph.get(r).get(i));
            }
        }
    }
}
