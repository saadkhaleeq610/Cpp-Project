#include <iostream>
#include <cmath>

using namespace std;
int conversion(int n){
    int decimalnum = 0, a = 0, r;

    while (n>0)
    {
        int r = n%10;
        n = n/10;
        decimalnum = decimalnum + r * pow(2,a);
        a++;
    }
    return decimalnum;    
}

int main(){

    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<conversion(n);

    return 0;
}