import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		int T = s.nextInt();
		long[][] dp = new long[65][10];
		
		for(int i=0; i<T; i++){
			int n = s.nextInt();
			
			for(int j=0; j<10; j++) {
				dp[1][j] = j + 1;
			}
			
			for(int j=2; j<=n; j++) {
				dp[j][0] = 1;
				for(int k=1; k<10; k++){
					dp[j][k] = dp[j-1][k] + dp[j][k-1];
				}
			}
			System.out.println(dp[n][9]);
		}
		
		s.close();
	}
}
