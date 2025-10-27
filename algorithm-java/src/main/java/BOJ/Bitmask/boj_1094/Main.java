package BOJ.Bitmask.boj_1094;

import java.io.*;
public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int x = Integer.parseInt(br.readLine());
        int cnt = 0;

        while (x > 0) {
            if (x % 2 == 1) {
                cnt++;
            }
            x >>= 1;
        }
        System.out.println(cnt);
    }
}
