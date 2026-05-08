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

// int main(){
//     node*head = new node(10);
//     head ->next = new node(20);
//     head ->next->next=new node(30);
//     head ->next->next->next=new node(40);
    
    
//     insertAtFront(head,5);
//     insertAtFront(head,2);
//     print(head);
//     cout<<length(head);
   
// }









