package BOJ.BFS.boj_24444;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

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

        for (int i = 0; i <= N; i++) {
            graph.add(new ArrayList<>());
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
            System.out.println(visited[i]);
        }
    }

    public static void bfs(int start) {
        Queue<Integer> queue = new LinkedList<>();
        int cnt = 1;

        queue.add(start);
        visited[start] = cnt++;

        while (!queue.isEmpty()) {
            int u = queue.poll();

            for (int i = 0; i < graph.get(u).size(); i++) {
                int next = graph.get(u).get(i);

                if (visited[next] != 0)
                    continue;

                queue.offer(next);
                visited[next] = cnt++;
            }
        }
    }
}
