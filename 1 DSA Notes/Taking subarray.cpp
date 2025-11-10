#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 60};

    // Extract a subarray (slice) from index 2 to 4 (30, 40, 50)
    vector<int> subVec;
    subVec.assign(v.begin() + 2, v.begin() + 5);

    // Print the subarray
    for (int num : subVec) cout << num << " ";
}
