#include <nana/gui/wvl.hpp> 

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main() 
{ 
    using namespace nana; 
    form_loader<form>()().show(); 
    exec(); 
} 