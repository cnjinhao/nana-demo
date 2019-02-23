#include <nana/gui/wvl.hpp> 

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main() 
{ 
    using namespace nana; 
    form fm(API::make_center(240, 160),  appear::decorate<appear::minimize, appear::maximize>()); 
    fm.show(); 
    exec(); 
} 