//
// Created by porter on 10/3/20.
//

#include "VTG.h"
#include <string>
#include <sstream>
using namespace std;


VTG::VTG(const string& input) {
    stringstream s_stream(input);
    string sub_string;
    string sub_string2;

    getline(s_stream, sub_string, ',');
    header = sub_string;
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    true_ground_course = heading(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    mag_ground_course = heading(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    ground_speed_knots = velocity(sub_string, sub_string2);
    getline(s_stream, sub_string, ',');
    getline(s_stream, sub_string2, ',');
    ground_speed_kph = velocity(sub_string, sub_string2);
    getline(s_stream, sub_string, '*');
    mode = sub_string;
    getline(s_stream, sub_string);
    check_sum = sub_string;
    getline(s_stream, sub_string);
    carriage_retun = sub_string;

}

string VTG::ToString() {
    stringstream o;
    o << endl
      << "Header:" << header << endl
      << "Ground Course(True):" << true_ground_course.ToString() << endl
      << "Ground Course(Magnetic):" << mag_ground_course.ToString() << endl
      << "Ground Speed(Knots):" << ground_speed_knots.ToString() << endl
      << "Ground Speed(KPH):" << ground_speed_kph.ToString() << endl
      << "Mode:" << mode << endl
      << "Check Sum:" << check_sum << endl
      << "Carriage Return:" << carriage_retun << endl << endl;

    return o.str();
}