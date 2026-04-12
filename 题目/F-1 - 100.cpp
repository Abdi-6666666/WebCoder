#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    long long K;
    if(!(cin >> N >> K)) return 0;
    vector<long long> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(K <= 0){
        cout << 0 << "\n";
        return 0;
    }

    vector<int> nextR(N, -1);
    for(int i=0;i<N;i++){
        if(i+1 < N) nextR[i] = i+1;
    }
    vector<char> usedWhite(N, 0), usedBlack(N, 0);

    using T = tuple<long long,int,int>;
    priority_queue<T, vector<T>, greater<T>> pq;

    for(int i=0;i<N;i++){
        if(nextR[i] != -1){
            int r = nextR[i];
            pq.emplace(a[r] - a[i], i, r);
        }
    }

    long long taken = 0;
    long long totalCost = 0;

    while(taken < K && !pq.empty()){
        auto [cost, i, r] = pq.top(); pq.pop();
        if(usedWhite[i]){
            continue;
        }
        if(usedBlack[r]){
            int nr = r + 1;
            while(nr < N && usedBlack[nr]) nr++;
            if(nr < N){
                nextR[i] = nr;
                pq.emplace(a[nr] - a[i], i, nr);
            } else {
                nextR[i] = -1; 
            }
            continue;
        }
        usedWhite[i] = 1;
        usedBlack[r] = 1;
        totalCost += cost;
        taken++;

        int nr = r + 1;
        while(nr < N && usedBlack[nr]) nr++;
        if(nr < N){
            nextR[i] = nr;
            pq.emplace(a[nr] - a[i], i, nr);
        } else {
            nextR[i] = -1;
        }
    }
    cout << totalCost << "\n";
    return 0;
}