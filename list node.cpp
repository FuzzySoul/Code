#include <iostream>
using namespace std;
struct ListNode
{
	int m_key;
	ListNode* next;
};
void swap(struct ListNode* head)
{
    ListNode*p1=head;
    ListNode*p2=head->next;
    p1->next=p2->next;
    p2->next=p1;
    ListNode*pT=NULL;
    ListNode*pT1=NULL;
    ListNode*pT2=NULL;
    for(pT=head;pT->next->next!=NULL;pT=pT->next);
    for(pT1=head;pT->next!=NULL;pT=pT->next);
    for(pT2=head;pT!=NULL;pT=pT->next);
    pT1->next=head;
    pT2->next=pT1;
    pT->next=pT2;
}
void createList(ListNode* pHead)
{
	ListNode*p=pHead;
	for(int i=1;i<10;i++)
	{
       ListNode*pNewNode=new ListNode;
	   pNewNode->m_key=i;
	   pNewNode->next=NULL;
	   p->next=pNewNode;
	   p=pNewNode;
	}
}
void printList(ListNode* pHead)
{   ListNode*p=pHead;
    for(int i=1;i<30;i++)
	{
       cout<<p->m_key;
	   p=p->next;
	   if(p==NULL)
	   cout<<"error!"<<endl;
	}

}
int main()
{   ListNode*head=NULL;
    head= new ListNode;
    head->m_key=0;
	head->next=NULL;
	createList(head);
	swap(head);
	printList(head);
	return 0;
}