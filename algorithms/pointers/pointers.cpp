#include <iostream>

using namespace std;

int main() {
    
    int age = 18;
    int *pAge = &age; // storing the pointer

    double gpa = 3.9;
    string name = "Deo";

    cout << "Age: " << pAge << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    return 0;
}