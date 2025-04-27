#include<iostream>
#include<conio.h>
int linearsearch(int a[],int n,int val)
 {
   for(int i=0;i<n;i++)
   {
    if(a[i]==val)
    return i+1;
   }
    return -1;
 }
    void main()
    {
     int a[]={20,40,50,100,40,90};
     int val=50;
     int n=sizeof(a) / sizeof(a[0]);
     int res = linearsearch(a,n,val);
    }
     clrscr();
     {
      cout<<"The Element of the array are:";
      for(int i=0;i<n;i++)
      cout<<a[i]<<"\t";
      cout<<"\n Element to be search is:"<<val;
      if(res==-1)
      {
      cout<<"\n Element is not present in The array:";
      }
     else
     {
         cout<<"\n Element is present at "<< res << "position of Array";
         getch();
     }
    }
