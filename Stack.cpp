#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;
    int a[n],i,top=-1,maxstack=n-1,c;
    cout<<"1.Push\t2.Pop\t3.Show\t4.Exit\n";
    while(1)
    {
        cout<<"\nEnter your choice: ";
        cin>>c;
        if(c==1)
        {
            if(top==maxstack)
                cout<<"Overflow\n";
            else
            {
                top++;
                cout<<"Enter the number: ";
                cin>>a[top];
            }
        }
        else if(c==2)
        {
            if(top==-1)
                cout<<"Underflow\n";
            else
            {
                cout<<"the deleted item is: "<<a[top]<<endl;
                top--;
            }
        }
        else if(c==3)
        {
            if(top==-1)
                cout<<"The stack is empty.\n";
            else
            {
                for(i=0;i<=top;i++)
                    cout<<a[i]<<"\t";
                cout<<endl;
            }
        }
        else if(c==4)
            break;
        else
            cout<<"Wrong choice!\n";
    }
}
