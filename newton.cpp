//此函数是用来求一元3次方程ax^3+bx^2+cx+d=0的解
//比如 x^3-27=0，我们就可以输入1 0 0 -27，这样我们就可以得到一个解
#include <iostream>
#include <cmath>

using namespace std;

double iterate(double a, double b, double c, double d, double x);

int main()
{
    double a, b, c, d;
    double x = 10000.0;
    
    cout << "请依次输入方程四个系数：";
    cin >> a >> b >> c >> d;

    x = iterate(a, b, c, d, x);

    cout << x << endl;

    return 0;
}

double iterate(double a, double b, double c, double d, double x)
{
    while (abs(a * x * x * x + b * x * x + c * x + d) > 0.000001)
    {
        x = x - (a * x * x * x + b * x * x + c * x + d) / (3 * a * x * x + 2 * b * x + c);
    }
    return x;
}
