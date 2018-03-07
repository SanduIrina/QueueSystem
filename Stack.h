/*
 * Stack.h
 *
 *  Created on: Mar 20, 2017
 *      Author: dan
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode{
	Item2 elem;
	struct StackNode* next;
}StackNode;

typedef struct Stack{
	StackNode* head;
}Stack;

Stack* createStack(){
	Stack* newStack = (Stack*) malloc(sizeof(Stack));
	newStack->head = NULL;
	return newStack;
}

int isStackEmpty(Stack* s){
	return (s->head == NULL);
}

Item2 top(Stack* s){
	return s->head->elem;
}

void push(Stack* s, Item2 elem){
	StackNode* newNode = (StackNode*) malloc(sizeof(StackNode));
	newNode->elem = elem;

	newNode->next = s->head;
	s->head = newNode;
}

void pop(Stack* s){
	StackNode* aux = s->head;
	s->head = s->head->next;
	free(aux);
}

void destroyStack(Stack* s){
	while(!isStackEmpty(s))
		pop(s);
	free(s);
}

#endif /* STACK_H_ */
