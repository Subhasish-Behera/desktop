#include<iostream>
using namespace std;
class node
{public:
    int data;
    node* next;
};
void transversal(node* head)
{cout<<"j"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
node* insertinbeggining(node* head,int p)
{   
    cout<<"i"<<endl;
    node* newb;
      newb->data=p;
      newb->next=head;
   return newb;
}
int main() {
    node *head=new node;
    node *second=new node;
    node *third=new node;
    node *fourth=new node;
   
    head->data=12;
    head->next=second;

    second->data=23;
    second->next=third;

    third->data=235;
    third->next=fourth;

    fourth->data=9;
    fourth->next=NULL;

    transversal(head);
    head=insertinbeggining(head,6);
    transversal(head);
    return 0;
}
