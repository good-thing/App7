#include "pch.h"
#include "BgLabelControl.h"
#if __has_include("BgLabelControl.g.cpp")
#include "BgLabelControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App7::implementation
{
    BgLabelControl::BgLabelControl()
    {
        DefaultStyleKey(winrt::box_value(L"App7.BgLabelControl"));
    }

    int32_t BgLabelControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void BgLabelControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
