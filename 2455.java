import java.util.Scanner;

public class Main {
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		int sum = 0;
		int max = 0;
		
		for(int i=0; i<4 ;i++){
			int unload = s.nextInt();
			int take = s.nextInt();
			
			sum -= unload;
			sum += take;
			max = Math.max(max, sum);
		}
		System.out.println(max);

	}
}
