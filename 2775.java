import java.util.Scanner;

public class Main {
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		
		int t = s.nextInt();
		int[][] dp = new int[15][15];
		
		for(int i=0; i<t; i++){
			int k = s.nextInt();
			int n = s.nextInt();
			
			for(int j=1; j<15; j++){
				dp[0][j] = j;
			}
			
			for(int j=1;j<15;j++){
				for(int l=1;l<15;l++){
					dp[j][l] = dp[j-1][l]+dp[j][l-1];
				}
			}
			
			System.out.println(dp[k][n]);
			 
		}
	}
}
