package BOJ.Sort.boj_10825;

import java.io.*;
import java.util.*;

public class Main {
    static int N;
    static List<Student> list = new ArrayList<>();

    static class Student {
        String name;
        int kor, eng, math;

        Student(String name, int kor, int eng, int math) {
            this.name = name;
            this.kor = kor;
            this.eng = eng;
            this.math = math;
        }
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());

        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String name = st.nextToken();
            int kor = Integer.parseInt(st.nextToken());
            int eng = Integer.parseInt(st.nextToken());
            int math = Integer.parseInt(st.nextToken());
            list.add(new Student(name, kor, eng, math));
        }

        Collections.sort(list, new Comparator<Student>() {
            @Override
            public int compare(Student a, Student b) {
                if (a.kor != b.kor) return b.kor - a.kor;
                if (a.eng != b.eng) return a.eng - b.eng;
                if (a.math != b.math) return b.math - a.math;
                return a.name.compareTo(b.name);
            }
        });

        StringBuilder sb = new StringBuilder();
        for(Student s : list){
            sb.append(s.name).append("\n");
        }
        System.out.print(sb);
    }
}
