// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int N)
{
    double s = 1;
    for (double k = N; k <= 19; k++)
        s *= (k - N) / (k + N) + 1;
    return s;
}
double S1(const int N, const int k)
{
    if (k > 19)
        return 1;
    else
        return ((1.*k - N) / (k + N) + 1) * S1(N, k + 1);
}
double S2(const int N, const int k)
{
    if (k < N)
        return 1;
    else
        return ((1. * k - N) / (k + N) + 1) * S2(N, k - 1);
}
double S3(const int N, const int k, double t)
{
    t *= (1. * k - N) / (k + N) + 1;
    if (k >= 19)
        return t;
    else
        return S3(N, k + 1, t);
}
double S4(const int N, const int k, double t)
{
    t *= (1.*k - N) / (k + N) + 1;
    if (k <= N)
        return t;
    else
        return S4(N, k - 1, t);
}
int main()
{
    int N;
    cout << "N = "; cin >> N;
    cout << endl << endl << "          (iter) S0 =   " << S0(N) << endl;
    cout << "     (rec up ++) S1 =   " << S1(N, N) << endl;
    cout << "     (rec up --) S2 =   " << S2(N, 19) << endl;
    cout << "   (rec down ++) S3 =   " << S3(N, N, 1) << endl;
    cout << "   (rec down --) S4 =   " << S4(N, 19, 1) << endl << endl;
    return 0;
}