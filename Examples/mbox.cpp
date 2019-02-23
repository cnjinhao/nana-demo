#include <nana/gui/wvl.hpp>

void when_exit(const nana::arg_unload& ei)
{
    nana::msgbox m(ei.window_handle,"msgbox example", nana::msgbox::yes_no);
    m.icon(m.icon_question);
    m<<"Are you sure you want to exit the game?";
    ei.cancel = (m() != m.pick_yes);
}

#ifdef _MSC_VER
#pragma comment(linker, "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")
#endif

int main()
{
    using namespace nana;
    form fm;
    fm.events().unload(when_exit);
    fm.show();
    exec();
}