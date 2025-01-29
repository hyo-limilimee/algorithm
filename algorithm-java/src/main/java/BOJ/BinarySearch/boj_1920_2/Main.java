package BOJ.BinarySearch.boj_1920_2;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] A = new int[N];

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            A[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(A);

        int M = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());

        for(int i = 0; i < M; i++){
            int search = Integer.parseInt(st.nextToken());
            System.out.println(binarySearch(A, search));
        }
    }

    private static int binarySearch(int[] A, int search){
        int left = 0;
        int right = A.length - 1;
        int mid = 0;

        while(left <= right){
            mid = (left + right) / 2;

            if(A[mid] == search){
                return 1;
            }
            else if(A[mid] > search){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return 0;
    }
}
