#include<iostream>
#include"BTree.h"
using namespace std;

void test()
{
    BTree s1;
    s1.insert(9);
    s1.insert(7);
    s1.insert(6);
    s1.insert(11);
    s1.insert(13);
    s1.insert(10);
    s1.insert(12);
    s1.inOrder();
}

int main()
{
    cout << "This is a test." << endl;
    test();
    return 0;
}
