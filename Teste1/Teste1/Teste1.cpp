#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream log;
    
    log.open("teste.txt", ios_base::app);

    log << "teste";

    log.close();

    return 0;
}

