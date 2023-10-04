#include<iostream>
using namespace std;
class Node{
	private:	
	int data;
	Node *next;
	Node *prv;
		
	public:
	Node *head;
	
	Node(){
		head=NULL;
	}
	
	void insert_beg(int n){
		
		if(head==NULL){
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;
		 head->prv=NULL;	
			
		}
		
		else{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  p->prv= NULL;
		  head=p;
		   	
		}		
	}
	
	void del_beg(){
		
		if(head==NULL){
	
		 cout<<"No Nodes Exist"<<endl;	
			
		}
		
		else{
			
		  Node *ptr;
		  ptr = head;
		  head = head->next;
		  head->prv = ptr;
		  delete(ptr);
		  ptr = NULL;
		}		
	}
	
	void display()
	{
	Node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		cout << " \nNo data is in the list.."<<endl;
		return;
	}
	else{
		
		while(ptr!=NULL){
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
	
    }	
	
};

int main()
{
	Node n;
    
    n.insert_beg(20);
    n.insert_beg(30);
    n.insert_beg(50);
    n.insert_beg(150);
    n.del_beg();
    n.display();
	return 0;
	
}
