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

        dfs(N,M,0);

        System.out.println(sb);
    }

    public static void dfs(int n, int m, int depth)
    {
        if(depth == m)
        {
            for(int val: arr){
                sb.append(val).append(' ');
            }
            sb.append('\n');
            return;
        }

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[depth] = i + 1;
                dfs(n,m,depth+1);
                visited[i] = false;
            }
        }
    }
}
