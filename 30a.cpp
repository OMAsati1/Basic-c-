#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "This point is(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    point p(1, 7);
    p.displayPoint();
    point q(6, 9);
    q.displayPoint();
    return 0;
}