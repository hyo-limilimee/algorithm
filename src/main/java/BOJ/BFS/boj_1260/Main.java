package BOJ.BFS.boj_1260;

import java.util.*;

public class Main {
    static int N, M, V; // 정점 개수, 간선 개수, 시작 정점
    static ArrayList<ArrayList<Integer>> graph; // 그래프를 인접 리스트로 표현

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 입력
        N = sc.nextInt();
        M = sc.nextInt();
        V = sc.nextInt();

        // 그래프 초기화
        graph = new ArrayList<>();
        for (int i = 0; i <= N; i++) {
            graph.add(new ArrayList<>());
        }

        // 간선 정보 입력받기
        for (int i = 0; i < M; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            graph.get(a).add(b);
            graph.get(b).add(a); // 양방향 간선이므로 양쪽에 모두 추가
        }

        // 그래프 정렬 (작은 정점 번호 먼저 방문하기 위해)
        for (int i = 1; i <= N; i++) {
            Collections.sort(graph.get(i));
        }

        // DFS 수행 및 출력
        boolean[] visitedDFS = new boolean[N + 1];
        dfs(V, visitedDFS);
        System.out.println();

        // BFS 수행 및 출력
        boolean[] visitedBFS = new boolean[N + 1];
        bfs(V, visitedBFS);

        sc.close();
    }

    // DFS 구현
    private static void dfs(int v, boolean[] visited) {
        visited[v] = true;
        System.out.print(v + " ");

        for (int next : graph.get(v)) {
            if (!visited[next]) {
                dfs(next, visited);
            }
        }
    }

    // BFS 구현
    private static void bfs(int start, boolean[] visited) {
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(start); // 큐에 원소 추가
        visited[start] = true;

        // 큐에 원소가 있는 동안 방문
        while (!queue.isEmpty()) {
            int current = queue.poll(); // 큐의 맨 앞 원소 제거
            System.out.print(current + " ");    // 제거한 원소 출력

            // 현재 노드에 연결된 모든 노드에 대해 반복
            // graph.get(current)는 현재 노드와 연결된 모든 이웃 노드들의 리스트를 반환
            for (int next : graph.get(current)) {
                // 이웃 노드가 방문 되지 않은 경우
                if (!visited[next]) {
                    queue.offer(next);  // 이웃 노드를 큐에 추가
                    visited[next] = true;   //이웃 노드 방문 했으므로 true
                }
            }
        }
    }
}
