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

vector<int> binary_search_orderly(int n, vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == n) {
            return {mid + 1};
        } else if (arr[mid] < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return {-1};
}

#endif