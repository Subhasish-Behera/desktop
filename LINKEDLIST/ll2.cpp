#include<iostream>//inserting a node in the beggining
using namespace std;
class node{public: int data;node* next;};
void linkedListTraversal(node *head)
{
     while (head != NULL)
    {
        printf("Element: %d\n", head->data);
        head = head->next;
    }
}
node* linkedListinsertinb(node* head,int data)
{
node *p;
p=new node;
p->data = data;
p->next = head;
 return p;
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;
    node *fifth;
    node *sixth;
    head=new node;
    second=new node;
    third=new node;
    fourth=new node;
    fifth=new node;
    sixth=new node;
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
     // Link fourth and fifth nodes
    fourth->data = 66;
    fourth->next = fifth;

    // Link fifth and sixth nodes
    fifth->data = 101;
    fifth->next = sixth;                                //sixth and data are both a pointer
    
    // Terminate the list at the third node
    sixth->data=234;
    sixth->next=NULL;
     
    head=(linkedListinsertinb(head,666));
    linkedListTraversal(head);
  
    
  return 0;  
}

