//
// Created by porter on 10/3/20.
//

#include "RMC.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

RMC::RMC(const string& input) {
    stringstream s_stream(input);
    string sub_string;
    string sub_string2;

    getline(s_stream, sub_string, ',');
    header = sub_string;
    getline(s_stream, sub_string, ',');
    time = sub_string;
    getline(s_stream, sub_string, ',');
    status = sub_string;
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    latitude = coordinates(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    longitude = coordinates(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    ground_speed = sub_string;
    getline(s_stream, sub_string, ',');
    ground_course = sub_string;
    getline(s_stream, sub_string, ',');
    date = sub_string;
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    magnet_variation = sub_string;
    getline(s_stream, sub_string, '*');
    mode = sub_string;
    getline(s_stream, sub_string, ',');
    checksum = sub_string;
    getline(s_stream, sub_string);
    carriage_return = sub_string;

}

string RMC::ToString() {
    stringstream o;
    o << endl
    << "Header:" << header << endl
    << "Time:" << time << endl
    << "Status:" << status << endl
    << "Latitude:" << latitude.ToString() << endl
    << "Longitude:" << longitude.ToString() << endl
    << "Ground Speed:" << ground_speed << endl
    << "Ground Course:" << ground_course << endl
    << "Date:" << date << endl
    << "Magnetic Variation:" << magnet_variation << endl
    << "Mode:" << mode << endl
    << "Check Sum:" << checksum << endl
    << "Carraige Return:" << carriage_return << endl << endl;
    return o.str();
}