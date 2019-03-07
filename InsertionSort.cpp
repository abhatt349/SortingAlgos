#include <iostream>
#include <vector>

using std::vector;

void InsertionSort(vector<int> &v) {
  for (int i = 1; i < v.size(); ++i) {
    int j;
    for (j = 0; j < i && v[i] >= v[j]; ++j);
    v.insert(v.begin()+j, v[i]);
    v.erase(v.begin()+i+1);
  }
}


int main() {
  vector<int> v = {5,6,3,8,7,2,1,4,9,8,4,5,0};
  InsertionSort(v);
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}
