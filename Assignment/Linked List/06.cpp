// //delete at end

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
// void print(node *head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp ->data <<" -> ";
//         temp = temp->next;
//     }
//     cout<<"null";
// }
// void insertfront(node *&head){
//     node*temp=new node(0);
//     temp->next=head;
//     head=temp;
// }

// void insertend(node *&head){
//     node *temp=new node(4);
//     node*remp = head;
//     while(remp->next!=NULL){
//         remp=remp->next;
//     }
//     remp->next = temp;
// }

// void deletefront(node *&head){
//     node*temp=head;
//     head=head->next;
//     delete(temp);
// }

// void deleteend(node *&head){
//     node*fast=head;
//     node*slow=head;
//     while(fast->next !=NULL){
//         slow = fast;
//         fast = fast->next;
//     }
//     slow->next=NULL;
//     delete(fast);
// }

// int main(){
//     node*head = new node(1);
//     head ->next = new node(2);
//     head ->next->next=new node(3);
//     insertfront(head);
//     insertend(head);
//     deletefront(head);
//     deleteend(head);
//     print(head);
   
// }