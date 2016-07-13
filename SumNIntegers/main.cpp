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
    vector<double> to_sum;
    vector<double> differences;
    double to_load, n;
    double summed = 0;
    
    cout << "Please enter the number of values you want to sum. \n";
    cin >> n;
    
    cout << "Please enter some integers (press '|' to stop): \n";
    while (cin >> to_load) {
        to_sum.push_back(to_load);
    }
    
    if (n < to_sum.size()) {
        cout << "The sum of the first " << n << " numbers ( ";
        for (int i = 0; i < n; ++i) {
            cout << to_sum[i] << " ";
            summed += to_sum[i];
        }
        cout << ") is " << summed << ".\n";
        
        for (int i = 1; i < to_sum.size(); ++i) {
            differences.push_back(to_sum[i] - to_sum[i - 1]);
        }
        
        cout << "Here is a list of the differences between adjacent values you entered.\n";
        for (int i = 0; i < differences.size(); ++i) {
            cout << differences[i] << " ";
        }
    } else {
        cout << "You didn't enter at least " << n << " numbers.\n";
    }
    
    
}
