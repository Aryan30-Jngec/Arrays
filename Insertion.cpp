#include <iostream>
using namespace std;
int main() {
    const int MAX = 50;
    int a[MAX], size, num, index, i;
    cout << "Enter size of array: ";
    cin >> size;
    if (size < 1 || size >= MAX) {
        cout << "Invalid size!";
        return 0;
    }
    cout << "Enter array elements:\n";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }
    cout<<"Displaying Array Elements after Insertion"<<endl;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << "Enter element to insert: ";
    cin >> num;
    cout << "Enter index (0 to " << size << "): ";
    cin >> index;
    // Index validation
    if (index < 0 || index > size) {
        cout << "Invalid index!";
        return 0;
    }
    // Shift elements to right
    for (i = size - 1; i >= index; i--) {
        a[i + 1] = a[i];
    }
    // Insert element
    a[index] = num;
    size++;
    cout << "Array after insertion:\n";
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}