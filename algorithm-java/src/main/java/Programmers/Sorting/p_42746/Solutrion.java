package Programmers.Sorting.p_42746;

import java.util.*;

    class Solution {
        public String solution(int[] numbers) {
            String answer = "";

            String[] numStr = new String[numbers.length];

            for(int i = 0; i < numbers.length; i++){
                numStr[i] = String.valueOf(numbers[i]);
            }

            Arrays.sort(numStr, (s1, s2)
                    ->(s2+s1).compareTo(s1+s2));

            for(String str:numStr){
                answer += str;
            }

            if(answer.charAt(0) == '0'){
                answer = "0";
            }

            return answer;
        }
    }