#include<iostream>
#include"Course.h"
#include"ACM.h"
#include"IEEE.h"
#include<map>
#include<set>

int main()
{
	std::set < std::string > new_set = { "ads","asd" };
	IEEE ieee("conf name", "conf Loc", new_set);
	std::cout << ieee.getConferenceLocation();
}