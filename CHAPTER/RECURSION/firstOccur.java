package CHAPTER.RECURSION;

import java.util.Scanner;

import javax.xml.transform.stream.StreamSource;

public class firstOccur {
    public static int firstTime(int arr[],int x,int start) {
        // Base case
        if(arr[start]==x){
            return start;
        }
        if(start>=arr.length-1){
            return -1;
        }
        // recursive call
        return firstTime(arr, x, start+1);
        
    }


    public static void main(String args[]) {
        // int arr[];
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
        System.out.println(firstTime(arr,x,0));




       

    }


    public static int lastTime(int arr[],int x,int start) {
        // Base case
        if(arr[start]==x){
            return start;
        }
        if(start>=arr.length-1){
            return -1;
        }
        // recursive call
        return lastTime(arr, x, start+1);
        
    }
    
}
