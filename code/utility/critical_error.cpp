#include "critical_error.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

namespace Utility {
    [[noreturn]] void critical_error(std::string_view _message, std::source_location _source_location) {
	// TODO: std::format
	std::string message = 
	    std::string("Critical error: ") + std::string(_message) +
	    std::string("\nIn function: ") + std::string(_source_location.function_name()) +
	    std::string("\nSource location: ") + std::string(_source_location.file_name()) + std::string(":") + std::to_string(_source_location.line()) +
	    std::string("\nTerminating");
	
	std::cout << message << std::endl;
	std::abort();
    }
}
