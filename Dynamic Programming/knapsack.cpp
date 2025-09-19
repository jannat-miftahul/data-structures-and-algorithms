#include <bits/stdc++.h>
using namespace std;

int val[100005], wt[100005];

int knapsack(int i, int mx_wt){ // complexity: O(2^n)
    if(i < 0 || mx_wt <= 0)
        return 0;

    if(wt[i] <= mx_wt){
        int op1 = knapsack(i - 1, mx_wt - wt[i] ) + val[i];
        int op2 = knapsack(i - 1, mx_wt);

        return max(op1, op2);
    }
    else{
        return knapsack(i - 1, mx_wt);
    }
}

int main() {
    int n, mx_wt;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> val[i];
    for(int i = 0; i < n; i++)
        cin >> wt[i];

    cin >> mx_wt;
    
    cout << knapsack(n-1, mx_wt) << endl;

    return 0;
}