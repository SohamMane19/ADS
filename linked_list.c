#include<stdio.h>
#include<stdlib.h>
struct node* head = NULL;
struct node
{
	int data;
	struct node* next;
};

void create();
void main()
{

}
void create()
{
	struct node* temp;
	//creating node
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		
	}
}