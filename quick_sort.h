#include <vector>
#include <iostream>

class QuickSort {
public:
  QuickSort(std::vector<int>& nums) : nums_(nums) {}

  void quickSort(int low, int high);

  void printVector();

private:
  int partition(int low, int high);
  
  std::vector<int> nums_;
};