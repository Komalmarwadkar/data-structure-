#include<iostream>
#include<conio.h>
void merge(int a[],int,int,int);
void mergesort(int a[],int,int);
void main()
{
clrscr();
int arr [10],n=5,i;
cout<<"Enter element:";
for(i=0;i<n;i++)
{
 cin>>arr[i];
}
mergesort(arr,0,n-1);
cout<<"Merge sort:";
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
getch();
}
void merge(int a[],int lb,int mid,int ub)
{
int i,j,k;
int n1=mid-lb+1;
int n2=ub-mid;
int LA[10],RA[10];
for(i=0;i<n1;i++)
{
LA[i]=a[lb+i];
}
for(j=0;j<n2;j++)
{
RA[j]=a[mid+1+j];
}
i=0;
j=0;
k=lb;
while(i<n1 && j<n2)
{
if(LA[i]<=RA[j])
{
a[k]=LA[i];
i++;
}
else
{
a[k]=RA[j];
j++;
}
k++;
}
while(i<n1)
{
a[k]=LA[i];
i++;
k++;
}
while(j<n2)
{
a[k]=RA[j];
j++;
k++;
}
}
void mergesort(int a[],int lb,int ub)
{
if(lb<ub)
{
int mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
merge(a,lb,mid,ub);
}
}
