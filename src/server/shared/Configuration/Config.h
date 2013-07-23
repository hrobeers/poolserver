#ifndef CONFIG_H_
#define CONFIG_H_

#include <cassert>
#include <cstring>
#include <boost/program_options.hpp>
#include <boost/cstdint.hpp>

class Config
{
public:
	Config();
	~Config();
	
	// Reading
	template<class T>
	T Get(std::string key)
	{
		return vm[key].as<T>();
	}
	
	// Containers
	boost::program_options::variables_map vm;
};

extern Config sConfig;

#endif