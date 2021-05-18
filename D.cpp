#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N;
    cin >> N;

    long long* A = new long long[N];

    A[1] = 3;
    A[2] = 7;

    for (int i = 3; i <= N; i++)
        A[i] = (A[i - 2] % INT_MAX + 2 * (A[i - 1] % INT_MAX)) % INT_MAX;

    cout << A[N] << '\n';
    delete[] A;
}
