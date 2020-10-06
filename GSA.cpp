//
// Created by porter on 10/3/20.
//

#include "GSA.h"
#include <string>
#include <sstream>
using namespace std;


GSA::GSA(const string& input) {
    stringstream s_stream(input);
    string sub_string;
    string sub_string2;

    getline(s_stream, sub_string, ',');
    header = sub_string;
    getline(s_stream, sub_string, ',');
    mode = sub_string;
    getline(s_stream, sub_string, ',');
    status = sub_string;
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat1(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat2(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat3(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat4(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat5(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat6(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat7(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat8(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat9(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat10(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat11(sub_string);
    getline(s_stream, sub_string, ',');
    sat_numbers.set_sat12(sub_string);
    getline(s_stream, sub_string, ',');
    pos_dilution = sub_string;
    getline(s_stream, sub_string, ',');
    horz_dilution = sub_string;
    getline(s_stream, sub_string, '*');
    vert_dilution = sub_string;
    getline(s_stream, sub_string);
    check_sum = sub_string;
    getline(s_stream, sub_string);
    carriage_retun = sub_string;

}

string GSA::ToString() {
    stringstream o;
    o << endl
      << "Header:" << header << endl
      << "Mode:" << mode << endl
      << "Status:" << status << endl
      << "Satellite Numbers:" << endl << sat_numbers.ToString() << endl
      << "Position Dilution:" << pos_dilution << endl
      << "Horizontal Dilution:" << horz_dilution << endl
      << "Vertical Dilution:" << vert_dilution << endl
      << "Check Sum:" << check_sum << endl
      << "Carriage Return:" << carriage_retun << endl << endl;

    return o.str();
}