#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[50],n,end,big,item,loc,mid,f=0;
    cout<<"how mamy elements you want to enter:";
    cin>>n;
    cout<<" enter the elements \n ";
    for(loc=1;loc<=n;loc++)
        cin>>a[loc];
    for(int k=1;k<n;k++)
    {
        for(int j=1;j<=n-k;j++)
        {
            if(a[j+1]<a[j])
            {
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"enter the number you want to find : ";
    cin>>item;
    end=n;
    big=1;
    mid=((big+end)/2);
    while(big<=end && a[loc]!=item)
    {
        if(item<a[mid])
            end=mid-1;
        else if(item>a[mid])
                big=mid+1;
        mid=((big+end)/2);
        if(item==a[mid])
        {
            loc=mid;
            cout<<"searching successful \n\n location of "<<item<<" is: "<<loc;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"search unsuccessful";
    getch();
    return 0;
}
