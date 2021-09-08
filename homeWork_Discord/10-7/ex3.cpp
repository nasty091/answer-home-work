#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a[100], b[100], c[100];
    cin >> n >> m;
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < m; i++)  cin >> b[i];
    int size = 0, i = 0, j = 0;
    while (i<n && j<m){
        if(a[i] < b[j]){
            c[size] = a[i];
            size++;
            i++;
        } else {
            c[size] = b[j];
            size++;
            j++;
        }
    }
    while(i < n){
        c[size] = a[i];
        size++;
        i++;
    }
    while(j < m){
        c[size] = b[j];
        size++;
        j++;
    }
    for(int i = 0; i < size; i++){
        cout << c[i] << " ";
    }
    return 0;
}