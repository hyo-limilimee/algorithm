//package Template.BFS_simulation;
//
//import java.util.LinkedList;
//import java.util.Queue;
//
//public class Main {
//    static int N;
//    int[] dx = {0, 1, 0, -1};
//    int[] dy = {1, 0, -1, 0};
//    int dirIdx = 0; // 시작 방향
//
//    public static void main(String[] args) {
//        Queue<int[]> queue = new LinkedList<>();
//        boolean[][] visited = new boolean[N][N];
//        int[][] dist = new int[N][N]; // 필요할 경우
//
//        queue.offer(new int[]{sx, sy});
//        visited[sx][sy] = true;
//        dist[sx][sy] = 0;
//
//        while (!queue.isEmpty()) {
//            int[] cur = queue.poll();
//            int x = cur[0];
//            int y = cur[1];
//
//            for (int d = 0; d < 4; d++) {
//                int nx = x + dx[d];
//                int ny = y + dy[d];
//
//                if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
//                if (visited[nx][ny]) continue;
//                if (/* 갈 수 없는 조건 */) continue;
//
//                visited[nx][ny] = true;
//                dist[nx][ny] = dist[x][y] + 1;
//                queue.offer(new int[]{nx, ny});
//            }
//        }
//
//    }
//}
