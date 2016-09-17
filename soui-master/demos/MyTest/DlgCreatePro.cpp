#include "stdafx.h"
#include "DlgCreatePro.h"

namespace SOUI
{
void SDlgCreatePro::OnOK()
{
	SEdit *edit = FindChildByName2<SEdit>(L"edit_input");
	m_strinput = edit->GetWindowText();
	SHostDialog::OnOK();
}
}