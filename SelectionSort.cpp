#include <iostream>
#include <vector>

using std::vector;

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

int main() {
  vector<int> v = {5,6,3,8,7,2,1,4,9,8,4,5,0};
  SelectionSort(v);
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}
