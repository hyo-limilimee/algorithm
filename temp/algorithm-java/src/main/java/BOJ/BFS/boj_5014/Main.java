package BOJ.BFS.boj_5014;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {

    static int F, S, G, U, D;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        F = scanner.nextInt();
        S = scanner.nextInt();
        G = scanner.nextInt();
        U = scanner.nextInt();
        D = scanner.nextInt();

        int[] cnt = new int[F + 1];
        boolean[] visited = new boolean[F + 1];
        Queue<Integer> queue = new LinkedList<>();

        queue.offer(S);
        visited[S] = true;

        while(!queue.isEmpty()){
            int current = queue.poll();

            if(current == G){
                System.out.println(cnt[current]);
                return; // break로 하면 오류 발생 - while 루프만 종료되고 메소드가 종료 X
            }

            int nextU = current + U;
            if(nextU <= F && !visited[nextU]){
                queue.offer(nextU);
                visited[nextU] = true;
                cnt[nextU] =cnt[current] + 1;
            }

            int nextD = current - D;
            if(nextD >= 1 && !visited[nextD]){
                queue.offer(nextD);
                visited[nextD] = true;
                cnt[nextD] =cnt[current] + 1;
            }
        }
        System.out.println("use the stairs");
    }
}
