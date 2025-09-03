package BOJ.Queue.boj_1927;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        PriorityQueue<Integer> pq = new PriorityQueue();

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        for (int i = 0; i < N; i++) {
            int x = Integer.parseInt(br.readLine());

            if (x == 0) {
                if (pq.isEmpty()) {
                    System.out.println(0);
                } else {
                    System.out.println(pq.poll());
                }
            } else {
                pq.offer(x);
            }
        }
    }
}
