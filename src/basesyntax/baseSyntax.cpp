#include <iostream>
#include <vector>
#include <cmath>
#include <string>

#include "test.h"

using namespace std;

void baseSyntax(){

    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3 , 2 , 1 , 2 ,1};

    string mystring = "did you learn it!";

    cout << mystring[0] << "\t" << mystring.size() << "\n" << mystring.append(" yes, i did.") << endl;

    cout << max(10, 5) << "\t" << min(10, 5) << endl;

    cout << round(2.4) << "\t" << round(2.6) << endl;

    cout << float(log(2)) << "\t" << exp(double(log(2))) << endl;

    cout << true << "\t" << false << endl;

    switch (height[0]){
        case 0:
            cout << height.at(0) << endl;
            // break;
        default:
            cout << "default" << endl;
    }

    cout << (10 > 11 ? 10 : 11) << endl;

    for (int i : height) {
        cout << i << " ";
    }
    
    cout << endl;

    while (!height.empty()) {
        cout << height.back() << " ";
        height.pop_back();
    }

}