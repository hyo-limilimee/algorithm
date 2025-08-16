package BOJ.Stack.boj_10828;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String order = st.nextToken();

            if (order.equals("push")) {
                int value = Integer.parseInt(st.nextToken());
                stack.push(value);
            } else if (order.equals("pop")) {
                if (stack.isEmpty()) System.out.println(-1);
                else System.out.println(stack.pop());
            } else if (order.equals("size")) {
                System.out.println(stack.size());
            } else if (order.equals("empty")) {
                if (stack.isEmpty()) System.out.println(1);
                else System.out.println(0);
            } else if (order.equals("top")) {
                if(stack.isEmpty()) System.out.println(-1);
                else System.out.println(stack.peek());
            }
        }
    }
}
