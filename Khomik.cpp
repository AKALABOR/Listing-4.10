#include <iostream>
using namespace std;

int main () {

int a = 8, d = 1, n = 1;
int arr[a];

cout << "Введіть елементи массиву: " << endl;
for (int i = 0; i < a; i++) {
     cin >> arr[i];
}

for (int e = 0; e < a; e++) {
    if (arr[e] % 2 != 1) {
    } else {
        n *= arr[e];
    }
}

cout << "Добуток непарних елементів = " << n << endl;



}
