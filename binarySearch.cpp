#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binarySearch(vector<int>, int);

int main() {
  vector<int> testArr;
  return 0;
}

int binarySearch(vector<int> nums, int target) {
  int low = 0, high = nums.size() - 1, mid, guess;

  while(low <= high) {
    mid = floor((low + high) / 2);
    guess = nums[mid];

    if(guess == target) {
      return mid;
    }
    else if(guess > target) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }
  return -1;
}