#ifndef TSTATE_H
#define TSTATE_H
#include <string>
#include <fstream>
#include "state.h"

class tstate
{
private:
	int max_num_state; 
	int num_state; 
	state* states; 
public:
	tstate(int max_nst); 
	~tstate();

	void add_state(state astate); 
	void delete_state(state astate);
	void read_from_file(string filename); 
	void write_to_file(string filename); 
	void display_all(); 
	void Sum(string acontinent);
	void find(string lang);

};
#endif