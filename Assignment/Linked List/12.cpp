// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data ;
//     node*next;
    
//     node(int val){
//         data= val;
//         next=NULL;
        
//     }
// };

// void print(node*head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// void InsertFront(node*&head){
//     node*temp=new node(1);
//     temp->next= head;
//     head=temp;
// }

// void InsertEnd(node*&head){
//     node*temp=new node(20);
//     node*remp=head;
//     while(remp->next!=NULL){
//         remp=remp->next;
//     }
//     remp->next=temp;
// }

// void Deletefront(node*&head){
//     node*temp=head;
//     head=head->next;
//     delete(temp);
// }

// void DeleteEnd(node*&head){
//     node*fast=head;
//     node*slow=head;
//     while(fast->next!=NULL){
//         slow=fast;
//         fast=fast->next;
//     }
//     slow->next=NULL;
//     delete(fast);
// }

// int length(node*head){
//     node*temp=head;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }

// void addBetween(node*&head,int val , int pos){
//     node *newnode = new node(val);
//     node*slow=head;
//     node*fast=head;
//     int i=0;
//     while(i<pos){
//         slow=fast;
//         fast=fast->next;
//         i++;
//     }
//     slow->next = newnode;
//     newnode->next=fast;
// }

// void deleteBetween(node*&head ,int pos){
//     node*slow=head;
//     node*fast=head;
//     int i=0;
//     while(i<pos){
//         slow=fast;
//         fast=fast->next;
//         i++;
//     }
//     slow->next = fast->next;
//     delete fast;
// }

// int main(){
//     node*head = new node(5);
//     head->next=new node(10);
//     head->next->next = new node(15);
//     InsertFront(head);
//     InsertEnd(head);
//     addBetween(head,100,3);
//     print(head);
//     deleteBetween(head,4);
//     print(head);
//     cout<<length(head)<<endl;
    
    
//     Deletefront(head);
//     DeleteEnd(head);
//     print(head);
//     cout<<length(head);
// }


// reverse LL

//  ListNode* reverseList(ListNode* head) {
//         ListNode*prv=NULL;
//         ListNode*curr=head;
//         ListNode*front;
//         while(curr!=NULL){
//             front = curr->next;
//             curr->next=prv;
//             prv=curr;
//             curr=front;
//         }
//         return prv;




// pallindrome ll

//  bool isPalindrome(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head->next;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//         ListNode* prev = NULL;
//         ListNode* curr = slow->next;
//         ListNode* front;

//         while (curr != NULL) {
//             front = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = front;
//         }

//         ListNode*first = head;
//          ListNode*second=prev;
//           while (second != NULL) {
//             if (first->val != second->val){
//                 return false;
//             }
//                 first = first->next;
//                 second = second->next;
//         }
//         return true;





//  ListNode* deleteMiddle(ListNode* head) {
//         if(head->next==NULL){
//             return NULL;
//         }

//         ListNode*slow = head;
//         ListNode*fast=head;
//         ListNode*prv=head;

//         while(fast != NULL && fast->next!=NULL){
//             prv=slow;
//             slow=slow->next;
//             fast = fast->next->next;
//         }

//         prv->next = slow->next;
//         delete slow;

//         return head;




//   ListNode* middleNode(ListNode* head) {
        
        // ListNode*slow=head;
        // ListNode*fast=head;
        // while(fast!=NULL && fast->next!=NULL){
        //  slow=slow->next;
        //  fast=fast->next->next;   
        // }
        // return slow;