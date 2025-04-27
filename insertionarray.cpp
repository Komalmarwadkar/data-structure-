#include<iostream>
#include<conio.h>
void main()
{
clrscr();
int a[10],n=5,k,data,i;
cout<<"enter the 5 element in array ";
for (i=0; i<n; i++)
{
cin>>a[i];
}
For (i=0;i<n;i++)
{
cout<<" \n number of location" <<i<<"is " <<a[i];
}
cout<<"\n enter the location ";
cin>>k;
cout<<"\n enter new element ";
cin >>data;
for (i=n-1;i>k-1;i--)
{
a[i+1]=a[i];
}
a[k]=data;
for (i=0;i<n+1;i++)
{
cout<<"\n element location"<<i<<"is "<<a[i];
}
getch();
return(0);
}                                      

