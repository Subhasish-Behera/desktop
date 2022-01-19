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
{                         //not ur usual dynamic allocation
    node* n=new node(val);//1st step see wht is in the constructor//belive me u are seeing this for first time//u are calling the constructor that u created to assingn NULL
    if(head==NULL)//it is desingened for a special case when there are no nodes present in a linked list,u directly asssingn the the 
    {
        head=n;
    } 
    node* temp=head;
    while((temp->next)!=NULL)
{temp=temp->next;
  
} 
temp->next=n;

}
void linkedListTraversal(node *head)
{    node* temp=head;
     while (temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main() {
    node* head=NULL;//please underStand it carefuly that pointer can be of any type and any pointer can be assingned a NULL
    InsertAtTail(head,4);
    InsertAtTail(head,56);
    linkedListTraversal(head);

    
    return 0;
}