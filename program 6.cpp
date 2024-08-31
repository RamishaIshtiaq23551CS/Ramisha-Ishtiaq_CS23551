#include<iostream>
using namespace std;
void check_number(int n){
    int c=0,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            c=1;
        }
    }
    if(n%2==0&&c==0){
        cout<<n<<" is a prime even number";
    }
    else if(n%2!=0 && c==0){
        cout<<n<<"is a prime odd number";
    }
    else if(n%2==0 && c!=0){
        cout<<n<<"is a even number not prime";
    }
    else if(n%2!=0){
        cout<<n<<"is a odd number not prime";
    }
    else
        cout<<n<<"is not prime number";
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Nature of number:\n";
    check_number(n);
    return 0;
}