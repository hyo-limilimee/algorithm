//package SWEA;
//
//import java.util.HashMap;
//import java.util.Scanner;
//
//public class swea_19003 {
//    public static void main(String args[]) throws Exception {
//        Scanner sc = new Scanner(System.in);
//        int T;
//        T = sc.nextInt();
//
//        for (int test_case = 1; test_case <= T; test_case++) {
//            int N = sc.nextInt();
//            int M = sc.nextInt();
//            sc.nextLine();
//
//            // 문자열을 저장할 배열
//            String[] strings = new String[N];
//            for (int i = 0; i < N; i++) {
//                strings[i] = sc.nextLine();
//            }
//
//            // 문자열을 길이별로 분류하여 저장할 HashMap
//            HashMap<Integer, Integer> lengthCountMap = new HashMap<>();
//
//            // 각 문자열의 길이를 세어 HashMap에 저장
//            for (String str : strings) {
//                int len = str.length();
//                lengthCountMap.put(len, lengthCountMap.getOrDefault(len, 0) + 1);
//            }
//
//            int result = 0;
//            boolean oddLengthUsed = false;
//
//            // 길이별로 팰린드롬을 만들기
//            for (int len : lengthCountMap.keySet()) {
//                int count = lengthCountMap.get(len);
//
//                // 길이가 홀수인 경우 한 번만 사용
//                if (len % 2 == 1 && !oddLengthUsed) {
//                    result += 1;
//                    oddLengthUsed = true;
//                }
//
//                // 짝수인 경우 모두 사용
//                result += count / 2 * 2;
//            }
//
//            System.out.println("#" + test_case + " " + result);
//        }
//    }
//}
