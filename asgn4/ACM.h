#pragma once
#include<string>
#include<map>
class ACM
{
private:
	std::string topic_of_the_day;
	std::map<std::string,int> Location;
	int number_of_presentation;
public:
	ACM();
	ACM(std::string topic_of_the_day, std::map<std::string, int> Location, int number_of_presentation);
	std::string getTopicOfTheDay() const;
	int NumberOfPresentation() const;
	void setTopicOfTheDay(std::string topic_of_the_day);
	void setNumberOfTheDay(int number_of_presentation);


};

