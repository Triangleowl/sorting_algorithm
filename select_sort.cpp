#include <iostream>
#include <vector>
using namespace std;

void print_nums(const vector<int>& nums) {
    for (auto num : nums) {
        cout << num << "\t";
    }

    cout << endl;
}

void select_sort(vector<int>& nums) {
    if (nums.empty()) return ;
    int len = nums.size();

    //int min_index = 0;
    //int min_num = nums[min_num];
    for (int i = 0; i < len - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < len; ++j) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }
        int tmp = nums[i];
        nums[i] = nums[min_index];
        nums[min_index] = tmp;

        print_nums(nums);
    }
}

int main()
{
    vector<int> vec = {0, 1, 5, 2, 4, 7, 9, 0};
    cout << "original nums: " << endl;
    print_nums(vec);
    cout << "sorting ..." << endl;
    select_sort(vec);

    return 0;
}

