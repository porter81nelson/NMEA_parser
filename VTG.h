//
// Created by porter on 10/3/20.
//

#ifndef NMEA_PARSER_VTG_H
#define NMEA_PARSER_VTG_H
#include <string>
using namespace std;


class VTG {

public:
    VTG(const string& input);

    string get_header(){return header;}
    string get_true_ground_course(){return true_ground_course.ToString();}
    string get_mag_ground_course(){return mag_ground_course.ToString();}
    string get_ground_speed_knots(){return ground_speed_knots.ToString();}
    string get_ground_speed_kph(){return ground_speed_kph.ToString();}
    string get_mode(){return mode;}
    string get_check_sum(){return check_sum;}
    string get_carriage_return(){return carriage_retun;}

    struct velocity {
        velocity(string a, string b) { speed = a; units = b;}
        velocity() {speed = ""; units = "";}
        string speed;
        string units;
        string ToString() {string output = speed + "(" + units + ")"; return output;}
    };

    struct heading {
        heading(string a, string b) { degrees = a; mode = b;}
        heading() {degrees = ""; mode = "";}
        string degrees;
        string mode;
        string ToString() {string output = degrees + "(" + mode + ")"; return output;}
    };

    struct altitude {
        altitude(string a, string b) {height = a; units = b;}
        altitude() {height = ""; units = "";}
        string height;
        string units;
        string ToString() {string output = height + "(" + units + ")"; return output;}
    };

    string ToString();
private:
    string header;
    heading true_ground_course;
    heading mag_ground_course;
    velocity ground_speed_knots;
    velocity ground_speed_kph;
    string mode;
    string check_sum;
    string carriage_retun;

};


#endif //NMEA_PARSER_VTG_H
