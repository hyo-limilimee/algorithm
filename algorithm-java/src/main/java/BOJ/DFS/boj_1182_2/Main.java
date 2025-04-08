package BOJ.DFS.boj_1182_2;

import java.util.*;
import java.io.*;

public class Main {
    static int N;
    static int S;
    static int[] arr;
    static int[] picked;
    static int pickedNum;
    static int count = 0;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        S = Integer.parseInt(st.nextToken());
        arr = new int[N];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        for (int i = 1; i <= N; i++) {
            picked = new int[i];
            pickedNum = i;
            makeSum(0, 0);
        }
        System.out.println(count);
    }

    private static void makeSum(int index, int depth) {
        if (depth == pickedNum) {
            if (calculateSum() == S) {
                count++;
            }
            return;
        }

        for (int i = index; i < N; i++) {
            picked[depth] = arr[i];
            makeSum(i + 1, depth + 1);
        }
    }

    private static int calculateSum() {
        int sum = 0;
        for (int i = 0; i < picked.length; i++) {
            sum += picked[i];
        }
        return sum;
    }
}
