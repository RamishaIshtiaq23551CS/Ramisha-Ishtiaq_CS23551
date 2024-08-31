#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double term;
    int n;
    unsigned long fact(int);
    cout<<"Enter the maximum value of denominator: ";
    cin>>n;
    double sum=0;
    for(int i=0; i<=n;i++){
        term=1.0/fact(i);
        sum+=term;
    }
    cout<<"Sum of series: "<<sum;
    return 0;
}
    unsigned long fact(int n){
        unsigned long prod=1;
        int i;
        for(int i=1;i<=n;i++){
            prod*=i;
            return prod;
        } 
    }