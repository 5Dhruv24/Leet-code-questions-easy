# include<iostream>
using namespace std;

class Solution {
public:
    int sumoftwonumber() {
        int nums[5] = {1, 2, 3, 4, 5};
        int target = 6;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] + nums[j] == target) {
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                    return 1;
                }
            }
        }

        return -1;
    }
};

int main()
{   Solution a; 
    a.sumoftwonumber();
    return 0;
}


