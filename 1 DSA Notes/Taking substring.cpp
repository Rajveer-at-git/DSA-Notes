#include <iostream>
#include <string>

int main() {
    string s = "flower";

    // 1. Extract "low" (Start at index 1, take 3 characters)
    string part1 = s.substr(1, 3); 
    
    // 2. Extract "wer" (Start at index 3, go to the end)
    // If you omit the second argument, it goes to the end automatically.
    string part2 = s.substr(3);

    cout << "Original: " << s << std::endl;
    cout << "Part 1: " << part1 << std::endl; // Output: low
    cout << "Part 2: " << part2 << std::endl; // Output: wer

    return 0;
}