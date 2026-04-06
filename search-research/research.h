#pragma once
#ifndef RESEARCH_H
#define RESEARCH_H

#include <iostream>
#include <vector>
using namespace std;

vector<int> research(int n, vector<int>& arr) {
    int x = arr.size();
    int ans = -1;
    for (int i = 0; i < x; ++i) {
        if (arr[i] == n) {
            ans = i + 1;
        }
    }
    return {ans};
}

#endif