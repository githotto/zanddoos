#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int dummy;

    cout << "Hello Git!" << endl;

    return a.exec();
}
