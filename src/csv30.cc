/**
 * CS V30 Beginning C++
 * Assignment: MergeSorted
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author Jamie Hernandez
 */

#include <vector>

using std::vector;

vector<int> merge_sorted(vector<int> a, vector<int> b) {
    vector<int> merged;
    for(int idxA = 0, idxB = 0; (idxA < a.size() || idxB < b.size()); ){
        merged.push_back(idxB >= b.size() || (idxA < a.size() && a[idxA] <= b[idxB]) ? a[idxA++] : b[idxB++]);
    }
    return merged;
}
