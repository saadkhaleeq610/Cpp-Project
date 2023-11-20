//This program prints fibbonacci series till nth number

#include <iostream>
using namespace std;
void fib(int n){
    int term1 = 0;
    int term2 = 1;
    int nterm;
    
    for (int i = 1; i <= n; i++)
    {
        cout<<term1<<endl;
        nterm = term1 + term2;
        term1=term2;
        term2=nterm;
    }
    
}

int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    fib(n);

return 0;
}
