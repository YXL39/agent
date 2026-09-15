#include "agent/agent.h"
#include <ctime>
std::string Agent::respond(const std::string& input){
	if(input=="exit") return "__EXIT__";
	if(input=="time"){
		std::time_t t=std::time(nullptr);
		return std::ctime(&t);
	}
	if(input.rfind("echo ",0)==0){
		return input.substr(5);
	}
	return "Agent: "+input;
}
