#pragma once
#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <vector>
using namespace std;

vector<int> search(int n, vector<int>& arr) {
    int x = arr.size();
    for (int i = 0; i < x; ++i) {
        if (arr[i] == n) {
            return {i + 1};
        }
    }
    return {-1};
}

#endif