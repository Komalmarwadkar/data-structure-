#include<iostream>
#include<conio.h>
void main()
{
clrscr();
int a[5],n=5,i,j,temp;
cout<<"Enter 5 elements of array";
for(i=0;i<n;i++)
{
  cin>>a[i];
}
cout<<"Array before sort";
for(i=0;i<n;i++)
  {
   cout<<a[i]<<"\n";
  }
cout<<" \n insertion sort: ";
for(i=1;i<n;i++)
   {
    temp=a[i];
    j=i-1;
     while(j>=0 && a[j]>temp)
    {
     a[j+1]=a[j];
     j--;
    }
 a[j+1]=temp;
  }
     for(i=0;i<n;i++)
    {
     cout<<a[i]<<" " ;
  }
      getch();
}

