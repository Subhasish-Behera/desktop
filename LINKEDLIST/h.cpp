#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;

    }
};
void InsertAtTail(node *head,int val)
{
    node* n=new node(val);//u are calling the constructor that u created to assingn NULL
    if(head==NULL)//it is desingened for a special case when there are no nodes present in a linked list,u directly asssingn the the 
    {
        head=n;
    } 
    node* temp=head;
    while((temp->next)!=NULL)
{temp=temp->next;
  
} 
temp->next-n;

}
void linkedListTraversal(node *head)
{
     while (head != NULL)
    {
        printf("Element: %d\n", head->data);
        head = head->next;
    }
}
int main() {
    node* head=NULL;
    InsertAtTail(head,4);
    InsertAtTail(head,56);
    linkedListTraversal(head);

    
    return 0;
}