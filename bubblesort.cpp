#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a[5], i , j , temp , n=5;
cout<<"Enter the 5 array elements:\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"The array elements before sort:\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<"\n";
}
cout<<"bubble sort:";
for (i=0;i<n;i++){
for(j=0;j<n-1;j++){
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}}
for(i=0;i<n;i++)
{
cout<<a[i]<<"\n";
}
return 0;
getch();
}                        
