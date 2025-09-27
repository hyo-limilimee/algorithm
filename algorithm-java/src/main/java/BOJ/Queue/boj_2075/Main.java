package BOJ.Queue.boj_2075;

import java.io.*;
import java.util.*;

public class Main {
    static int N;
    static int[] arr;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        arr = new int[N * N];

        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                arr[i * N + j] = Integer.parseInt(st.nextToken());
            }
        }

        Arrays.sort(arr);
        int index = N * N - N;
        System.out.println(arr[index]);
    }
}

//public class Main {
//    public static void main(String[] args) throws Exception {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int N = Integer.parseInt(br.readLine());
//
//        PriorityQueue<Integer> pq = new PriorityQueue<>(); // 최소 힙
//
//        for (int i = 0; i < N; i++) {
//            StringTokenizer st = new StringTokenizer(br.readLine());
//            for (int j = 0; j < N; j++) {
//                int num = Integer.parseInt(st.nextToken());
//                pq.offer(num);
//                if (pq.size() > N) {
//                    pq.poll(); // 가장 작은 것 제거
//                }
//            }
//        }
//
//        System.out.println(pq.peek()); // N번째 큰 수
//    }
//}
