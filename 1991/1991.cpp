#include <iostream>
using namespace std;

int tree[26][2];
int N;

void preorder(int idx){
    if (idx == -1) return;

    cout << char(idx + 'A');
    preorder(tree[idx][0]);
    preorder(tree[idx][1]);
}

void inorder(int idx){
    if (idx == -1) return;

    inorder(tree[idx][0]);
    cout << char(idx + 'A');
    inorder(tree[idx][1]);
}

void postorder(int idx){
    if (idx == -1) return;

    postorder(tree[idx][0]);
    postorder(tree[idx][1]);
    cout << char(idx + 'A');
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    char n, nL, nR;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> n >> nL >> nR;
        if (nL != '.') {
            tree[n - 'A'][0] = nL - 'A';
        }
        else {
            tree[n - 'A'][0] = -1;
        }
        if (nR != '.') {
            tree[n - 'A'][1] = nR - 'A';
        }
        else {
            tree[n - 'A'][1] = -1;
        }
    }

    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);
    cout << "\n";
}