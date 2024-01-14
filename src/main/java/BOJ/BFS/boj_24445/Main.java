package BOJ.BFS.boj_24445;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    static List<List<Integer>> graph = new ArrayList<>();
    static int[] visited;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());

        visited = new int[N + 1];

        // N + 1개 ArrayList 생성
        for (int i = 0; i < N + 1; i++) {
            graph.add(new ArrayList<>());
        }

        // 간선 M개 추가
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());

            int u = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());

            graph.get(u).add(v);
            graph.get(v).add(u);
        }

        for (int i = 1; i <= N; i++) {
            Collections.sort(graph.get(i), Comparator.reverseOrder());
        }

        bfs(R);

        for (int i = 1; i <= N; i++) {
            System.out.println(visited[i]);
        }
    }

    public static void bfs(int start) {
        Queue<Integer> queue = new LinkedList<>();
        int cnt = 1;    // 방문한 정점에 번호 부여하기 위함

        // 큐에 시작 정점 추가
        queue.add(start);
        // 해당 정점 방문했음을 표시
        visited[start] = cnt++;

        // 큐가 비어있지 않는 동안 반복(모든 정점 방문하기 전까지)
        while (!queue.isEmpty()) {
            int u = queue.poll();   // 정점 하나 꺼내서 현재 탐색할 정점으로 지정

            //현재 정점과 연결된 다음 정점에 대해 모두 반복
            for (int i = 0; i < graph.get(u).size(); i++) {
                int next = graph.get(u).get(i);

                //이미 방문된 경우
                if (visited[next] != 0) {
                    continue;
                }

                // 다음 정점을 큐에 추가
                queue.offer(next);
                //방문한 정점에 번호 부여
                visited[next] = cnt++;
            }
        }
    }
}
