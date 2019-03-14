#include "Sorts.h"

void SelectionSort(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    int min = v[i];
    int ind = i;
    for (int j = i; j < v.size(); ++j) {
      if (v[j] < min) {
        min = v[j];
        ind = j;
      }
    }
    v[ind] = v[i];
    v[i] = min;
  }
}
