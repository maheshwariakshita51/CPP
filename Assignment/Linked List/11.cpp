// #include<bits/stdc++.h>
// using namespace std;

// class node {
//     public:
//     int data;
//     node*next;
    
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };

// void print(node*head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"null"<<endl;
// }

// void AddBetween(node*&head , int pos, int val){
//     node*newnode = new node(val);
    
//     node*slow=head;
//     node*fast=head;
    
//     int i=0;
//     while(i<pos){
//         fast=slow;
//         slow=slow->next;
//         i++;
//     }
//     fast->next = newnode;
//     newnode->next=slow;
// } 
// void deleteAtGiven(node*&head , int pos){
//     node*slow=head;
//     node*fast=head;
//     int i=0;
//     while(i<pos){
//         slow=fast;
//         fast=fast->next;
//         i++;
//     }
//     slow->next=fast->next;
//     delete fast;
    
// }


// int main(){
//     node*head=new node(10);
//     head->next=new node(20);
//     head->next->next=new node(30);
    
//     AddBetween(head,2,100);
//     deleteAtGiven(head,3);
//     print(head);
// }



// // 