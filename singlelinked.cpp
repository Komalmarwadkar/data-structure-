#include<iostream> 
#include<conio.h> 
#include<process.h> 
class ll { 
    int info,ele; 
    ll *node,*start,*link,*move; 
    public: ll() { 
        start=NULL; 
} 
void ins_beg(); 
void del_beg(); 
void disp(); }; 
void ll::del_beg() 
{ 
if(start==NULL) 
{ 
cout<<"\n link list is empty" ; 
} 
else { 
    move=start; start=move->link; 
    move->link=NULL; 
} } 
void ll::ins_beg() 
{ 
ll *node1=new ll; 
cout<<"\n enter element to insert==>> "; 
cin>>ele; node1->info=ele; 
node1->link=NULL; 
if(start==NULL) 
{ 
start=node1; 
}
 else { 
    move=start; start=node1; node1->link=move; 
} } 
void ll::disp() 
{ 
    if(start==NULL) 
{ 
cout<<"\n Link list is empty"; 
} 
else { 
    move=start; 
    while(move!=NULL) 
{ 
    cout<<" "<<move->info; 
    move=move->link; 
} 
} } 
int main() 
{
     ll l1; 
     int ch; 
     clrscr(); 
cout<<"\n enter 1 for insert 2 for disp 3 for del 4  for exit "; 
while(ch!=4) 
{ 
cout<<"\n enter choice"; 
cin>>ch; switch(ch) 
{ case 1:l1.ins_beg();break; 
    case 2:l1.disp();break; 
    case 3:l1.del_beg();break; 
    case 4:exit(0); 
} } 
clrscr(); 
getch(); 
return(0); 
} 
