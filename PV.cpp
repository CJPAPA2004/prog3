#include <vector>
#include "MyObj.h"


int PV(vector<MyObj>& v, int s, int t)
{
    if (s >= t) {
        return s;
    }

    int m = (s + t) / 2;

    // Check if m is a peak
    if ((m == 0 || v[m] > v[m - 1]) && (m == v.size() - 1 || v[m] > v[m + 1])) {
        return m;
    }

    // Check if m is a valley
    if ((m == 0 || v[m] < v[m - 1]) && (m == v.size() - 1 || v[m] < v[m + 1])) {
        return m;
    }

    // If increasing, search right half
    if (v[m] > v[m - 1]) {
        return PV(v, m + 1, t);
    }

    // If decreasing, search left half
    return PV(v, s, m - 1);
}


