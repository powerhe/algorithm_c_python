#include <stdio.h>
#include <stdlib.h>

struct Stack {
	int size;
	struct List {
		int value;
		struct List *next;
	} *head;
};

typedef struct Stack *slink;


slink create_stack(void) {
	slink stack = malloc(sizeof(struct Stack));
	if (!stack) {
		printf("malloc error  \n");
		return stack;
	}
	printf("malloc success  \n");
	stack->size = 0;
	stack->head = NULL;
	return stack;
}

int empty(slink stack) {
	return stack->size == 0;
}

void push_stack(slink stack, int value) {
	struct List *new_item = malloc(sizeof(struct List));
	if (!new_item) {
		printf("malloc error  \n");
		return;
	}
	new_item->value = value;
	new_item->next = stack->head;
	stack->head = new_item;
	stack->size++;
}

int pop_stack(slink stack) {
	if (empty(stack))
		return -1;
	struct List *drop = stack->head;
	int re = stack->head->value;
	stack->head = stack->head->next;
	free(drop);
	stack->size--;
	return re;
}

int main() {
	slink stack = create_stack();
	int data[] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	while (i<6)
		push_stack(stack, data[i++]);
	while (!empty(stack))
		printf("%d\n", pop_stack(stack));
	while (i<9)
		push_stack(stack, data[i++]);
	while (!empty(stack))
		printf("%d\n", pop_stack(stack));
}





