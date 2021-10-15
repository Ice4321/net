#pragma once

#include "utility/critical_error.hpp"
#include <string>

// TODO: std::format
#define ASSERT(_expression) static_cast<bool>(_expression) ? void(0) : Utility::critical_error(std::string("Assertion failed: ") + #_expression)
