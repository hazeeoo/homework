// #define NDEBUG
#include <cassert>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

const double EPS = 1e-6;

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double solve(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = dist(x1, y1, x2, y2);
    double b = dist(x2, y2, x3, y3);
    double c = dist(x3, y3, x1, y1);

    if (a + b > c && a + c > b && b + c > a)
    {
        double max_side = max({a, b, c});
        return max_side;
    }
    else
    {
        return -1;
    }
}

int main(){
    //здесь делайте ввод данных с консоли, передайте их функции solve()
    //возвращаемый ответ функции выводите на консоль

    //Dulustan's tests
    {
        assert(abs(dist(0, 0, 1000, 0) - 1000) < EPS);
        assert(abs(dist(-5, 15, 10, -10) - 29.154759474) < EPS);
        assert(abs(dist(-12.5, 50000, 12.5, 50200) - 201.556443707) < EPS);
        assert(abs(solve(0, 0, 6, 0, 3, 2) - 6) < EPS);
        assert(abs(solve(-2, -2, -2, 4, 9, 1) - 11.401754251) < EPS);
        assert(abs(solve(1, 4, -5, -1, 0, -3) - 7.810249676) < EPS);
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif
    }

    //Придумайте по 3 теста для dist и solve.
    //Каждый тест нарисуйте на бумаге и покажите преподу.
    //Student's tests
    {
        assert(abs(dist(0, 0, 3, 4) - 5) < EPS);
        assert(abs(dist(1, 1, 1, 1) - 0) < EPS);
        assert(abs(dist(0, 0, 0, 5) - 5) < EPS);
        
        assert(abs(solve(0, 0, 3, 0, 0, 4) - 5) < EPS);
        assert(abs(solve(0, 0, 1, 0, 2, 0) + 1) < EPS);
        assert(abs(solve(0, 0, 5, 0, 0, 12) - 13) < EPS);
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif
    }
}



