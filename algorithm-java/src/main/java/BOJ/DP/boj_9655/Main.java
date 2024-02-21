package BOJ.DP.boj_9655;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        if (N % 2 == 0) {
            System.out.println("CY");
        } else {
            System.out.println("SK");
        }
    }
}

// dp로도 구현 가능
//        DP[1]=1 //상근승
//        DP[2]=0 //창영승
//        DP[3]=1 //상근승
//                if((DP[i-1] & DP[i-3]) == 1) {
//                DP[i] = 0;
//                } else {
//                DP[i] = 1;
//                }