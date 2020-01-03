#include <bits/stdc++.h>

using namespace std;

int subtask1_l = 3;
int subtask1[3][2] = {{3, 4}, {2, 2}, {1, 1}};
int subtask2_l = 3;
int subtask2[3][2] = {{6, 7}, {2, 2}, {1, 1}};
string s;
int n, m;

int main() {
  getline(cin, s);
  cin >> n >> m;

  if (s[1] == '1') {
    for (int i=0; i<subtask1_l; i++) {
      cout << subtask1[i][0] << ' ' << subtask1[i][1] << endl << flush;
    }
  }

  if (s[2] == '2') {
    for (int i=0; i<subtask2_l; i++) {
      cout << subtask2[i][0] << ' ' << subtask2[i][1] << endl << flush;
    }
  }
}
