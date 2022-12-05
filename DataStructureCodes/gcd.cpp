#include<algorithm>

using namespace std;

int euclid_gcd(int a, int b)
{
  while (b != 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int brute_force_gcd(int a, int b)
{
  // We'll assume that a > b
  int g = 0;
  for (int d = 1; (long long)d * d <= b; d++)
  {
    if (b % d == 0)
    {
      // If d divides b, there are two divisors to check
      // d and b/d
      if (a % d == 0)
      {
        g = max(g, a);
      }
      if (a % (b / d) == 0)
      {
        g = max(g, b/d);
      }
    }
  }
}