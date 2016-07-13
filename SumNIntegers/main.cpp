//
//  main.cpp
//  SumNIntegers
//
//  Created by Brent Perry on 7/13/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<int> to_sum;
    int to_load, n;
    int summed = 0;
    constexpr int int_max = 2147483647;
    bool too_big = false;
    
    cout << "Please enter the number of values you want to sum. \n";
    cin >> n;
    
    cout << "Please enter some integers (press '|' to stop): \n";
    while (cin >> to_load) {
        to_sum.push_back(to_load);
    }
    
    if (n > to_sum.size() - 1) {
        cout << "The sum of the first " << n << " numbers ( ";
        for (int i = 0; i < n; ++i) {
            cout << to_sum[i] << " ";
            if (int_max - summed >= to_sum[i]) {
                summed += to_sum[i];
            } else {
                too_big = true;
            }
            
        }
        if (too_big) {
            cout << ") is too large for an int type.\n";
        } else {
            cout << ") is " << summed << ".\n";
        }
        
    } else {
        cout << "You didn't enter at least " << n << " numbers.\n";
    }
    
    
}
