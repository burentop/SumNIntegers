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
    
    cout << "Please enter the number of values you want to sum. \n";
    cin >> n;
    
    cout << "Please enter some integers (press '|' to stop): \n";
    while (cin >> to_load) {
        to_sum.push_back(to_load);
    }
    
    cout << "The sum of the first " << n << " numbers ( ";
    for (int i = 0; i < n; ++i) {
        cout << to_sum[i] << " ";
        summed += to_sum[i];
    }
    cout << ") is " << summed << ".\n";
}
