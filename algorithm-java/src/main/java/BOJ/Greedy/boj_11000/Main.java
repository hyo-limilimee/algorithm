package BOJ.Greedy.boj_11000;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
    static int[][] time;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        time = new int[N][2];
        PriorityQueue<int[]> pq = new PriorityQueue<>(new Comparator<int[]>() {

            @Override
            public int compare(int[] o1, int[] o2) {
                if (o1[0] == o2[0]) {
                    return o1[1] - o2[1];
                }
                return o1[0] - o2[0];
            }
        });

        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            time[i][0] = Integer.parseInt(st.nextToken());
            time[i][1] = Integer.parseInt(st.nextToken());

            pq.add(new int[]{time[i][0], time[i][1]});
        }

       PriorityQueue<Integer> room = new PriorityQueue<>();
        room.add(0);

        while(!pq.isEmpty()) {
            int[] prev = pq.poll();

            if(room.peek() <= prev[0]) {
                room.poll();
            }
            room.add(prev[1]);
        }
        System.out.println(room.size());
    }
}
