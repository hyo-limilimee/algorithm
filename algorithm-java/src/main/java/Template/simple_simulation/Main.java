//package Template.simple_simulation;
//
//public class Main {
//    // 방향: 동남서북 (우하좌상)
//    int[] dx = {0, 1, 0, -1};
//    int[] dy = {1, 0, -1, 0};
//    int dirIdx = 0; // 시작 방향
//
//    public static void main(String[] args) {
//
//    }
//
//    // 방향 회전
//    void rotate(char d) {
//        if (d == 'D') dirIdx = (dirIdx + 1) % 4;
//        else if (d == 'L') dirIdx = (dirIdx + 3) % 4;
//    }
//
//    // 이동
//    int nx = x + dx[dirIdx];
//    int ny = y + dy[dirIdx];
//
//}
