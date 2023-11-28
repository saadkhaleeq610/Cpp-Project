#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    
    while (s<=e)
    {
        int mid = s+(e-s)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e = mid-1;
            }
        else{
            s = mid + 1;
        }
        }
    return -1;
}    


int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int resultindex = binarysearch(arr,n,key);
    if(resultindex == -1){
        cout<<"Not found!"<<endl;
    }
    else
    cout<<"The index of "<< key <<" is: "<< resultindex<< endl;
    
    return 0;
}