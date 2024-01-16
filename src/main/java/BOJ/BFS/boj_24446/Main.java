package BOJ.BFS.boj_24446;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    static ArrayList<ArrayList<Integer>> graph = new ArrayList<>();
    static int depth[];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());

        depth = new int[N + 1];
        for (int i = 0; i < N + 1; i++) {
            graph.add(new ArrayList<>());
            depth[i] = -1; // 초기값을 -1로 설정
        }

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());

            int u = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());

            graph.get(u).add(v);
            graph.get(v).add(u);
        }

        for (int i = 1; i <= N; i++) {
            Collections.sort(graph.get(i));
        }

        bfs(R);

        for (int i = 1; i <= N; i++) {
            bw.write(depth[i] + "\n");
        }

        bw.flush();
    }

    private static void bfs(int start) {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        depth[start] = 0;

        while (!queue.isEmpty()) {
            int u = queue.poll();

            for (int next : graph.get(u)) {
                if (depth[next] == -1) {
                    depth[next] = depth[u] + 1;
                    queue.add(next);
                }
            }
        }
    }
}
