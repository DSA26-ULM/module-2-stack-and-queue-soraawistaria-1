#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;
    int N, x;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;

        if (x >= 0 && x < 100) {
            data.push(&s, x);
        } else if (x == "+") {
            data.pop(&s);
            
        }
    }
    
    for (int i = 0; i < N; i++) {

    }

}