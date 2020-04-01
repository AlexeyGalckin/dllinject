#include "dllinject.h"
#include "definition.h"
//
#include <memory>
//
int DoInject()
{
	auto pe = std::make_shared< PixelEngine >();
	//
	auto rc = pe->containerVersion("SomeString");
	//
	return 0;
}

