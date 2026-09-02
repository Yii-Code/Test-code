#include <iostream>
#include <fstream>
using namespace std;
int main( ){
    ofstream data_file;
    data_file.open("case.file");
    string contact;
    data_file<<contact;
    data_file.close( );
    return 0;
}
