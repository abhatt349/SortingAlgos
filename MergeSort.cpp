#include "Sorts.h"

vector<int> getFirstHalf(vector<int> v) {
  int n = v.size()/2;
  while (n--) {
    v.pop_back();
  }
  return v;
}

vector<int> getSecondHalf(vector<int> v) {
  int n = (v.size()+1)/2;
  vector<int> a;
  for (int i = n; i < v.size(); ++i) {
    a.push_back(v[i]);
  }
  return a;
}


vector<int> merge(vector<int> a, vector<int> b) {
  if (!a.size()) {
    return b;
  }
  if (!b.size()) {
    return a;
  }
  if (a[a.size()-1] > b[b.size()-1]) {
    int a_last = a[a.size()-1];
    a.pop_back();
    vector<int> v = merge(a, b);
    v.push_back(a_last);
    return v;
  }
  else {
    int b_last = b[b.size() - 1];
    b.pop_back();
    vector<int> v = merge(a, b);
    v.push_back(b_last);
    return v;
  }
}

void print(vector<int> v) {
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

void MergeSort(vector<int> &v) {
  if (v.size() <= 1) {
    return;
  }
  else {
    vector<int> a = getFirstHalf(v);
    vector<int> b = getSecondHalf(v);
    MergeSort(a);
    MergeSort(b);
    v = merge(a, b);
  }
}
