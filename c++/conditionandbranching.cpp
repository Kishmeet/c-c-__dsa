#include <iostream>
#include <cstdio>
#include <print>
using namespace std;
int main() {
    int a = 5, b = 10;
    bool comparison = (a < b);
    printf("%d\n",comparison);

    if (comparison) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is not less than b" << endl;
    }
    const char* ptr = nullptr;
    if (ptr) {
        cout << "Pointer is not null" << endl;
    } else {
        cout << "Pointer is null" << endl;
    }

    return 0;
}   