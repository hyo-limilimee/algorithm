package BOJ.boj_11053;

import java.io.*;
import java.util.*;

public class Main {
    public static int[] a;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        a = new int[1001];

        int cnt = 0;
        int max = 0;

        for (int i = 0; i < N; i++) {

            a[i] = Integer.parseInt(br.readLine());

            if(max <= a[i]){
                max = a[i];
                cnt++;
            }
        }

        System.out.println(cnt);
    }
}
