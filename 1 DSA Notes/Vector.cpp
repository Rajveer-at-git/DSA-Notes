// Vector - The dynamic array 
vector<int> vec(5);  // Creates a vector with 5 elements, all initialized to 0
vector<int> vec(5, 10);  // Creates a vector with 5 elements, each initialized to 10
vector<int> vec;  // Declares an empty vector of integers & name = vec
vector<int> vec = {1, 2, 3, 4, 5};  // Creates a vector with 5 elements: 1, 2, 3, 4, 5

// Basic Operations on std::vector
cout << vec[2] << endl;  // Access element at index 2
cout << vec.front() << endl;  // Access first element
cout << vec.back() << endl;   // Access last element
vec.push_back(6);  // Adds 6 to the end of the vector
vec.pop_back();  // Removes the last element
vec.clear();  // Clears the vector
// Note: There's nothing called push_front in vector if Need to use push_front use deque instead.

