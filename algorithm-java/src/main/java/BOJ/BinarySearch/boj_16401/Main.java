package BOJ.BinarySearch.boj_16401;

import java.io.*;
import java.util.*;

public class Main {
    public static int[] length;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());

        length = new int[N];

        for (int i = 0; i < N; i++) {
            length[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(length);

        long left = 1L;
        long right = length[N - 1];
        long result = 0L;

        while (left <= right) {
            long mid = (left + right) / 2;
            long count = 0;

            for (int i = 0; i < N; i++) {
                count += (length[i] / mid);
            }

            if (count >= M) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        System.out.println(result);
    }
}
