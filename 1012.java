import java.util.Scanner;

public class Main {
    static int[] dx = { -1, 0, 1, 0 };
    static int[] dy = { 0, 1, 0, -1 };
    static int[][] arr;
    static int N;
    static int M;
 
    public static void main(String[] args) throws Exception {
        Scanner s = new Scanner(System.in);
        int T = s.nextInt();
        
        while(T-- > 0) {
            N = s.nextInt();
            M = s.nextInt();
            int K = s.nextInt();
            int count = 0;
            arr = new int[N][M];
            
            for (int i = 0; i < K; i++) {
            	int x = s.nextInt();
            	int y = s.nextInt();
                arr[x][y] = 1;
            }
            
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (arr[i][j] == 1) {
                        DFS(i, j);
                        count++;
                    }
                }
            }
 
            System.out.println(count);
        }
        s.close();
    }
 
    public static void DFS(int X, int Y) {
        for (int i = 0; i < 4; i++) {
            int nextX = X + dx[i];
            int nextY = Y + dy[i];

            if (nextX < 0 || nextY < 0 || nextX >= N || nextY >= M) {
                continue;
            }
            
            if (arr[nextX][nextY] == 0) {
                continue;
            }
            
            arr[nextX][nextY] = 0;
            DFS(nextX, nextY);
        }
    }
}
