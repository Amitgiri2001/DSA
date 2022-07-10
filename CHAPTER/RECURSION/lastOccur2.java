package CHAPTER.RECURSION;

import java.util.Scanner;

public class lastOccur2 {
    public static int ans=0;

    public static int lastTime(int arr[],int x,int start) {
        // Base case
        
        if(arr[start]==x){
            ans=start;
        }
        if(start>=arr.length-1){
           ans= -1;
        }
        // recursive call
        firstOccur.lastTime(arr, x, start+1);
        return ans;

        
    }

    public static void main(String args[]) {
    int n;
    System.out.println("Enter array size: ");
    Scanner sc=new Scanner(System.in);
    n=sc.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter all array Elements: ");
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();

    }
    System.out.println("Which element you want to find: ");
    int x=sc.nextInt();

    System.out.println(lastTime(arr, x, 0));
    
}
}