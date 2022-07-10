package CHAPTER.RECURSION;

public class isSorted {
   public static boolean isSorted(int arr[],int n){
        // if there are only one  element we sure that it is in sorted order
        // Base Case
        if(n<=1){
            return true;
        }
        if(arr[0]>arr[1]){
            return false;
        }
        // recursive call
        // Create a new array and then recursively call it
        int ans[]=new int[n-1];
        for(int i=1;i<n;i++){
            ans[i-1]=arr[i];
        }
        return isSorted(ans,n-1);
    
    }
    public static boolean isSorted_2(int arr[],int start){
        // if there are only one  element we sure that it is in sorted order
        // Base Case
        if(start >= (arr.length-1)){
            return true;
        }
        if(arr[start]>arr[start+1]){
            return false;
        }
        // recursive call
        
        return isSorted(arr,start+1);
    
    }
    public static void main(String args[]) {
        int arr[]={2,11,1,19,42};
        System.out.println(isSorted(arr,5));
        System.out.println(isSorted_2(arr,0));

    }
    
}
