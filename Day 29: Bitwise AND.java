import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int k = in.nextInt();
            int num=solve(n,k);
            System.out.println(num);
        }
        in.close();
    }
        
        static int solve(int n, int k) {
		int result = 0;
		for (int A = 1; A <n ; A++) {
			for (int B = A + 1; B <= n; B++) {
				int current = A & B;
				if (current > result && current < k) {
					result = current;
				}
			}
		}
		return result;
	}
}
