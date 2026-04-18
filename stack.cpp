#include "stack.h"

void init(Stack* s) {
    *s->top = -1;
}
bool isEmpty(const Stack* s) {
    return *s->top == -1;
}
bool isFull(const Stack* s) {
    return *s->top == MAX - 1;
}
void push(Stack* s, int value) {
    if (!isFull(s)) {
        (*s->top)++;
        s->data[*s->top] = value;
    }
}
void pop(Stack* s) {
    if (!isEmpty(s)) {
        (*s->top)--;
    }
}
int peek(const Stack* s) {
    if (!isEmpty(s)) {
        return s->data[*s->top];
    }
    return -1; // Return -1 if stack is empty
}