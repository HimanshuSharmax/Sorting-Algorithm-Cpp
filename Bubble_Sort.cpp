
#include<iostream>
using namespace std;
int main()
{
	int a[50],n,i,j,temp;
	cout<<"Enter the size of array of integers: ";
	cin>>n;
	cout<<"Enter the array elements: ";

	for(i=0;i<n;++i)
		cin>>a[i];

	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}

	cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];

	return 0;
}






/*
#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   float a[9] = {100,200,20, 75,89.198, 345,56,34,35};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<9; i++) {
   for(j = i+1; j<9; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<9; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}

*/