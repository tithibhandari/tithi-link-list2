//the library
#include<iostream>
using namespace std;

class Node{
public:
//data
int data;
//pointer to the next
Node *next;
//constructer that makes the pointer to the null
Node(){
next = NULL;
 }
};
class Linkedlist{
	//head - circles insuide linked with each other
	public:
	//head circle type pointer
	Node * head;
	//since there is a single circle - head it also acts as a tail for first 
	Node * tail;
	//constructor that initially makes the head null
	Linkedlist (){
		head = NULL;
		tail= NULL; 
	}
	//circles linked with each other 

	//rules how they will be connected

	//insert function
	void insertt (int value){
		//first node has to be added 
		Node * temp = new Node; 
		// temp is the address of the node next to the head
		//insert the data in the node
		temp->data = value;
		/*now the head is not the null anymore but points to the add of the new node*/
		//
		if ( head == NULL){
			head = temp;

		}
		// second node onwards
		else {         
			tail->next =temp;
		}
		tail= temp; 
	}
	int insertat(int pos ,int value){
		Node * temp = new Node; 
		// temp is the address of the node next to the head
		//insert the data in the node
		temp->data = value;

		// reach place before the pos
		Node * current = head;
		//condition 
		if (pos == 1){
			temp->next = head;
			head = temp;    
		}
		else {
			int i = 1;
			while (i < pos-1){
				i++;
				current = current->next;
			}
		temp -> next = current -> next;
		current -> next = temp;
		}
		// create a node
		//Node * temp = new Node;
		
		return 0;
	}
    //count the number of nodes
    // calling a function 
    int count(){
    // conditiond applied
    if ( head == NULL){
        cout<<"0"<<endl;
      }
    else {
		int i;
     Node * current = head;
     for ( i=1;current->next != NULL;i++){
			current=current->next;
         
        }  
		cout<<i<<endl;
		}
       }
      
	//deletion
	//before tail has to point to null
	//update tail
	//delete temp
	void delet(){ 
		// store the tail in temp
			Node * temp = tail;
			// before tail has to point to null
			Node * current= head;
	while (current->next != tail)
          { 
            current = current->next;
          }
          current->next = NULL;    
          // update tail
          tail = current;
		//delete temp
	  delete temp;
	}
    // calling another function that deletes the node at a position
    int delpos (int post){
      Node * current = head; 
      //conditions applied 
      if (post == 1){
        head = current->next;
         }
       else {
             int i;
       //the loop begins 
        for (i=1;i< post-1;i++){
         current= current->next;
         }
        //declararing the temp
     Node*temp = (current->next)->next ;
        current->next = temp;
      }
     }
	//display function
	void display(){
       Node * current = head;
     //the loop starts    	
	 while (current != NULL){
	   cout << current->data << "-> ";
	   current  = current->next ; 
	   }
       cout<< endl;
	}
};
int main (){
Linkedlist l1;
l1.count();
l1. insertt (1);
l1. insertt (2);
l1. insertt (3);
l1. insertt (4);
l1. count ();
//calling the function
l1.insertat(2,10);
l1. display ();
l1. delet();
l1.delpos(3);
l1. display();

return 0 ;

} 



