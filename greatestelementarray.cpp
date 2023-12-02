#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n, maxim;
    cout<<"Enter the number of elements you wanna input: "<<endl;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        maxim = max(arr[i], arr[i+1]);
    }

    cout<<maxim;    
    
return 0;
}