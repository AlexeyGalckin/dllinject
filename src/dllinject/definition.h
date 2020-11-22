#pragma once
//
#include <string>
//
//Fake class
//
class PixelEngine
{
public:
	PixelEngine();
	~PixelEngine();
	//
	std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const& PixelEngine::containerVersion(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char> > const& ) const;
	// or simply:
	//const std::string& PixelEngine::containerVersion(const std::string&) const;
private:
	static constexpr size_t SIZE = 64; // Make sure we have enough space to hold the class
	char _data[SIZE];
};
