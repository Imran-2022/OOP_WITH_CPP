#include <iostream>
using namespace std;

class Node {
    int* data;
public:
    Node(int value) {
        data = new int(value);
        cout << "Node created with value " << *data << endl;
    }

    ~Node() {
        cout << "Releasing node with value " << *data << endl;
        delete data;
        data = nullptr;  // prevent dangling pointer
    }
};

int main() {
    Node n1(100);
} // Destructor ensures memory is released and pointer set to nullptr
