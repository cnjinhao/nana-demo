#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main()
{
    using namespace nana;
    form    fm;
    label   lb(fm, rectangle(fm.size()));
    lb.caption("Hello, World");
    fm.show();
    exec();
}