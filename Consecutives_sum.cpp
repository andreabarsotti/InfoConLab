#include <iostream>
#include <vector>
#include <cstdlib> // for rand() function
/*
This creates a random array of 10 elements between -50 and 49, 
then finds the maximum sum of n consecutive elements, varying n */
using namespace std;

int sum(const vector<int>& v, int number, int start) {
    int total = 0;
    int cap;
    if (start + number > v.size()) {
        cap = v.size();
    }
    else {
        cap = start + number;
    }
    for (int i = start; i < cap; i++) {
        total += v[i];
    }
    return total;
}

int main(){
    vector<int> a(10);
    for (int i = 0; i < a.size(); i++){
        a[i] = rand() % 100 - 50; // random number between -50 and 49
    }
    cout << "Starting array: " << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int n;
    int max;
    int n_max;
    int current_sum;
    int starting_index;
    for (int i = 0; i < a.size(); i++) {
        for (n = 0; n <= a.size(); n++) {
            current_sum = sum(a, n, i);
            if (i == 0 && n == 0) {
                max = current_sum;
                n_max = n;
                starting_index = i;
            }
            else if (current_sum > max) {
                max = current_sum;
                n_max = n;
                starting_index = i;
            }
        }
    }
    cout << "Maximum sum of " << n_max << " consecutive elements, starting at index " << starting_index << ": " << max << endl;
    return 0;
}