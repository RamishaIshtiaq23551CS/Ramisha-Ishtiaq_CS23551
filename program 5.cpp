#include<iostream>
using namespace std;
void factorial(int n);
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    factorial(num);
    return 0;
}
    void factorial(int n){
        int i;
        long fact;
        for(i=1;i<=n;i++){
            fact*=i;
        }
            cout<<"Factorial of "<<n<<" is "<<fact;
    }