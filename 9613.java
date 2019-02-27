import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner s = new Scanner(System.in);
        
    	int t = s.nextInt();
    	
    	for(int i=0; i<t; i++){
    		int n = s.nextInt();
    		int[] array = new int[n];
    		
    		for(int j=0; j<n; j++){
    			array[j] = s.nextInt();
    		}
    		
    		long sum = 0;
    		for(int j=0; j<n-1; j++){
    			for(int k=j+1; k<n; k++){
    				sum+=gcd(array[j], array[k]);
    			}
    		}
    		System.out.println(sum);
    	}
        s.close();
    }
    static int gcd(int a, int b){
    	return b == 0 ? a : gcd(b, a%b);
    }
}
