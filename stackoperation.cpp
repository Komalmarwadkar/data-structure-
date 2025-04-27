#include<iostream>
#include<conio.h>
#include<process.h>
class stack
{
  int s[3],top,ele;
  public:
  stack()
  {
    top=-1;
  }
  void push();
  void pop();
  void disp();
};
void stack::push()
{
  if(top==2)
  {
    cout<<"\n stack is overflow";
  }
  else
  {
  cout<<"\n enter element to inset";
  cin>>ele;
  top=top+1;
  s[top]=ele;
  }
}
void stack::pop()
{
   if(top==-1)
   {
   cout<<"\n stack is underflow";
   }
   else
   {
   ele=s[top];
   cout<<"\n deleted element is==>"<<ele;
   top=top-1;
   }
}
void stack::disp()
{
   cout<<"\n stack elements are==>";
   for(int i=top;i>=0;i--)
   {
       cout<<s[i]<<" ";
   }
}
int main()
{
   stack s;
   int ch;
   clrscr();
   cout<<"\n 1 for push";
   cout<<"\n 2 for pop";
   cout<<"\n 3 for disp";
   cout<<"\n 4 for exit";
   while(ch)
   {
      cout<<"\n enter choice";
      cin>>ch;
      switch(ch)
      {
	 case 1:s.push();break;
	 case 2:s.pop();break;
	 case 3:s.disp();break;
	 case 4:exit(0);
      }
  }
  getch();                                                      
  return(0);        OutPut:
