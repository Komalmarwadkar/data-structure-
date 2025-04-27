#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[5] , i , j , temp , n=5 ;
cout<<"Enter 5 elements of array";
for(i=0 ; i<n ; i++)
{
cin>>A[i] ;
}
cout<<"The array element before sort:";
for(i=0 ; i<n ; i++)
{
cin>>A[i]<<" \n ";
}
cout<<"\n selection sort";
for(i=0 ; i<n-1 ; i++)
{
int min=i;
for (j=i+1 ; j<n ; j++)
{
if( A[j] < A[min] )
{
min=j;
}}
if(min!=i)
{
temp=A[min];
A[min]=A[i];
A[i]=temp;
}}
for(i=0;i<n;i++)
{
cout<<A[i]<<" \n ";
}
getch();    
}