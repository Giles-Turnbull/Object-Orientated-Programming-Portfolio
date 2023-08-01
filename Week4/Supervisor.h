#pragma once
#include <string>
class Supervisor
{
	private:
		std::string name;
	public:
		Supervisor();
		void setSupervisor(std::string name);
		~Supervisor();
};

