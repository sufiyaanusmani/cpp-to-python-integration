#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    ofstream csvFile("data.csv", ios::out);

    csvFile << "Roll_No,Name" << endl;
    csvFile << "21K-3195,Sufiyaan Usmani" << endl;
    csvFile << "21K-4594,Yousuf Ahmed" << endl;

    csvFile.close();

    system("python main.py");
    return 0;
}