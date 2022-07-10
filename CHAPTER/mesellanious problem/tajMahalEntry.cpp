/* Taj Mahal Entry

There are total ‘n’ windows which provide the tickets to get entry into Taj Mahal. 
There are ‘Ai’ people already present at each window to get the tickets. Each window gives ticket to one person in one minute. Initially, Aahad stands in front of the first window. After each minute, if he didn’t get the ticket, he moves on to the next window to get the ticket. If he is at window 1, he will move to 2. If at 2nd, he will move to 3rd. If he is at last window, he will move to 1st again and so on. Find the window number at which he will get the ticket.*/



#include <iostream>
using namespace std;
int tajEntry(int arr[],int n){
    int i=0;
    while(arr[i]!=0){
        for(int j=0;j<n;j++){
            if(arr[j]==0){
                arr[j]=0;
            }
            else{
                arr[j]=arr[j]-1;
            }
        }
        // printing the array after first iteration
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        i++;

    }
    return i+1;

}
int main()
{
    int arr[4]={2,3,2,0};
    cout<<tajEntry(arr,4);

    

    return 0;
}

