#include "stack.h"

void init(Stack* s) { 
    s->top = s->data ;  //jari di posisi -1
}
bool isEmpty(const Stack* s) {
    return s->top == s->data;  //apakah kosong? (-1)
}
bool isFull(const Stack* s) {
    return s->top == (s->data + MAX);  //apakah full? (99)
}
void push(Stack* s, int value) {
    if (!isFull(s)) {  //kalau gak full
        *s->data = value;  //tambah elemen
        s->top++;  
    }
}
void pop(Stack* s) {
    if (!isEmpty(s)) {  //kalau gak kosong
        s->top--;     // mundur indeks
    }
}
int peek(const Stack* s) {
    if (!isEmpty(s)) {  //kalau gak kosong
        return *(s->data - 1);  //intip elemen terbaru
    }
    return -1; 
}