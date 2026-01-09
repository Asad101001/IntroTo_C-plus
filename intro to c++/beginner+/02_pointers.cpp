#include <iostream>
using namespace std;

int main() {
    
    int num = 42;
    int* ptr = &num;  
    
    cout << "=== POINTERS ===" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;  
    cout << "Value stored in ptr: " << ptr << endl; 
    cout << "Value at address ptr points to: " << *ptr << endl;  \
    
    // Modifying through pointer
    *ptr = 100;  // Changes num's value through the pointer
    cout << "After *ptr = 100, num is now: " << num << endl;
    
    // ============ REFERENCES ============
    // Reference = alias (another name) for an existing variable
    
    int original = 50;
    int& ref = original;  // ref is now another name for original
    
    cout << "\n=== REFERENCES ===" << endl;
    cout << "Original: " << original << endl;
    cout << "Reference: " << ref << endl;
    
    ref = 200;  // Changes original because ref IS original
    cout << "After ref = 200, original is: " << original << endl;
    
    // ============ KEY DIFFERENCE ============
    cout << "\n=== POINTER VS REFERENCE ===" << endl;
    
    int a = 10, b = 20;
    
    // Pointer can be reassigned
    int* p = &a;
    cout << "Pointer points to a: " << *p << endl;
    p = &b;  // Now points to b
    cout << "Pointer now points to b: " << *p << endl;
    
    // Reference cannot be reassigned (always refers to same variable)
    int& r = a;
    cout << "Reference to a: " << r << endl;
    r = b;  // This copies b's VALUE into a, doesn't make r refer to b
    cout << "After r = b, a is: " << a << " (copied value)" << endl;
    
    // ============ NULL POINTERS ============
    int* nullPtr = nullptr;  // Pointer pointing to nothing (safe null in C++)
    // int& nullRef;  // ERROR: references must be initialized and can't be null
    
    if (nullPtr == nullptr) {
        cout << "\nPointer is null - safe to check before dereferencing" << endl;
    }
    
    // ============ ARRAYS AND POINTERS ============
    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;  // Array name is a pointer to first element
    
    cout << "\n=== ARRAY POINTER RELATIONSHIP ===" << endl;
    cout << "First element: " << arr[0] << " or " << *arrPtr << endl;
    cout << "Second element: " << arr[1] << " or " << *(arrPtr + 1) << endl;
    
    // Pointer arithmetic
    arrPtr++;  // Move to next element
    cout << "After arrPtr++, points to: " << *arrPtr << endl;
    
    return 0;
}

/*
WHY THIS MATTERS FOR DSA:
1. Linked Lists: Each node has a pointer to the next node
2. Trees: Parent/child relationships use pointers
3. Graphs: Adjacency lists use pointers
4. Dynamic memory: Creating structures at runtime
5. Pass by reference: Efficient function parameters (no copying)

MEMORY MODEL:
Stack: Local variables, function calls (automatic cleanup)
Heap: Dynamic allocation with new/delete (manual management)

Variables live in memory addresses like:
num: 0x7ffd5c3d4a5c (example address)
The pointer stores this address as its value.
*/