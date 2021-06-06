#include <bits/stdc++.h>
using namespace std;

struct Point {

  double x, y;

  Point operator+(Point p) {
    return {x+p.x, y+p.y};
  }
  Point operator-(Point p) {
    return {x-p.x, y-p.y};
  }
  Point operator*(double d) {
    return {x*d, y*d};
  }
  Point operator/(double d) {
    return {x/d, y/d};
  }

  double sq(Point p) {return p.x*p.x + p.y*p.y;}
  double abs(Point p) {return sqrt(sq(p));}

  ostream& operator<<(ostream& os, Point p) {
    return os << "("<< p.x << "," << p.y << ")";
  }
};

int main() {
    pt a{3,4},      b{2,-1};
        x=3, y=4
    cout << a.x << '\n'; // 3
    cout << a.y << '\n'; // 4

    cout << a+b << " " << a-b << "\n";
    return 0;
}
