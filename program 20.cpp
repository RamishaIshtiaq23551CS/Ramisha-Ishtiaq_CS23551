#include<iostream>
using namespace std;
void sqr(int n);
int main()
{
    int num[5],i;
    cout<<"Enter five integers: ";
    for(int i=0;i<5;i++)
    cin>>num[i];
    cout<<"Calling the function......"<<endl;
    for(int i=0;i<5;i++)
    sqr(num[i]);
    return 0;
}
    void sqr(int n){
        cout<<n<<"\t"<<n*n<<endl;
    }