#pragma once
#include <core/Swnd.h>
#include <control/SCmnCtrl.h>

namespace SOUI
{
	class SMyButton:public SButton
	{
		SOUI_CLASS_NAME(SSwitch,L"mybutton")
	public:
		//SToolbox():m_IconOffsetX(5), m_IconOffsetY(8), m_TextOffsetX(0), m_TextOffsetY(18), m_pIcon(NULL)
		//{

		//}
		~SMyButton(){}

	protected://��Ϣ����SOUI�ؼ�����Ϣ�����WTL��MFC�����ƣ��������Ƶ�ӳ�����ͬ�������Ƶ���Ϣӳ���

		void OnMouseMove(UINT nFlags,CPoint pt);
		BOOL OnSetCursor(const CPoint &pt);
        void OnLButtonDown(UINT nFlags,CPoint pt);
	
		//BOOL OnNcHitTest(CPoint pt);
		//void OnPaint(IRenderTarget *pRT);
		//SOUI�ؼ���Ϣӳ���
		SOUI_MSG_MAP_BEGIN()	
			MSG_WM_MOUSEMOVE(OnMouseMove)
			//MSG_WM_NCHITTEST(OnNcHitTest)
			MSG_WM_LBUTTONDOWN(OnLButtonDown)
		SOUI_MSG_MAP_END()

		//	ISkinObj    *m_pIcon;	//ͼ��
		//SStringT    m_strText; //����
		//int			m_IconOffsetX, m_IconOffsetY, m_TextOffsetX, m_TextOffsetY;//��Ծ���λ��ƫ����
		//SOUI_ATTRS_BEGIN()
		//	ATTR_SKIN(L"icon", m_pIcon, TRUE)
		//	ATTR_STRINGT(L"text", m_strText, FALSE)
		//	SOUI_ATTRS_END()

	public:
		INT Oldx;
		INT Oldy;
	};
}