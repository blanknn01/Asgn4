#include "IEEE.h"

IEEE::IEEE()
{
    conference_name = "Unknown";
    conference_location = "Unknown";
    topic_names.insert("Topic");
}

IEEE::IEEE(std::string conference_name, std::string conference_location, std::set<std::string> topic_names)
{
    this->conference_name = conference_name;
    this->conference_location = conference_location;
    this->topic_names = topic_names;
}

std::string IEEE::getConferenceName()
{
    return conference_name;
}

std::string IEEE::getConferenceLocation()
{
    return conference_location;
}

void IEEE::setConferenceName()
{
    this->conference_name = conference_name;
}

void IEEE::setConferenceLocation()
{
    this->conference_location = conference_location;
}
