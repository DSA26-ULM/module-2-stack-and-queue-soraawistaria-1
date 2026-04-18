#include "stack.h"

void init(Stack* s) { 
    s->top = &s->data[-1] ;  //jari di posisi -1
}
bool isEmpty(const Stack* s) {
    return s->top == &s->data[-1];  //apakah kosong? (-1)
}
bool isFull(const Stack* s) {
    return s->top == &s->data[MAX];  //apakah full? (99)
}
void push(Stack* s, int value) {
    if (!isFull(s)) {  //kalau gak full
        (s->top)++;  
        s->data[*(s->top)] = value;  //tambah elemen
    }
}
void pop(Stack* s) {
    if (!isEmpty(s)) {  //kalau gak kosong
        (s->top)--;     // mundur indeks
    }
}
int peek(const Stack* s) {
    if (!isEmpty(s)) {  //kalau gak kosong
        return s->data[*(s->top)];  //intip elemen terbaru
    }
    return -1; 
}