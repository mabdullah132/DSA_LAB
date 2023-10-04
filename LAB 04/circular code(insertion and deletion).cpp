#include<iostream>
using namespace std;
class node{
	private:
		int data;
		node *next;
	public:
		node *head;
	node(){
		head=0;
	}
	void insert_attail(int v){
		node *temp;
		node *n=new node();
		n->data=v;
		n->next=NULL;
		temp=head;
		
		while(temp->next!=head){
			temp=temp->next;
		}
		
		temp->next=n;
		n->next=head;
    }
    void insert_athead(int v){
    	node *temp;
    	node *n=new node();
    	if(head==NULL){
    		n->next=n;
    		head=n;
		}
		else{
		
        temp=head;
    	n->data=v;
    	n->next=NULL;
    	while(temp->next!=head){
    		temp=temp->next;
		}
		temp->next=n;
		n->next=head;
		head=n;
	    }
    }
    void delete_athead(){
    	node *temp,*todelete;
    	while(temp->next!=head){
    		temp=temp->next;
		}
		todelete=head;
		temp->next=head->next;
		head=head->next;
		delete todelete;
	}
	void delete_atpos(node* &head,int pos){
		if(pos==1){
			delete_athead();
		}
		else{
			node* temp=head;
			int count=1;
			while(count!=pos-1){
				temp=temp->next;
				count++;
			}
			node* todelete=temp->next;
			temp->next=temp->next->next;
			delete todelete;
		}
	}
    void display(){
    	node *temp;
    	temp=head;
    	do{
    		cout<<temp->data<<" ";
    		temp=temp->next;
		}while(temp->next!=head);
		cout<<endl;
	}
};
int main(){
	node x;
	node* head=NULL;
	
	x.insert_athead(5);
	x.insert_athead(6);
	x.insert_athead(7);
	x.insert_athead(8);
	x.insert_athead(9);
	x.insert_attail(2);
	x.display();
	x.delete_athead();
	x.delete_atpos(head,2);
	x.display();
    return 0;
}
