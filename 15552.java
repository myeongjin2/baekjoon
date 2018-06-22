import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) );
		BufferedWriter bw = new BufferedWriter( new OutputStreamWriter( System.out ) );
		StringTokenizer st = new StringTokenizer( br.readLine() );
		int T = Integer.parseInt(st.nextToken());
		int[] result = new int[T];
		for(int i=0;i <T;i++) {
			st = new StringTokenizer( br.readLine() );
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			result[i] = a+b;
		}
		for(int i=0;i<T;i++) {
			bw.write(String.valueOf(result[i]));
			bw.newLine();
		}
		
		bw.flush();
	}
}
