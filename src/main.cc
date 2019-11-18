/**
 * CS V30 Beginning C++
 * Assignment: MergeSorted
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author Jamie Hernandez
 */

#include "csv30.h"
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // put more code below to test your code
    vector<int> x = {1, 2, 4, 5, 5, 7};
    vector<int> y = {2, 2, 4, 5, 8};

    vector<int> sorted = merge_sorted(y, x);
    for (int val: sorted) {
        cout << val << " ";
    }
    cout << endl;
}