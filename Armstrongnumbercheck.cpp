#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int num, sum, originalnumber;
    sum = 0;
    originalnumber = num;
    cout<<"Enter a number: ";
    cin>>num;

    while (num>0)
    {
        int enddigit = num%10;
        sum += pow(enddigit, 3);
        num = num/10;
    }

    if (sum == originalnumber)
    {
        cout<<"Its an Armstrong number!";
    }
    else
    cout<<"It's not an Armstrong Number!"; 
    
return 0;
}