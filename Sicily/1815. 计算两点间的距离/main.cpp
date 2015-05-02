// soj: 1815. 计算两点间的距离
// Sun Nov 30, 2014--------Shawn Chow
#include "iostream"
#include "cmath"
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  while (n--) {
    double x1, y1, x2, y2, distance;
    cin >> x1 >> y1 >> x2 >> y2;
    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout.precision(2);
    cout << fixed << distance << endl;
  }

  return 0;
}


