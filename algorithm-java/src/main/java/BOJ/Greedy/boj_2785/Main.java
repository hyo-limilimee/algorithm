package BOJ.Greedy.boj_2785;

import java.io.*;
import java.util.*;

/*
    요소를 삭제하는 방식에 대해 생각하여 풀이 (가장 작은 값을 희생시켜 최소 비용 산출)
 */
public class Main {
    static int N;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());

        // 배열에 입력 받기
        ArrayList<Integer> arr = new ArrayList<>();
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr.add(Integer.parseInt(st.nextToken()));
        }

        // 정렬 하기
        Collections.sort(arr);

        // 가장 짧은 것 부터 하나씩 연결
        int cnt = 0;
        while (true) {
            if (arr.size() <= 1) {
                break;
            }

            arr.set(0, arr.get(0) - 1);
            arr.remove(arr.size() - 1);

            if (arr.get(0) == 0) {
                arr.remove(0);
            }
            cnt++;
        }
        System.out.println(cnt);
    }
}
