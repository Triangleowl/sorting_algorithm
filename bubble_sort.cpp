#include <iostream>
#include <vector>
using namespace std;

void print_nums(const vector<int>& nums) {
    for (auto num : nums) {
        cout << num << "\t";
    }

    cout << "\n";
}

void bubble_sort(vector<int>& nums) {
    int len = nums.size();

    for (int i = 0; i < len - 1; ++i) {
        for (int j = 1; j < len - i; ++j) {
            if (nums[j - 1] > nums[j]) {
                int tmp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = tmp;
            }
        }
        print_nums(nums);
    }
}

int main()
{
    vector<int> vec = {5, 3, 4, 1, 4};
    //vector<int> vec2 = {5, 3, 4, 1, 4, 0, 111, 3};
    bubble_sort(vec);

    return 0;
}

