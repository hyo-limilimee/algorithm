package BOJ.Combination.boj_15652;

import java.io.*;
import java.util.*;

public class Main {

    public static StringBuilder sb = new StringBuilder();
    public static int N,M;
    public static int[] arr;
    public static boolean[] visited;
    public static void main(String[] args) throws Exception{

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        arr = new int[M];
        visited = new boolean[N];

        dfs(1,0);

        System.out.println(sb);
    }

    public static void dfs(int at, int depth)
    {
        if(depth == M)
        {
            for(int val: arr){
                sb.append(val).append(' ');
            }
            sb.append('\n');
            return;
        }

        for(int i = at; i <= N; i++){
                arr[depth] = i;
                dfs(i,depth+1);
        }
    }
}
