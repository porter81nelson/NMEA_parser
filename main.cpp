#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "check_input.h"
#include "Input_Types.h"

using namespace std;


int main(int argc, char* argv[]) {
    string line;
    ifstream in(argv[1]);
    ofstream out(argv[2]);

    while (getline(in, line)) {
        if (!CheckInput(line)) {
            out << "**error** BAD INPUT" << endl;
        }
        else if ("$GPRMC" == line.substr(0, line.find(","))) {
            RMC data(line);
            out << data.ToString();
        }
        else if ("$GPGGA" == line.substr(0, line.find(","))){
            GGA data(line);
            out << data.ToString();
        }
        else if ("$GPGSA" == line.substr(0, line.find(","))){
            GSA data(line);
            out << data.ToString();
        }
        else if ("$GPVTG" == line.substr(0, line.find(","))){
            VTG data(line);
            out << data.ToString();
        }
    }

    return 0;
}


