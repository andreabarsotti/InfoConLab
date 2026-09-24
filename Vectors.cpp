#include <iostream>
#include <vector> 
//includes the vector library for using vector: lists but more poweful and less expensive

using namespace std;

int main() {
    vector<int> vec_numbers(5); //vector of 5 integers: the (n) is not necessary
    vec_numbers.assign(3, 0); //assigns 3 elements with value 0 to the vector: SIZE BECOMES 3!
    vec_numbers.push_back(5); //adds 5 to the end of the vector: SIZE BECOMES 4!
    cout << "The vector contains: ";
    for (int i = 0; i < vec_numbers.size(); i++) { //iterates through the vector and prints each element
        cout << vec_numbers[i] << " "; //prints the element at index i
    }
    cout << endl;

    return 0;
}