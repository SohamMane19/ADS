#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedList
{
    int	 data;
    struct LinkedList *next;
} *node;

node createNode()
{
    node temp; // declare a node
    temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
    temp->next = NULL;// make next point to NULL
    return temp;//return the new node
}

node insert_end()
{
	struct node* temp;
	temp = (node)malloc(sizeof(struct LinkedList));
	printf("Enter node data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	else
	{
		struct node* ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}		
	}
}
int main(int argc, char const *argv[])
{
	/* A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.*/
	printf("Hello world!");
	return 0;
}
