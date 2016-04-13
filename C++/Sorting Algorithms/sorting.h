#ifndef SORTING_H
#define SORTING_H
#include <vector>


std::vector<int> insertion_sort(std::vector<int> array);
std::vector<int> bubble_sort(std::vector<int> array);
std::vector<int> selection_sort(std::vector<int> array);
std::vector<int> merge_sort(std::vector<int> array, int low, int high);
std::vector<int> merge(std::vector<int> array, int low, int mid, int high);

#endif
