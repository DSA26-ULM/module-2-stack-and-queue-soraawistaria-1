#include "stack.h"
#include <iostream>
using namespace std;
#include <string>

int main() {
    Stack s;
    init(&s);
    int N;
    string x;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        int angka = stoi(x);

        if (angka >= 0 && angka < 100) {
            push(&s, angka);

        } else if (x == "+") {
            pop(&s);
            
        }
    }
    
    for (int i = 0; i < N; i++) {

    }

}