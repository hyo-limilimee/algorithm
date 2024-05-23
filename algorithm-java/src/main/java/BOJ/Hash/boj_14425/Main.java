package BOJ.Hash.boj_14425;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    static List<String> S = new ArrayList<>();

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        for (int i = 0; i < N; i++) {
            S.add(br.readLine());
        }

        int cnt = 0;

        for (int i = 0; i < M; i++) {
            String str = br.readLine();
            if (S.contains(str)) {
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}

