#include<iostream>
using namespace std;
void table(int n);
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    table(num);
    return 0;
}
    void table(int n){
        int c;
        for(int c=0; c<=10; c++){
            cout<<n<<" * "<<c<<"="<<n*c<<endl;
        }
    }