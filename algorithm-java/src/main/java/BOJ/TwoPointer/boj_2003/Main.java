package BOJ.TwoPointer.boj_2003;

import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[] A = new int[N];
         st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            A[i] = Integer.parseInt(st.nextToken());
        }

        int start = 0;
        int end = 0;
        int cnt = 0;
        int sum = 0;

        while (true) {
            if (sum >= M) {
                sum -= A[start++];
            } else if (end == N) {
                break;
            } else {
                sum += A[end++];
            }

            if (sum == M) {
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
