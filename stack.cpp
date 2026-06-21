#include "stack.h"
#include <stdexcept>

void init(Stack* s) { 
    s->top = s->data ;
}
bool isEmpty(const Stack* s) {
    return s->top == s->data; 
}
bool isFull(const Stack* s) {
    return s->top == (s->data + (MAX - 1)); 
}
void push(Stack* s, int value) {
    if (!isFull(s)) {  
        s->top++;  
        *s->top = value; 
    }
    throw std::runtime_error("Stack kosong"); 
}
void pop(Stack* s) {
    if (!isEmpty(s)) {
        s->top--;  
    }
    throw std::runtime_error("Stack kosong"); 
}
int peek(const Stack* s) {
    if (!isEmpty(s)) {  
        return *(s->top); 
    }
    throw std::runtime_error("Stack kosong"); 
}