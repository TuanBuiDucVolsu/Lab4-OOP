#ifndef STATE_H
#define STATE_H
#include <string>
#include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;
class state
{
private:
    string country;
    string capital;
    string government;
    string language;
    string religion;
    string continent;
    float area;
    int population;
public:
    state() : country(""), capital(""), government(""), language(""), religion(""), continent(""), area(0), population(0){};
    state(string, string, string, string, string, string, float, int);
    void read_from(ifstream& file);
    void write_to(ofstream& file);
    void display();
    string get_continent();
    string get_lang();
    string get_country();
    string get_capital();
    float get_area();
    int get_population();
    
};

#endif
