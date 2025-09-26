//package Template.group_search;
//
//import java.util.ArrayList;
//import java.util.LinkedList;
//import java.util.List;
//import java.util.Queue;
//
//public class Main {
//    public static void main(String[] args) {
//        List<int[]> group = new ArrayList<>();
//        Queue<int[]> queue = new LinkedList<>();
//
//        queue.offer(new int[]{x, y});
//        group.add(new int[]{x, y});
//        visited[x][y] = true;
//
//        while (!queue.isEmpty()) {
//            int[] cur = queue.poll();
//
//            for (int d = 0; d < 4; d++) {
//                int nx = cur[0] + dx[d];
//                int ny = cur[1] + dy[d];
//
//                if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
//                if (visited[nx][ny]) continue;
//                if (/* 조건에 안 맞으면 */) continue;
//
//                visited[nx][ny] = true;
//                queue.offer(new int[]{nx, ny});
//                group.add(new int[]{nx, ny});
//            }
//        }
//
//// 이후 group에 대해 처리
//
//    }
//
//}
