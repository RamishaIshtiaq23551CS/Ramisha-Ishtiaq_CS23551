#include<iostream>
#include<cmath>
using namespace std;
void swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"Values before swapping.";
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
    swap(a,b);
    cout<<"Values after swapping: ";
    cout<<"\na = "<<a<<"\nb = "<<b;
    return 0;
}
    void swap(int &x,int &y){
        int t;
        t=x;
        x=y;
        y=t;
    }