import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		int a,b,c;
		int maximum;
		
		Scanner scan = new Scanner(System.in);
		
		a=scan.nextInt();
		b=scan.nextInt();
		c=scan.nextInt();
		
		if(a==b&&b==c) {
			System.out.println(10000+a*1000);
		}
		else if (a!=b&&b!=c&&a!=c) {
			maximum=max(a,b,c);
			System.out.println(maximum*100);
		}
		else {
			if(a==b) {
				System.out.println(1000+a*100);
			}
			else if(b==c) {
				System.out.println(1000+b*100);
			}
			else if(a==c){
				System.out.println(1000+a*100);
			}
		}
		
	}
	
	static int max(int a,int b, int c) {
		int max=0;
		if(max<a) {
			max=a;
			if(max<b) {
				max=b;
				if(max<c) {
					max=c;
				}
			}
		}
		return max;
	}
}
