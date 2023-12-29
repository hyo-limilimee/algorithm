package BOJ.boj_2178;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

    static int N, M;
    static int[][] maze;
    static boolean[][] visited;

    public static void main(String[] args) throws IOException {
        // BufferReader - 내부적 버퍼링 수행하여 텍스트 효율적 불러옴
        // InputStreamReader - System.in 바이트 스트림으로 표현 -> 문자 스트림으로 변환하기 위해 사용
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 입력 받기
        StringTokenizer st = new StringTokenizer(br.readLine());    //StringTokenizer- 공백을 기준으로 나누어 두 개의 정수로 변환
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        maze = new int[N][M];   // 미로 저장할 배열 생성
        visited = new boolean[N][M];    // 방문 여부 저장할 배열 생성

        for (int i = 0; i < N; i++) {
            String row = br.readLine(); // 한 줄씩 저장
            for (int j = 0; j < M; j++) {
                maze[i][j] = row.charAt(j) - '0';   // ASCII 코드로 문자를 변환하여 0 빼줌
            }
        }

        // BFS로 미로 탐색
        int result = bfs(0, 0);

        // 결과 출력
        System.out.println(result);
    }

    static int bfs(int startX, int startY) {
        Queue<Node> queue = new LinkedList<>();
        queue.add(new Node(startX, startY, 1)); // 이동 거리 - 1로 설정
        visited[startX][startY] = true;

        // 이동할 네 가지 방향 (상, 하, 좌, 우)
        int[] dx = {-1, 1, 0, 0};
        int[] dy = {0, 0, -1, 1};

        while (!queue.isEmpty()) {
            Node current = queue.poll();

            // 도착 지점인 경우 결과 반환
            if (current.x == N - 1 && current.y == M - 1) {
                return current.distance;
            }

            // 네 가지 방향으로 이동
            for (int i = 0; i < 4; i++) {
                int nx = current.x + dx[i];
                int ny = current.y + dy[i];

                // 범위를 벗어나거나 이동할 수 없는 칸이면 건너뜀
                if (nx < 0 || nx >= N || ny < 0 || ny >= M || maze[nx][ny] == 0 || visited[nx][ny]) {
                    continue;
                }

                // 이동 가능한 경우 큐에 추가
                queue.add(new Node(nx, ny, current.distance + 1));
                visited[nx][ny] = true;
            }
        }

        // 도착 지점에 도달하지 못하면 -1 반환
        return -1;
    }

    static class Node {
        int x, y, distance;

        public Node(int x, int y, int distance) {
            this.x = x;
            this.y = y;
            this.distance = distance;
        }
    }
}
