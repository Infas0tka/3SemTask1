#include <iostream>
#include <graphics.h>
#include "clNode.h"
#include "clLine.h"

using namespace std;

int main()
{
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "");
    cout << "Good bye, world!" << endl;

    clCircle a(320, 30);
    a.show();

    clCircle b(320, 445);
    b.show();

    clLine l1(100, 200, 100, 400);
    l1.show();

    clLine l2(100, 200, 300, 200);
    l2.show();

    clNode c(50, 50, 11);
    c.show();

    readkey();
    closegraph();


    cout << "Hello, world!" << endl;
    return 0;
}
