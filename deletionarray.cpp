#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],n=5,k,i,data;
cout<<"enter the elements:" ;
for (i=o;i<n;i++)
{
cin>>a[i];
}
For (i=0;i<n;i++)
{
cout<<"\n number of location"<<i<<"is"<<a[i];
}
cout<<"\n enter location which you want to delete:";
cin>>k;
for (i=k;i<n;i++)
{
a[i]=a[i+1];
}
a[k-1]-data;
for(i=0;i<n-1;i++)
{
cout<<"\n Element location:"<<i<<"is"<<a[i];
}
getch();
}    
                            

