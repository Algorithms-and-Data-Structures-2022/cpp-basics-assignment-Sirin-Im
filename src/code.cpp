#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right)*(left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if ((mask < 0) || (bit_pos < 0)) {
      return false;
    }
    for (int i = 0; i <= bit_pos; i++) {
      int ost = mask % 2;
      mask /= 2;
      if ((i == bit_pos) && (ost == 1)){
        return true;
      }
    }
    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left > middle) {
      if (right > left) {
        return right;
      } else {
        return left;
      }
    } else {
      if (middle > right) {
        return middle;
      }else {
        return right;
      }
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if ((left != nullptr) || (right != nullptr)) {
      return;
    }
    int a = *left;
    left = right;
    right = &a;
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if ((arr == nullptr) || (length <= 0)) {
      return 0;
    }
    int sum = 0;
    for(int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if ((arr == nullptr) || (length <= 0)) {
      return nullptr;
    }
    int max_elem = arr[0];
    int *pointer = &arr[0];
    for (int i = 0; i < length; i++) {
      if (arr[i] > max_elem) {
        max_elem = arr[i];
        pointer = &arr[i];
      }
    }
    return pointer;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0) {
      return nullptr;
    }
    int* arr = new int[length];
    std::fill(arr,arr + length,init_value);
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if ((arr_in == nullptr)|| (length <= 0)) {
      return nullptr;
    }
    int* outArr = new int[length];
    std::copy(arr_in,arr_in + length,outArr);
    return outArr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    }
    if (length <= 0) {
      os << "Invalid argument: length\n";
    }
    if (k <= 0) {
      os << "Invalid argument: k\n";
    }
    if (k >= length) {
      os << arr[0];
    } else {
      os << arr[0];
      int counter = 1;
      for (int i = 0; i < length; i++) {
        if (counter * k + counter - 1 < length) {
          os << arr[counter * k];
          counter++;
        }
      }
    }
  }

}  // namespace assignment
