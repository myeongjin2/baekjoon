import java.util.PriorityQueue;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int i=0; i<N; i++) {
        	int x = s.nextInt();
        	
            if (x == 0) {
                if (pq.isEmpty()) { 
                	System.out.println(0);
                }
                else {
                	System.out.println(pq.poll());
                }
            } 
            else {
                pq.add(x);
            }
        }
        s.close();
    }
}
