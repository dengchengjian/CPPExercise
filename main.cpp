#include <iostream>
#include <fstream>
#include <vector>

#include "test.h"

using namespace std;

int main(int argc, char* argv[]){
    
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3 , 2 , 1 , 2 ,1};

    return trapingRainWater(height);

    return 0;
}