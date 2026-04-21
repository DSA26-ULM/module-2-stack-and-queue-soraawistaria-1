#include "queue.h"
#include <iostream>
using namespace std;

int main() {
    Queue q;
    init(&q);
    int N, k, x;

    cin >> N >> k;
    for(int i = 0; i < N; i++) {
        cin >> x;
        enqueue(&q, x);
    }

    for(int j = 0; j < k; j++){
        int hasil;
        int nilai = front(&q);
        hasil += nilai;
        cout << hasil << " ";
    }

}