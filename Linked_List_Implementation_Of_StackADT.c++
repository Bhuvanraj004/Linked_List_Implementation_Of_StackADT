
#include<iostream.h>
 #include<conio.h> 
 #include<stdlib.h>
//using namespace std; class node
{
public:
class node *next; int data;
};
 

class stack : public node
{
node *head; int tos; public:
stack()
{
tos=-1;
}
void push(int x)
{
if (tos < 0 )
{
head =new node;
head->next=NULL; head->data=x; tos ++;
}
else
{
node *temp,*temp1; temp=head; if(tos >= 4)
{
cout <<"stack over flow"; return;
}
tos++;
while(temp->next != NULL) temp=temp->next; temp1=new node;
temp->next=temp1; temp1->next=NULL; temp1->data=x;
}
}
void display()
{
node *temp; temp=head; if (tos < 0)
{
cout <<" stack under flow"; return;
}
 

while(temp != NULL)
{
cout <<temp->data<< " "; temp=temp->next;
}
}
void pop()
{
node *temp; temp=head; if( tos < 0 )
{
cout <<"stack under flow"; return;
}
tos--;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
temp->next=NULL;
}
};
main()
{
Clrscr(); stack s1; int ch; while(1)
{
cout <<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n enter ur choice:"; cin >> ch; switch(ch)
{
case 1: cout <<"\n enter a element"; cin >> ch;
s1.push(ch); break;
case 2: s1.pop();break;
case 3: s1.display(); break;
case 4: exit(0);
}
}
 

return (0);
}

