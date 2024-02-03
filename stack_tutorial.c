#include <stdio.h>
//structure for stack
#include <stdlib.h>
struct Stack
{ 
    int top; 
    unsigned capacity; 
    int* array; 
}; 
// function to create a stack of given capacity. It initializes size of 
// stack as 0 
struct Stack* createStack(unsigned capacity) 
{ 
    stack->capacity = capacity; 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 
int main(int argc, char const *argv[])
{
	struct Stack* stack=createStack(100); 
	// printf(stack->top);
	printf("Hello world!\n");
	return 0;	
}
