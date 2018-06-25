import java.util.Arrays;
import java.util.Scanner;

public class Main{
	static int arr[][];
	static int dx[] = {-1, 0, 1, 0};
	static int dy[] = {0, -1, 0, 1};
	static int m;
	static int n;
	static int result[];
	
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		result = new int[3000];
		m = s.nextInt();
		n = s.nextInt();
		int k = s.nextInt();
		int count=1;
		
		arr = new int[m][n];
		
		while(k-- > 0) {
			int y1 = s.nextInt();
			int x1 = s.nextInt();
			int y2 = s.nextInt();
			int x2 = s.nextInt();
			
			for(int i=x1; i<x2; i++) {
				for(int j=y1; j<y2; j++) {
					arr[i][j]=1;
				}
			}
		}
		
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 0) {
                    dfs(i, j, count);
                    count++;
                }
            }
        }

        System.out.println(count-1);
        Arrays.sort(result, 1, count);
        for(int i=1;i<count;i++) {
        	System.out.print(result[i]+" ");
        }
        s.close();
	}
    public static void dfs(int x, int y, int count) {
    	arr[x][y] = -1;
    	result[count]++;
        for (int i = 0; i < 4; i++) {
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            if (nextX < 0 || nextY < 0 || nextX >= m || nextY >= n) {
                continue;
            }
            
            if (arr[nextX][nextY] == 0) {
                dfs(nextX, nextY, count);
            }
        }
    }
}
