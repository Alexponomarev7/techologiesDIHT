#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> _vector;
    for (int i = 0; i < 10000; ++i) {
        _vector.push_back(i);
    }
    
    size_t result = _vector.capacity();

    cout << result << endl;
    return 0;
}
