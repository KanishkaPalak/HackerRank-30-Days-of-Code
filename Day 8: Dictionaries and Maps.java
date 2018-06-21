//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution
{
    public static void main(String []args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<String,Integer> myMap = new HashMap<String,Integer>();
        for(int i = 0; i < n; i++)
        {
            String name = in.next();
            int phone = in.nextInt();
            myMap.put(name,phone);// Write code here
        }
        while(in.hasNext()){
            String s = in.next();
            if(myMap.containsKey(s)==true)
                System.out.println(s+"="+myMap.get(s));
            else
                System.out.println("Not found");
            // Write code here
        }
        in.close();
    }
}
