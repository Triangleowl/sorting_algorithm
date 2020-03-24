#include <iostream>
#include <vector>
using namespace std;

void print_nums(const vector<int>& nums) {
    for( auto num : nums ) {
        cout << num << "\t";
    }
    cout << endl;
}

void insert_sort(vector<int>& nums) {
    if (nums.empty()) return;
    int len = nums.size();

    for (int i = 0; i < len - 1; ++i) {
        int min = nums[i + 1];
        int index = i + 1;
        for (int j = i ; j >= 0; --j) {
            if (nums[j] > min) {
                nums[j + 1] = nums[j];
                index = j;
            }
        }
        nums[index] = min;
        print_nums(nums);
    }
}

int main()
{
    vector<int> vec = {1, 1, 5, 3, 4, 2};
    print_nums(vec);
    insert_sort(vec);
    return 0;
}

