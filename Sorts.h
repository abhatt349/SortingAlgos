#include <iostream>
#include <vector>

using std::vector;

void BubbleSort(vector<int> v);
void SelectionSort(vector<int> v);
void InsertionSort(vector<int> v);

vector<int> getFirstHalf(vector<int> v);
vector<int> getSecondHalf(vector<int> v);
vector<int> merge(vector<int> a, vector<int> b);

void MergeSort(vector<int> v);
