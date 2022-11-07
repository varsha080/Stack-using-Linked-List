#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
node *top = NULL;
void push(int value)
{
	node *n = new node();
	n->data=value;
	n->next=top;
	top=n;
	cout<<n->data<<" is pushed "<<endl;
};
void pop()
{
	if(top==NULL)
	{
		cout<<"The Stack is empty "<<endl;
	}
	else
	{
		cout<<top->data<<" is poped from the list "<<endl;
		top=top->next;
	}
};
void display()
{
	node *ptr;
	if(top==NULL)
	{
		cout<<"Nothing to show "<<endl;
	}
	else
	{
		ptr=top;
		cout<<"The contents of the list are : ";
		while(ptr!=NULL)
		{
			cout<<"\n"<<"          "<<ptr->data<<"  ";
			ptr=ptr->next;
		}
	}
	cout<<endl<<endl;
};
int main() 
{
   int ch, value;
   cout<<"1) Push "<<endl;
   cout<<"2) Pop "<<endl;
   cout<<"3) Display "<<endl;
   cout<<"4) Exit "<<endl;
   do 
   {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
	  {
         case 1: 
		 {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            push(value);
            break;
         }
         case 2: 
		 {
            pop();
            break;
         }
         case 3: 
		 {
            display();
            break;
         }
         case 4: 
		 {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
		 {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   while(ch!=4);
   return 0;
}
