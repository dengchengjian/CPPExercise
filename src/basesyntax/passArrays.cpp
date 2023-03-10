#include <iostream>

#include "test.h"


void function1(int mynum[], int numsize){
    for (int i = 0; i < numsize; i++){
        std::cout << mynum[i] << " ";
        mynum[i] = sqrtInt(mynum[i]); // 使用自定义的函数对数组进行开方操作
    }
    std::cout << std::endl;
    std::cout << "sqrt:" << std::endl;
}


void passArraysTest(){
    int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    function1(num, sizeof(num) / sizeof(int));
    for(int i : num){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
