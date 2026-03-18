#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main(){
    std::vector<int> numbers = {5, 2, 9, 12, 17, 37, 86};
    sort(numbers.begin(), numbers.end());

    int target = 12;
    int result_index = binarySearch(numbers, target);
    if(result_index != -1) std::cout << "Element found at index: " << result_index << std::endl;
    else std::cout << "Element not present in array" << std::endl;

    return 0;
}