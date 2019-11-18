/**
 * CS V30 Beginning C++
 * Assignment: MergeSorted
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author [CHANGE THIS TO YOUR INFORMATION]
 */

#include <vector>

using std::vector;

vector<int> merge_sorted(vector<int> a, vector<int>b) {
    vector<int> merged;
    for(idxA = 0, idxB = 0; idxA < a.size() || idxB < b.size(); ){
        (idxA <= idxB) ? (merged.push_back(a[idxA]), idxA++) : (merged.push_back(b[idxB]), ++idxB);
    }
}
