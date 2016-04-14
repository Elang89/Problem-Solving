#ifndef MERGE_SORT_H
#define MERGE_SORT_H
#include <vector>

void merge_sort(std::vector<int>& array, int low, int high);
void merge(std::vector<int>& array, int low, int mid, int high);

#endif
