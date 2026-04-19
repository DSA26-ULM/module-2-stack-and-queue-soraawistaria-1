#include "stack.h"
#include <iostream>
using namespace std;
#include <string>

int main() {
    Stack s;
    init(&s);
    int N, hasil;
    string x;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;

        if (x == "+" || x == "-" || x == "*" || x == "/") {
            int angka = stoi(x);
            push(&s, angka);

        } else {
            if (isEmpty(&s)) {
                cout << "Stack masih kosong" << endl;
                return 1;
            }
            int a = peek(&s); pop(&s);

            if (isEmpty(&s)) {
                cout << "Stack masih kosong" << endl;
                return 1;
            }
            int b = peek(&s); pop(&s);

            if (x == "+") hasil = a + b;
            else if (x == "-") hasil = a - b;
            else if (x == "*") hasil = a * b;
            else if (x == "/") {
                if (b == 0){
                    cout << "Gabisa dibagi 0" << endl;
                }
                hasil = a / b;
            }
            push(&s, hasil);
        }   
    }
    cout << peek(&s) << endl;
    return 0;
}