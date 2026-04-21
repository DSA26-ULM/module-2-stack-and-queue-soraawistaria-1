#include "queue.h"
#include <iostream>
using namespace std;

int main() {
    Queue q;
    init(&q);
    int N, k, x, hasil;

    cin >> N >> k;
    for(int i = 0; i < N; i++) {
        cin >> x;
        enqueue(&q, x);
    }

    for(int j = 0; j < k; j++){
        
    }

}