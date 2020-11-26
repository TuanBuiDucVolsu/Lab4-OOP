#include "state.h"
#include <iostream>

using namespace std;


state::state(string cou, string cap, string gov, string lag, string rel, string con, float are, int pop)
{
	country = cou;
	capital = cap;
	government = gov;
	language = lag;
	religion = rel;
	continent = con;
	area = are;
	population = pop;
}

string state::get_continent()
{
	return continent;
}
string state::get_lang()
{
	return language;

}

string state::get_country()
{
	return country;
}
string state::get_capital()
{
	return capital;
}
float state::get_area()
{
	return area;
}
int state::get_population()
{
	return population;
}
void state::read_from(ifstream& file)
{
	getline(file, country);
	getline(file, capital);
	getline(file, government);
	getline(file, language);
	getline(file, religion);
	getline(file, continent);
	file >> area;
	file.ignore();
	file >> population;
	file.get();
}

void state::write_to(ofstream& file)
{
	file << country << endl;
	file << capital << endl;
	file << government << endl;
	file << language << endl;
	file << religion << endl;
	file << continent << endl;
	file << area << endl;
	file << population << endl;
}

void state::display()
{
	cout << "\nCountry : " << country << endl;
	cout << "\nCapital : " << capital << endl;
	cout << "\nGoverment : " << government << endl;
	cout << "\nLanguage : " << language << endl;
	cout << "\nReligion : " << religion << endl;
	cout << "\nArea : " << area << endl;
	cout << "\nPopulation : " << population << endl;
	cout << "\n-----------##------------";
}