//
// Created by porter on 10/3/20.
//

#include "GGA.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

GGA::GGA(const string& input) {
    stringstream s_stream(input);
    string sub_string;
    string sub_string2;

    getline(s_stream, sub_string, ',');
    header = sub_string;
    getline(s_stream, sub_string, ',');
    time = sub_string;
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    latitude = coordinates(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    longitude = coordinates(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    position_fix = sub_string;
    getline(s_stream, sub_string, ',');
    num_satellites = sub_string;
    getline(s_stream, sub_string, ',');
    hz_dilution = sub_string;
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    msl_alt = altitude(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    geod_alt = altitude(sub_string,sub_string2);
    getline(s_stream, sub_string, ',');
    diff_age = sub_string;
    getline(s_stream, sub_string, ',');
    station_id = sub_string;
    getline(s_stream, sub_string, '*');
    check_sum = sub_string;
    getline(s_stream, sub_string);
    carriage_retun = sub_string;

}

string GGA::ToString() {
    stringstream o;
    o << endl
      << "Header:" << header << endl
      << "Time:" << time << endl
      << "Latitude:" << latitude.ToString() << endl
      << "Longitude:" << longitude.ToString() << endl
      << "Position Fix:" << position_fix << endl
      << "Number of Satellites:" << num_satellites << endl
      << "Horizontal Dilution:" << hz_dilution << endl
      << "MSL Altitude(units):" << msl_alt.ToString() << endl
      << "Geod Altitude(units:" << geod_alt.ToString() << endl
      << "Age of Differential Corrections:" << diff_age << endl
      << "DGPS reference station ID:" << station_id << endl
      << "Check Sum:" << check_sum << endl
      << "Carriage Return:" << carriage_retun << endl << endl;

    return o.str();
}