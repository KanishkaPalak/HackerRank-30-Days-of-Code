import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner scan=new Scanner(System.in);
        int n,i,j;
        String e="",o="";
        n=scan.nextInt();
        String s[]=new String[n];
        for(i=0;i<n;i++)
        {
            s[i]=scan.next();
            char c[]=s[i].toCharArray();
            for(j=0;j<s[i].length();j++)
            {
                if((j%2)==0)
                    e+=c[j];
                else
                    o+=c[j];
            }
            System.out.println(e+" "+o);
            e="";o="";
        }
    }
}
