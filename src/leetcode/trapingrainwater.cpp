#include <vector>
#include <iostream>

using namespace std;

struct BestHigh{
    int index;
    int height;
}SecondHigh;

int  trapingRainWater(vector<int> height){

    int water = 0; // init rain water
    int n = height.size();

    if(n <= 2){
        return water;
    }

    struct BestHigh besthigh;
    
    besthigh.height = height[0];
    besthigh.index = 0;

    for(int i = 1; i < n; i++ ){
        if(height[i] >= besthigh.height){
            besthigh.index = i;
            besthigh.height = height[i];
        }
    }

    int temp = height[0];
    for(int i = 1; i <= besthigh.index; i++){

        if(height[i] >= temp){
            temp = height[i];
        } else {
            water = water + (temp - height[i]);
        }

    }

    temp = height[n -1];
    for(int i = n - 2; i >= besthigh.index; i--){

        if(height[i] >= temp){
            temp = height[i];
        } else {
            water = water + (temp - height[i]);
        }

    }
    
    cout << water << endl;

    return water;

}



