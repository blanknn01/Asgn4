#include "ACM.h"

ACM::ACM()
{
    topic_of_the_day = "Unknown";
    Location.insert(std::pair<std::string, int>("unknown", 0));
    number_of_presentation = 0;
}

ACM::ACM(std::string topic_of_the_day, std::map<std::string, int> Location, int number_of_presentation)
{
    this->topic_of_the_day = topic_of_the_day;
    this->Location = Location;
    this->number_of_presentation;
}

std::string ACM::getTopicOfTheDay() const
{
    return topic_of_the_day;
}

int ACM::NumberOfPresentation() const
{
    return number_of_presentation;
}

void ACM::setTopicOfTheDay(std::string topic_of_the_day)
{
    this->topic_of_the_day = topic_of_the_day;
}

void ACM::setNumberOfTheDay(int number_of_presentation)
{
    this->number_of_presentation = number_of_presentation;
}
