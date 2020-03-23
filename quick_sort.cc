#include "quick_sort.h"

void QuickSort::quickSort(int low, int high) {
  if (low < high) {
      int boundary = partition(low, high);
      quickSort(low, boundary - 1);
      quickSort(boundary + 1, high);
  }
}

void QuickSort::printVector() {
  for (int i = 0; i < nums_.size(); i++) {
    std::cout << nums_[i] << std::endl;
  }
}

int QuickSort::partition(int low, int high) {
  int pivot = nums_[high];
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (nums_[j] < pivot) {
        i += 1;
        std::swap(nums_[i], nums_[j]);
    }
  }
  std::swap(nums_[i+1], nums_[high]);
  return (i+1);
}

int main() {
  std::vector<int> test_list = {2, 2, 1, 1, 4, 3, 99, 1111, 0, 5};
  QuickSort sorter(test_list);
  sorter.quickSort(0, test_list.size() - 1);
  sorter.printVector();

  return 0;
}
