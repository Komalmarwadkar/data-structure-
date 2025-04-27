#include<iostream>
#include<conio.h>
void quickSort(int[ ], int , int);
int partition(int [ ],int, int);
int main()
{
   clrscr();
  int a[5],n=5,i;
  cout<<"Enter array element ";
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  quickSort(a,0,n-1);
  for(i=0;i<n;i++) {
    cout<<" "<<a[i];
  }
  getch();
  return 0;
}
void quickSort(int a[],int lb,int ub) {
  int j;
  if(lb<ub)  {
      j=partition(a,lb,ub);
      quickSort(a,lb,j-1);
      quickSort(a,j+1,ub);
  }    
}
int partition(int a[ ], int lb, int ub) {
   int pivot, i , j, temp;
   pivot=a[lb];
   i=lb;
   j=ub;
   do {
	while ( i<=j && a[ i ]<=pivot)
	{
	  i++;
	}
	while(i<=j && a[j]>=pivot) {
	  j - -;
	}
	if(i<=j) {
	   temp=a[ i ];
	   a[ i ]=a[ j ];
	   a[ j ]=temp;
	}
   }
    while(i<j);
    a[lb]=a[j];
    a[j]=pivot;
    return (j);
}

  
 













