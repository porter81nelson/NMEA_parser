//
// Created by porter on 10/3/20.
//

#ifndef NMEA_PARSER_GSA_H
#define NMEA_PARSER_GSA_H
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;


class GSA {

public:
    GSA(const string& input);

    string get_header(){return header;}
    string get_mode(){return mode;}
    string get_status(){return status;}
    string get_sat_number(){return sat_numbers.ToString();}
    string get_pos_dilution(){return pos_dilution;}
    string get_horz_dilution(){return horz_dilution;}
    string get_vert_dilution(){return horz_dilution;}
    string get_check_sum(){return check_sum;}
    string get_carriage_return(){return carriage_retun;}

    struct velocity {
        velocity(string a, string b) { speed = a; units = b;}
        velocity() = default;
        string speed;
        string units;
        string ToString() {string output = speed + "(" + units + ")"; return output;}
    };

    struct heading {
        heading(string a, string b) { degrees = a; mode = b;}
        heading() = default;
        string degrees;
        string mode;
        string ToString() {string output = degrees + "(" + mode + ")"; return output;}
    };

    struct sat_numbers {
        sat_numbers() = default;
        string sat1;
        string sat2;
        string sat3;
        string sat4;
        string sat5;
        string sat6;
        string sat7;
        string sat8;
        string sat9;
        string sat10;
        string sat11;
        string sat12;

        void set_sat1(string s) {sat1 = s;}
        void set_sat2(string s) {sat2 = s;}
        void set_sat3(string s) {sat3 = s;}
        void set_sat4(string s) {sat4 = s;}
        void set_sat5(string s) {sat5 = s;}
        void set_sat6(string s) {sat6 = s;}
        void set_sat7(string s) {sat7 = s;}
        void set_sat8(string s) {sat8 = s;}
        void set_sat9(string s) {sat9 = s;}
        void set_sat10(string s) {sat10 = s;}
        void set_sat11(string s) {sat11 = s;}
        void set_sat12(string s) {sat12 = s;}

        string ToString() {
            stringstream o;
            o << "ID 1:" << sat1 << endl
            << "ID 2:" << sat2 << endl
            << "ID 3:"<< sat3 << endl
            << "ID 4:" << sat4 << endl
            << "ID 5:" << sat5 << endl
            << "ID 6:" << sat6 << endl
            << "ID 7:" << sat7 << endl
            << "ID 8:" << sat8 << endl
            << "ID 9:" << sat9 << endl
            << "ID 10:" << sat10 << endl
            << "ID 11:" << sat11 << endl
            << "ID 12:" << sat12;
            return o.str();
        }
    };

    string ToString();
private:
    string header;
    string mode;
    string status;
    sat_numbers sat_numbers;
    string pos_dilution;
    string horz_dilution;
    string vert_dilution;
    string check_sum;
    string carriage_retun;

};


#endif //NMEA_PARSER_GSA_H