#include <iostream>
using namespace std;
int main(){

    int n, nex = 0;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        nex = 0;
        for (int j = i; j < n; j++)
        {
            nex += arr[j];
        }
            cout<< nex <<endl;
    }
    
return 0;
}