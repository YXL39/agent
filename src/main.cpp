#include "agent/agent.h"
#include <iostream>
#include <string>
int main(){
	Agent agent;
	std::string line;
	while(std::getline(std::cin,line)){
		auto out=agent.respond(line);
		if(out=="__EXIT__") break;
		std::cout<<out<<"\n";
	}
	return 0;
}
