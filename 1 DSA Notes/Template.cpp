// WAP in cpp to create a function template for finding greater between two numbers of different types 
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(10, 20) << endl;
    cout << "Sum of doubles: " << add(1.5, 2.3) << endl;
    return 0;
}








