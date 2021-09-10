//
// Created by ENK on 10.09.2021.
//

#ifndef FIBONACCI_SEQUENCE_FIBONACCI_H
#define FIBONACCI_SEQUENCE_FIBONACCI_H

#endif //FIBONACCI_SEQUENCE_FIBONACCI_H

int fibonacci_textbook(int n) {
    int iterations = 0;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        iterations += 1;
        return 1;
    } else {
        iterations += 1;
        return fibonacci_textbook(n-1) + fibonacci_textbook(n-2);
    }
}

// takes 0.12% of time the textbook variant took
int fibonacci_memoriselasttwo(int n) {
    int iterations = 0;
    int new = 1, old = 0, other, i;
    if (n==0) {
        return old;
    }
    for(i =2; i <= n; i++) {
        other = old + new;
        old = new;
        new = other;
        iterations+=1;
    }
    return new;
}