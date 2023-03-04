#include <iostream>
#include <fstream>
#include <vector>

#include "test.h"

using namespace std;

int main(int argc, char* argv[]){
    
    int nums[] = {3, 2, 2, 3};

    vector<int> arraynums = {1, 5, 6, 7, 3, 2};

    arraynums.push_back(3);
    arraynums.push_back(2);
    arraynums.push_back(2);
    arraynums.push_back(3);

    int size_ = removeElement(arraynums, 2);

    moveElement(&nums[0], 2, sizeof(nums)/sizeof(nums[0]));
    
    for(int i = 0; i < size_; i ++){
        cout << arraynums[i] << " ";
    }
    cout << endl;

    arrayDefine();

    return 0;
}