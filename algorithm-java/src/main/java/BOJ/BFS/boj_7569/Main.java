package BOJ.BFS.boj_7569;

import java.io.BufferedReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

class Tomato {
    int x, y, z;

    public Tomato(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
}

public class Main {
    public static int[] dx = {-1, 1, 0, 0, 0, 0};
    public static int[] dy = {0, 0, -1, 1, 0, 0};
    public static int[] dz = {0, 0, 0, 0, -1, 1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        int H = Integer.parseInt(st.nextToken());

        int[][][] boxes = new int[H][N][M];
        Queue<Tomato> queue = new LinkedList<>();

        // 토마토가 익은 경우 큐에 정보 저장
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                st = new StringTokenizer(br.readLine());
                for (int k = 0; k < M; k++) {
                    boxes[i][j][k] = Integer.parseInt(st.nextToken());
                    if (boxes[i][j][k] == 1) {
                        queue.offer(new Tomato(k, j, i));
                    }
                }
            }
        }

        int days = bfs(M, N, H, boxes, queue);

        // 결과 출력
        if (checkAllTomatoes(M, N, H, boxes)) {
            System.out.println(days);
        } else {
            System.out.println(-1);
        }
    }

    public static int bfs(int M, int N, int H, int[][][] boxes, Queue<Tomato> queue) {
        int days = -1;

        while (!queue.isEmpty()) {
            // 현재 큐에 들어있는 익은 토마토 수 구함
            int size = queue.size();

            // 익은 토마토 개수 만큼 반복 (주변 토마토에 대한 검토)
            for (int i = 0; i < size; i++) {
                // 큐에서 하나의 익은 토마토 꺼냄
                Tomato tomato = queue.poll();

                // 6방향으로 이동
                for (int j = 0; j < 6; j++) {
                    int nx = tomato.x + dx[j];
                    int ny = tomato.y + dy[j];
                    int nz = tomato.z + dz[j];

                    // 범위 안에 있고, 토마토가 익지 않은 경우
                    if (nx >= 0 && nx < M && ny >= 0 && ny < N && nz >= 0 && nz < H && boxes[nz][ny][nx] == 0) {
                        boxes[nz][ny][nx] = 1;
                        queue.offer(new Tomato(nx, ny, nz));
                    }
                }
            }

            days++;
        }

        return days;
    }

    // 모든 토마토가 익었는지 확인
    public static boolean checkAllTomatoes(int M, int N, int H, int[][][] boxes) {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < M; k++) {
                    if (boxes[i][j][k] == 0) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
}
