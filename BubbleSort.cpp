
#include <iostream>
#include <vector>

using std::vector;

void BubbleSort(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = 0; j < v.size()-1; ++i) {
      if (v[j] < v[j+1]) {
        if (j == v.size()-1) {
          v.push_back(v[j]);
        }
        else { 
          v.insert(v.begin()+j+2, v[j]);
        }
        v.erase(v.begin()+j);
      }
    }
  }
}

int main() {
  vector<int> v = {5,6,3,8,7,2,1,4,9,8,4,5,0};
  BubbleSort(v);
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
}
