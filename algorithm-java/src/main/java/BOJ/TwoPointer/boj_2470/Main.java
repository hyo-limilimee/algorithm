package BOJ.TwoPointer.boj_2470;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);

        int left = 0, right = N - 1;
        int minDiff = Integer.MAX_VALUE;
        int ans1 = 0, ans2 = 0;

        while (left < right) {
            int sum = arr[left] + arr[right];
            int diff = Math.abs(sum);

            if (diff < minDiff) {
                minDiff = diff;
                ans1 = arr[left];
                ans2 = arr[right];
            }

            if (sum < 0) left++;
            else right--;
        }
        System.out.println(ans1 + " " + ans2);
    }
}
