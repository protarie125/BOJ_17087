#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, s;
vl lst;

ll VecGcd(const vl& x) {
  if (0 == x.size()) {
    return 0;
  }

  auto ret = x[0];
  for (auto i = 1; i < x.size(); ++i) {
    ret = gcd(ret, x[i]);
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> s;
  lst = vl(n);
  for (auto&& x : lst) {
    cin >> x;
    x -= s;
  }

  cout << VecGcd(lst);

  return 0;
}