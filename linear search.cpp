#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n],s,i,loc=-1;
    cout<<"Enter the numbers: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the number you want to search: ";
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            loc=i;
            break;
        }
    }
    if(loc==-1)
        cout<<"\nNot Found!\n";
    else
        cout<<"\nThe location of "<<s<<" is: "<<loc+1<<endl;
}
