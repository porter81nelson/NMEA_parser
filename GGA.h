//
// Created by porter on 10/3/20.
//

#ifndef NMEA_PARSER_GGA_H
#define NMEA_PARSER_GGA_H
#include <string>
using namespace std;


class GGA {

public:
    GGA(const string& input);

    string get_header(){return header;}
    string get_time(){return time;}
    string get_latitude(){return latitude.ToString();}
    string get_longitude(){return longitude.ToString();}
    string get_position_fix(){return position_fix;}
    string get_num_satellites(){return num_satellites;}
    string get_hz_dilution(){return hz_dilution;}
    string get_msl_alt(){return msl_alt.ToString();}
    string get_geod_alt(){return geod_alt.ToString();}
    string get_diff_age(){return diff_age;}
    string get_station_id(){return station_id;}
    string get_check_sum(){return check_sum;}
    string get_carriage_return(){return carriage_retun;}

    struct coordinates {
        coordinates(string a, string b) {degrees = a; direction = b;}
        coordinates() {degrees = ""; direction = "";}
        string degrees;
        string direction;
        string ToString() {string output = degrees + "," + direction; return output;}
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
    string time;
    coordinates latitude;
    coordinates longitude;
    string position_fix;
    string num_satellites;
    string hz_dilution;
    altitude msl_alt;
    altitude geod_alt;
    string diff_age;
    string station_id;
    string check_sum;
    string carriage_retun;

};


#endif //NMEA_PARSER_GGA_H
