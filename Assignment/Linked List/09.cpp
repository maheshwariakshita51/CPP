// //insert at between

// #include<bits/stdc++.h>
// using namespace std;

// class node {
//     public:
//     int data;
//     node*next;
    
//     node(int val){
//         data = val;
//         next = NULL; 
//     }
// };

// void print(node*head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp ->data <<" -> ";
//         temp = temp->next;
//     }
//     cout<<"null"<<endl;
// }


// int length(node*head){
//     node*temp=head;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void insertAtFront(node*&head , int val){
//     node*temp = new node(val);
//     temp->next=head;
//     head=temp;
// }

// void insertAtEnd(node *&head , int v){
//     node *temp=new node(v);
//     node*remp = head;
//     while(remp->next!=NULL){
//         remp=remp->next;
//     }
//     remp->next = temp;
// }

// void deleteAtfront(node *&head){
//     node*temp=head;
//     head = head->next;
//     delete(temp);
// }

// void deleteAtEnd(node*&head){
//     node*fast=head;
//     node*slow=head;
//     while(fast->next!=NULL){
//         slow=fast;
//         fast=fast->next;
//     }
//     slow->next=NULL;
//     delete(fast);
// }

// void addBetween(node*&head , int pos ,int val ){
//     node*newnode = new node(val);
    
//     node*temp1=head;
//     node*temp2=head;
    
//     int i = 0;
//     while(i< pos){
//         temp2=temp1;
//         temp1=temp1->next;
//         i++;
//     }
//     temp2->next=newnode;
//     newnode->next = temp1;
// }

// int main(){
//     node*head = new node(10);
//     head ->next = new node(20);
//     head ->next->next=new node(30);
//     head ->next->next->next=new node(40);
    
    
//     insertAtFront(head,5);
//     insertAtFront(head,2);
    
//     insertAtEnd(head,55);
//     print(head);
    
//     deleteAtfront(head);
//     deleteAtEnd(head);
//     print(head);
//     cout<<length(head)<<endl;
    
//     addBetween(head,3,100);
//     addBetween(head,5,200);
//     print(head);
   
// }









