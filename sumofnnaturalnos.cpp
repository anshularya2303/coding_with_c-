#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n,sum=0;
    cin>>n;
    
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
}
