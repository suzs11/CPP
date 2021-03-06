//例07-11；ex07-11.cpp
//容器list中的排序、合并等函数的使用，演示c++中容器list的高级函数使用
#include <iostream>
#include <list>
using namespace std;
bool mycomparison (double first, double second){
    return ( int(first) < int(second) );
}
int main (){
    list<double> first, second;

    first.push_back (3.1);
    first.push_back (2.2);
    first.push_back (2.9);

    second.push_back (3.7);
    second.push_back (7.1);
    second.push_back (1.4);

    first.sort();
    second.sort();

    first.merge(second);

    second.push_back (2.1);

    first.merge(second, mycomparison);

    for (list<double>::iterator it = first.begin(); it != first.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
