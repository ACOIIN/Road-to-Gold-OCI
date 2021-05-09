#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int biblio[n];
  for (int i = 0; i < n; i++) {
    cin >> biblio[i];
  }

  sort(biblio, biblio + n);

  int sol = 0;

  for (int i = 0; i < n; i++) {
    if (n - i >= biblio[i])
      sol = max(sol, biblio[i]);
    else {
      sol = max(sol, n - i);
    }
  }

  cout << sol << "\n";
  return 0;
}
