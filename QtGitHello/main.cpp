#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello Git!" << endl;
    cout << "Successfully cloned from GitHub using SourceTree." << endl;

    return a.exec();
}
