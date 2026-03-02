#include <iostream>
using namespace std;
class Dll
{
public:
    int data;
    Dll *next;
    Dll *pre;
    Dll(int data)
    {
        this->data = data;
        this->next = NULL;
        this->pre = NULL;
    }
    ~Dll()
    {
        int value=this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        
    }
};
void display(Dll *&head)
{
    Dll *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
int getlenth(Dll *&head)
{
    int len = 0;
    Dll *temp = head;
    while (temp != NULL)
    {
        // cout<<temp->data<<endl;
        temp = temp->next;
        len++;
    }
    return len;
}
void insertathead(Dll *&head, int data)
{
    Dll *temp = new Dll(data);
    temp->next = head;
    head->pre = temp;
    head = temp;
}
void insertattail(Dll *&tail, int data)
{
    Dll *temp = new Dll(data);
    tail->next = temp;
    temp->pre = tail;
    tail = temp;
}
void deletenode(Dll*&head,Dll*&tail,int position)
{
    if (position==1)
    {
        Dll*temp=head;
        temp->next->pre=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    Dll*curr=head;
    Dll *pre=NULL;
    int cnt=1;
    while (cnt<position)
    {
        pre=curr;
        curr=curr->next;
        cnt++;
    }
    curr->pre=NULL;
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;

    

    
}
void insertatanyposition(Dll *&head, Dll *&tial, int position, int data)
{
    if (position == 1)
    {
        insertathead(head, data);
        return;
    }
    Dll *temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tial, data);
        return;
    }
    Dll *toinsert = new Dll(data);
    toinsert->next = temp->next;
    temp->next->pre = toinsert;
    temp->next = toinsert;
    toinsert->pre = temp;
}

int main()
{
    Dll *node1 = new Dll(12);
    Dll *head = node1;
    Dll *tail = node1;
    // display(head);
    insertathead(head, 13);
    insertathead(head, 15);
    insertathead(head, 18);
    insertattail(tail, 34);
    insertattail(tail, 78);
    cout<<"Befor at any position "<<endl;
    display(head);
    insertatanyposition(head,tail,7,44);
    cout<<"After at any positon "<<endl;
    display(head);
    deletenode(head,tail,4);
    cout<<"After dleteing "<<endl;
    display(head);

    return 0;
}