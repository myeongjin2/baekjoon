import java.util.Scanner;

public class Main {
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int line = 0;
		int temp = 0;
		int count = 0;
		int k = 1;
		
		while(temp < n) {
			line++;
			temp += line;
		}
		
		count = n - (line*(line-1)/2 + 1);
		
		if(line % 2 == 0){
			System.out.print(k+count);
			System.out.print('/');
			System.out.println(line-count);
		}
		else{
			System.out.print(line-count);
			System.out.print('/');
			System.out.println(k+count);
		}
		
	}
}
