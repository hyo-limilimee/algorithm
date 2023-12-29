package BOJ.boj_2606;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {

    static int N,M; // N: 컴퓨터 수, M: 직접 연결된 수

    static ArrayList<ArrayList<Integer>> graph;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();

        graph = new ArrayList<>();
        for(int i = 0; i <= N; i++){
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
        boolean[] visited = new boolean[N + 1];
        int result = dfs(graph, visited, 1);

        System.out.println(result - 1);

        sc.close();
    }

    // DFS -> 바이러스에 감염된 컴퓨터 수 계산
    private static int dfs(ArrayList<ArrayList<Integer>> graph, boolean[] visited, int start) {
        visited[start] = true;
        int count = 1;

        for (int next : graph.get(start)) {
            if (!visited[next]) {
                count += dfs(graph, visited, next);
            }
        }

        return count;
    }
}
