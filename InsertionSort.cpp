#include "Sorts.h"

void InsertionSort(vector<int> &v) {
  for (int i = 1; i < v.size(); ++i) {
    int j;
    for (j = 0; j < i && v[i] >= v[j]; ++j);
    v.insert(v.begin()+j, v[i]);
    v.erase(v.begin()+i+1);
  }
}
