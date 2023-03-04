#include <iostream>
#include <test.h>
#include <vector>

using std::vector;


// Define
int Binarysearch::binarySearch(vector<int> &data, int target)
{

    int left = 0;
    int right = data.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        
        // avoid left or right out of range
        if((left == right) && target != data.at(mid)){
            return left;
        }
        
        if(data.at(mid) > target){
            right = mid - 1;
        }
        else if(data.at(mid) < target){
            left = mid + 1;
        }
        else{
            return mid;
        }
    }
    // can't find the value and return the position in the sequence
    return left;
}

int Binarysearch::binarySearchRecursion(vector<int> &data, int target, int left, int right){

    int mid = left + (right - left) / 2;
    // avoid left or right out of range 
    if(left == right && data.at(mid) != target){
        return left;
    }


    if(data.at(mid) == target){
        return mid;
    }
    else if(data.at(mid) > target){
        return binarySearchRecursion(data, target, left, mid - 1);
    }
    else if(data.at(mid) < target){
        return binarySearchRecursion(data, target, mid + 1, right);
    }
    
    
    return -1;
    
}



// find the target and return the subscript
// int main(int argc, char* argv[]){

//     vector<int> data;
//     ifstream in("./data/data.txt");
//     if(!in){
//         cout << "Read file error!" << endl;
//         exit(1);
//     }
 
//     int temp; // import data to data vector
//     while(!in.eof()){
//         in >> temp;
//         data.push_back(temp);
//     }
//     in.close();

//     cout << "Import data successfully! Please input the target:" << endl;
//     int target;
//     cin >> target;

//     Binarysearch test;
//     // int returnsubscript = test.binarySearch(data, target);
//     int returnsubscript = test.binarySearchRecursion(data, target, 0, data.size() - 1);
//     // int returnsubscript = test.search(data, 0, data.size() - 1, target);

//     if(data.at(returnsubscript) == target){
//         cout << "Target subscript:" << returnsubscript << endl;
//     }
//     else{
//         cout << "The target not found, but its location in the seqeunce is: "
//         << returnsubscript << endl;
//     }

//     return 0;

// }


// find the first and last subscript of target
// int main(int argc, char* argv[]){

    
//     vector<int> data;
//     ifstream in("./data/data.txt");
//     if(!in){
//         cout << "Read file error!" << endl;
//         exit(1);
//     }
 
//     int temp; // import data to data vector
//     while(!in.eof()){
//         in >> temp;
//         data.push_back(temp);
//     }
//     in.close();

//     cout << "Import data successfully! Please input the target:" << endl;
//     int target;
//     cin >> target;

//     Binarysearch test;

//     int targetsubscript = test.binarySearch(data, target);

//     int up = targetsubscript; // start up border
//     int down = targetsubscript; // star down border

//     if(target != data.at(targetsubscript)){
//         cout << "[-1, -1]" << endl;
//     }
//     else{
//         // avoid out of range
//         while(up + 1 < data.size() - 1 && target == data.at(up + 1)){
//             up++;
//         }
//         while(down - 1 > 0 && target == data.at(down - 1)){
//             down--;
//         }
//         cout << "[" << down << ", " << up << "]" << endl;
//     }

//     return 0;
// }
