#include "stdafx.h"
#include "SMyButton.h"

void SMyButton::OnMouseMove(UINT nFlags,CPoint pt)
{
	__super::OnMouseMove(nFlags, pt);
	CRect rcCenter;
	CRect rc;
	CRect rcClient = GetClientRect();
	rc.top = rcClient.bottom - 10;
	rc.bottom = rcClient.bottom;
	rc.left = rcClient.right - 10;
	rc.right = rcClient.right;

	rcClient.DeflateRect(10, 10, 10, 10);
	rcCenter = rcClient;

	if (rc.PtInRect(pt))
	{
		//HCURSOR hCursor=GETRESPROVIDER->LoadCursor(m_style.m_strCursor);cross
			HCURSOR hCursor=GETRESPROVIDER->LoadCursor(L"sizenwse");
		::SetCursor(hCursor);


		if (nFlags & MK_LBUTTON)
		{
			//btn_test->Move(10, 10, 100, 100);
			SwndLayout *layout = GetLayout();

			int x = pt.x - Oldx;
			int y = pt.y - Oldy;

			Oldx = pt.x;
			Oldy = pt.y;

			//layout->pos[2].pit = PIT_SIZE;
			layout->pos[2].nPos = layout->pos[2].nPos + x; 

			//layout->pos[3].pit = PIT_SIZE;
			layout->pos[3].nPos = layout->pos[3].nPos + y; 
			GetParent()->UpdateChildrenPosition();		
		}
	}
	else if (rcCenter.PtInRect(pt))
	{
		HCURSOR hCursor=GETRESPROVIDER->LoadCursor(L"sizeall");
		::SetCursor(hCursor);

		if (nFlags & MK_LBUTTON)
		{
			//btn_test->Move(10, 10, 100, 100);
			SwndLayout *layout = GetLayout();

			int x = pt.x - Oldx;
			int y = pt.y - Oldy;

			Oldx = pt.x;
			Oldy = pt.y;

			//layout->pos[2].pit = PIT_SIZE;
			layout->pos[0].nPos = layout->pos[0].nPos + x; 

			//layout->pos[3].pit = PIT_SIZE;
			layout->pos[1].nPos = layout->pos[1].nPos + y; 
			GetParent()->UpdateChildrenPosition();		
		}

	}
	else
	{
		//HCURSOR hCursor=GETRESPROVIDER->LoadCursor(m_style.m_strCursor);cross
		HCURSOR hCursor=GETRESPROVIDER->LoadCursor(m_style.m_strCursor);
		::SetCursor(hCursor);
	}


	wchar_t a[50];
	swprintf_s(a, L"%d,%d:%d,%d", pt.x, pt.y, GetClientRect().BottomRight().x, GetClientRect().BottomRight().y);
	SetWindowText(a);
}

void SMyButton::OnLButtonDown(UINT nFlags,CPoint pt)
{
   SWindow::OnLButtonDown(nFlags, pt);
   Oldx = pt.x;
   Oldy = pt.y;

}

 BOOL SMyButton::OnSetCursor(const CPoint &pt)
{
	//if(!m_rcText.PtInRect(pt)) return FALSE;
	//HCURSOR hCursor=GETRESPROVIDER->LoadCursor(m_style.m_strCursor);
	//::SetCursor(hCursor);
	//return TRUE;
	return TRUE;
}
//
//BOOL SMyButton::OnNcHitTest(CPoint pt)
//{
//
//
//	CRect rect;
//	GetClientRect(&rect);
//	int nFrame=10;
//	rect.DeflateRect(nFrame,nFrame);
//	if (!rect.PtInRect(pt))
//	{ 
//		//         if (pt.x<=nFrame && pt.y>=rect.bottom-nFrame)   
//		//         {
//		//             //            return HTBOTTOMLEFT;    //���½��϶���С
//		//         }
//		//         else if (pt.x<=nFrame && pt.y<=nFrame)
//		//         {   
//		//             //            return HTTOPLEFT;        //���Ͻ��϶���С
//		//         }
//		//         else if (pt.x>=rect.right-nFrame && pt.y<=nFrame)
//		//         {
//		//             //            return HTTOPRIGHT;        //���Ͻ��϶���С
//		//         }
//		if (pt.x>=rect.right-nFrame && pt.y>=rect.bottom-nFrame)
//		{
//			return HTBOTTOMRIGHT;    //���½��϶���С
//			//HitFlag=1;
//		}
//		//         else if (pt.x<=nFrame)
//		//         {
//		//             //            return HTLEFT;            //���������϶���С
//		//         }
//		//         else if (pt.y<=nFrame)
//		//         {
//		//            
//		//             //            return HTTOP;            //���������϶���С
//		//         }
//		else if (pt.y>=rect.bottom-nFrame)
//		{
//			//DWORD style = GetWindowLong(m_hWnd, GWL_STYLE);
//			//if ((style & WS_HSCROLL)==0)    //δ���ִ�ֱ������
//			//{
//				//HitFlag=1;
//				return HTBOTTOM;        //�����϶���С
//			//}   
//		}
//		else if (pt.x>=rect.right-nFrame)
//		{
//			//DWORD style = GetWindowLong(m_hWnd, GWL_STYLE);
//			//if ((style & WS_VSCROLL)==0)    //δ����ˮƽ������
//			//{
//				//HitFlag=1;
//				return HTRIGHT;        //�����϶���С
//			//}   
//		}
//	}
//	//     else
//	//     {
//	//         //        return HTCAPTION;    //�϶�λ��
//	//     }
//
//	return SWindow::OnNcHitTest(pt);
//}





 //SAutoLock lock(m_cs);
 //if(!_tcsicmp(pszCursorName,_T("arrow")))  //��ͨ��ͷ
	// return IDC_ARROW;
 //if(!_tcsicmp(pszCursorName,_T("ibeam"))) //������
	// return IDC_IBEAM;
 //if(!_tcsicmp(pszCursorName,_T("wait")))  
	// return IDC_WAIT;
 //if(!_tcsicmp(pszCursorName,_T("cross")))
	// return IDC_CROSS;
 //if(!_tcsicmp(pszCursorName,_T("uparrow")))  //���ϵļ�ͷ
	// return IDC_UPARROW;
 //if(!_tcsicmp(pszCursorName,_T("size")))  //������
	// return IDC_SIZE;
 //if(!_tcsicmp(pszCursorName,_T("sizenwse")))  //��������
	// return IDC_SIZENWSE;
 //if(!_tcsicmp(pszCursorName,_T("sizenesw"))) //��������
	// return IDC_SIZENESW;
 //if(!_tcsicmp(pszCursorName,_T("sizewe")))  //����
	// return IDC_SIZEWE;
 //if(!_tcsicmp(pszCursorName,_T("sizens")))  //�ϱ�
	// return IDC_SIZENS;
 //if(!_tcsicmp(pszCursorName,_T("sizeall")))  //�����ϱ�
	// return IDC_SIZEALL;
 //if(!_tcsicmp(pszCursorName,_T("no")))
	// return IDC_NO;
 //if(!_tcsicmp(pszCursorName,_T("hand")))
	// return IDC_HAND;
 //if(!_tcsicmp(pszCursorName,_T("help")))
	// return IDC_HELP;
 //return NULL;