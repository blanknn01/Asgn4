#pragma once
#include<string>
#include<set>
class IEEE
{
private:
	std::string conference_name;
	std::string conference_location;
	std::set<std::string> topic_names;
public:
	IEEE();
	IEEE(std::string conference_name, std::string conference_location, std::set<std::string> topic_names);
	std::string getConferenceName();
	std::string getConferenceLocation();
	void setConferenceName();
	void setConferenceLocation();

};

