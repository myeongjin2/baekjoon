import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;

public class Main {
	public static void main(String args[]) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(bf.readLine());
		HashSet<String> d = new HashSet<String>();
		
		while(n-->0) {
			String[] line = bf.readLine().split(" ");
			if(line[1].equals("enter")) {
				d.add(line[0]);
			}
			else {
				d.remove(line[0]);
			}
		}
		String[] ans = d.toArray(new String[d.size()]);
		Arrays.sort(ans);
		int m = ans.length;
		for(int i=m-1;i>=0;i--) {
			System.out.println(ans[i]);
		}
	}
}
