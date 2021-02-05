import java.util.Scanner;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		
		int n = sc.nextInt();	  
		int index;

		for(int q=0 ; q<n ; q++){
	        int m = sc.nextInt(); 
	        int c = sc.nextInt(); 
	        int[] dados = new int[c];
	        
	        for (int i=0 ; i<c ; i++)
	        	dados[i] = sc.nextInt();
			
	        String[] keys = new String[m];
            Arrays.fill(keys, "");
            
            for (Integer x : dados) {
            	index = x % m;
                keys[index] += " -> " + x;
            }
            
            for (int i=0 ; i<m ; i++){ 
                System.out.println(i + keys[i] + " -> \\");
            }
            if (q<n-1) 
            	System.out.println();
		}
		sc.close();
	}
}
