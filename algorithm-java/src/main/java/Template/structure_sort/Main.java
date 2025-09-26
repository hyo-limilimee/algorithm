//package Template.structure_sort;
//
//import java.util.Collections;
//
//public class Main {
//    public static void main(String[] args) {
//        class Pos {
//            int x, y, dist;
//            Pos(int x, int y, int dist) {
//                this.x = x;
//                this.y = y;
//                this.dist = dist;
//            }
//        }
//
//    // 우선순위 정렬 (거리 > 위쪽 > 왼쪽)
//        Collections.sort(list, (a, b) -> {
//            if (a.dist != b.dist) return a.dist - b.dist;
//            if (a.x != b.x) return a.x - b.x;
//            return a.y - b.y;
//        });
//
//    }
//
//    int[][] copyMap(int[][] original) {
//        int[][] newMap = new int[N][N];
//        for (int i = 0; i < N; i++) {
//            newMap[i] = original[i].clone();
//        }
//        return newMap;
//    }
//}
