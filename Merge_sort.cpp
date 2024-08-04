 #include<math.h>
#include<conio.h>
#include<iostream>
#define MAX 5044
using namespace std;
int a[MAX],b[MAX]; // declaring global vari
// declaration of fn
void merge(int a[],int,int,int);
void mergesort(int a[],int p,int r)
{   int q; 
    if(q<r)
    {  q=(p+r)/2;
       mergesort(a,p,q);
       mergesort(a,q+1,r);
       merge (a,p,q,r);
	}
}
void merge (int a[], int p, int q, int r)
{  int i,j,k;
   k=0;
   i=p;
   j=q+1;
   while(i<=q && j<=r)
   { if(a[i]<a[j])
     b[k++]=a[i++];
     else
     b[k++]=a[j++];
   }
   while(i<=q)
   b[k++]=a[i++];
   while(j<=r)
   b[k++]=a[j++];
   for(i=r;i>=p;i--)
   a[i]=b[--k];
}
int main()
{ int size, i;
  cout<<"enter size of array: ";
  cin>>size;
  cout<<"enter "<<size<<" elements of array:\n";
  for(i=0;i<size;i++)
  cin>>a[i];
  mergesort(a,0,size);
  cout<<"sorted list is : ";
  for(i=1;i<=size;i++)
  cout<<"\t"<<a[i];
  return 0;
  
}