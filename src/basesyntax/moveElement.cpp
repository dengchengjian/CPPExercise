#include <iostream>
#include <vector>

#include "test.h"

using namespace std;

int moveElement(int nums[], int val, int numssize){

    for(int i = 0; i < numssize; i ++){
        if(nums[i] == val){
            for(int j = i; j < numssize - 1; j ++ ){
                nums[j] = nums[j + 1];
            }
            i--; // 下标i以后的值向前移动一位，i应保持不变，所以减1后再加1
            numssize--; //数组减小一位
        }
    }
    return numssize;
}

// int removeElement(vector<int>& nums, int val) {
        
//         int numssize = nums.size();
//         for(int i = 0; i < numssize; i ++){
//             if(nums.at(i) == val){
//                 for(int j = i; j < numssize - 1; j ++ ){
//                     nums.at(j) = nums.at(j + 1);
//                 }
//                 i--;
//                 numssize--;
//             }
//         }
//         return numssize;
//     }

// 双指针法 
// 时间复杂度：O(n)
// 空间复杂度：O(1)
int removeElement(vector<int>& nums, int val) {
    int slowIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
        if (val != nums[fastIndex]) {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
}

/*
int removeElement(vector<int>& nums, int val) {
        int leftIndex = 0;
        int rightIndex = nums.size() - 1;
        while (leftIndex <= rightIndex) {
            // 找左边等于val的元素
            while (leftIndex <= rightIndex && nums[leftIndex] != val){
                ++leftIndex;
            }
            // 找右边不等于val的元素
            while (leftIndex <= rightIndex && nums[rightIndex] == val) {
                -- rightIndex;
            }
            // 将右边不等于val的元素覆盖左边等于val的元素
            if (leftIndex < rightIndex) {
                nums[leftIndex++] = nums[rightIndex--];
            }
        }
        return leftIndex;   // leftIndex一定指向了最终数组末尾的下一个元素
    }
*/