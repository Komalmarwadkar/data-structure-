#include<iostream>
#include<conio.h>
int main()
{
	int a[5],i,x,mid,s,e;
	clrscr();
	cout<<"Enter array element: ";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n The array element are: ";
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
	cout<<"\n Enter the element to find: ";
	cin>>x;
	s=0;
	e=5-1;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(x==a[mid])
		{
			cout<<"element found at= "<<mid+1;
			break;
		}
		else if(x>a[mid])
		{
			s=mid+1;
		}
		else if(x<a[mid])
		{
			e=mid-1;
		}
		else
		{
			cout<<"element not found:";
		}
	}
	getch();
	return 0;
}    
