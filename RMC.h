//
// Created by porter on 10/3/20.
//

#ifndef NMEA_PARSER_RMC_H
#define NMEA_PARSER_RMC_H

#include <string>
using namespace std;


class RMC {
public:
    RMC(const string& input);

    string get_header(){return header;}
    string get_time(){return time;}
    string get_status(){return status;}
    string get_latitude(){return latitude.ToString();}
    string get_longitude(){return longitude.ToString();}
    string get_ground_speed(){return ground_speed;}
    string get_ground_course(){return ground_course;}
    string get_date(){return date;}
    string get_magnet_variation(){return magnet_variation;}
    string get_mode(){return mode;}
    string get_checksum(){return checksum;}
    string get_carriage_return(){return carriage_return;}

    struct coordinates {
        coordinates(string a, string b) {degrees = a; direction = b;}
        coordinates() {degrees = ""; direction = "";}
        string degrees;
        string direction;
        string ToString() {string output = degrees + "," + direction; return output;}
    };

    string ToString();
private:
    string header;
    string time;
    string status;
    coordinates latitude;
    coordinates longitude;
    string ground_speed;
    string ground_course;
    string date;
    string magnet_variation;
    string mode;
    string checksum;
    string carriage_return;
};


#endif //NMEA_PARSER_RMC_H
