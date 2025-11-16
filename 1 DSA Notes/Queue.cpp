#include <iostream>
#include <queue>
using namespace std;
/*
1) push()
2) pop()
3) empty() - is queue empty(True or False)
4) front() - element at front 
5) back() - element at back
*/
int main() {
    // Now we can just write 'queue' instead of 'std::queue'
    queue<int> myQueue;

    // And 'cout'/'endl' instead of 'std::cout'/'std::endl'
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;
    cout << "Current size: " << myQueue.size() << endl;

    cout << "\n--- Adding items ---" << endl;
    
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    
    cout << "Pushed 10, 20, and 30." << endl;
    cout << "Current size: " << myQueue.size() << endl;
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    cout << "\n--- Accessing items ---" << endl;
    cout << "Element at the front: " << myQueue.front() << endl; // Was std::queue::front
    cout << "Element at the back: " << myQueue.back() << endl;   // Was std::queue::back

    cout << "\n--- Removing an item ---" << endl;
    cout << "Popping the front element (which is " << myQueue.front() << ")" << endl;
    myQueue.pop(); // Was std::queue::pop

    cout << "New element at the front: " << myQueue.front() << endl;
    cout << "Current size: " << myQueue.size() << endl;

    cout << "\n--- Emptying the queue ---" << endl;
    while (!myQueue.empty()) { // Was std::queue::empty
        cout << "Processing and popping: " << myQueue.front() << endl;
        myQueue.pop();
    }

    cout << "\n--- Final check ---" << endl;
    cout << "Final size: " << myQueue.size() << endl;
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    return 0;
}

