#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n],s,i,b=0,e=n-1,m;
    cout<<"Enter the numbers in a sorted way:\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the number you want to search: ";
    cin>>s;
    m=(b+e)/2;
    while(b<=e && a[m]!=s)
    {   if(a[m]<s)
           b=m+1;
        else
            e=m-1;
        m=(b+e)/2;
    }
    if(a[m]==s)
        cout<<"\nThe location of "<<s<<" is: "<<m+1<<endl;
    else
        cout<<"\nNot Found!"<<endl;
}
