#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n+1],i,p,t;
    a[0]=-10000;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=2;i<=n;i++)
    {
        t=a[i];
        p=i-1;
        while(t<a[p])
        {
            a[p+1]=a[p];
            p=p-1;
        }
        a[p+1]=t;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<"\t";
}
