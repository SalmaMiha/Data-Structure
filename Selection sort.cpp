//Selection sort:
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n],m,loc,i,j,t;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        m=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(m>a[j])
            {
                m=a[j];
                loc=j;
            }
        }
        swap(a[i], a[loc]);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
}


