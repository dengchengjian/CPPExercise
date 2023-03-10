#include <iostream>
#include <fstream>
#include <vector>

#include "test.h"

using namespace std;

int arrayDefine(){

    int arr[] = {1, 2, 3};
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };

    // 默认初始化，vector为空， size为0，表明容器中没有元素
    vector<int> array1;
    array1.push_back(1);

    // 初始化，拷贝array1,类型需相同
    vector<int> array2 = array1; // array2(array1)

    // 赋值初始化
    vector<int> array3 = {1, 5, 6, 7, 3, 2}; // array3{1, 5, 6, 7, 3, 2};

    // 拷贝另一个vector的某一段
    vector<int> array4(array3.begin() + 1, array3.end() - 1);

    // 包含7个元素，每个元素进行缺省的值初始化，对于int，也就是被赋值为0
    vector<int> array5(7);

    //指定值初始化，被初始化为包含7个值为3的int
    vector<int> array6(7, 3);

    cout << arr2[0][2] << " " << arr2[1][0] << endl;

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    string car[] = {"Volvo", "BMW", "Ford"}; // Three arrays

    string letter2[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    string letter3[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    return 0;

}