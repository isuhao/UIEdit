//stamp:0e9053439c4be7d6
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				page_tree = _T("LAYOUT:page_tree");
				page_treeview = _T("LAYOUT:page_treeview");
				XML_dlg_pro = _T("LAYOUT:XML_dlg_pro");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * page_tree;
			const TCHAR * page_treeview;
			const TCHAR * XML_dlg_pro;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				traymenu_icons = _T("IMG:traymenu_icons");
			}
			const TCHAR * traymenu_icons;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _translator{
			public:
			_translator(){
				lang_cn = _T("translator:lang_cn");
			}
			const TCHAR * lang_cn;
		}translator;
		class _SMENU{
			public:
			_SMENU(){
				menu_tray = _T("SMENU:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENU;
		class _PNG{
			public:
			_PNG(){
				ID_PNG_MAIN_CENTER = _T("PNG:ID_PNG_MAIN_CENTER");
				ID_PNG_HOME_TIYAN = _T("PNG:ID_PNG_HOME_TIYAN");
				ID_PNG_SWITCH_BACK = _T("PNG:ID_PNG_SWITCH_BACK");
				ID_PNG_SWITCH_FORCE = _T("PNG:ID_PNG_SWITCH_FORCE");
				ID_PNG_HOME_NEW = _T("PNG:ID_PNG_HOME_NEW");
				ID_PNG_HOME_NEW_ICON = _T("PNG:ID_PNG_HOME_NEW_ICON");
				ID_PNG_HOME_EDIT_ICON = _T("PNG:ID_PNG_HOME_EDIT_ICON");
				ID_PNG_HOME_TREE = _T("PNG:ID_PNG_HOME_TREE");
				ID_ICON_MAIN = _T("PNG:ID_ICON_MAIN");
			}
			const TCHAR * ID_PNG_MAIN_CENTER;
			const TCHAR * ID_PNG_HOME_TIYAN;
			const TCHAR * ID_PNG_SWITCH_BACK;
			const TCHAR * ID_PNG_SWITCH_FORCE;
			const TCHAR * ID_PNG_HOME_NEW;
			const TCHAR * ID_PNG_HOME_NEW_ICON;
			const TCHAR * ID_PNG_HOME_EDIT_ICON;
			const TCHAR * ID_PNG_HOME_TREE;
			const TCHAR * ID_ICON_MAIN;
		}PNG;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"ani_test",65550},
		{L"btn_close",65537},
		{L"btn_edit",65542},
		{L"btn_input",65543},
		{L"btn_max",65538},
		{L"btn_min",65540},
		{L"btn_mytest",65545},
		{L"btn_new",65541},
		{L"btn_restore",65539},
		{L"btn_test",65549},
		{L"edit_input",65552},
		{L"main_icon",65536},
		{L"mytree",65546},
		{L"tgl_switch",65548},
		{L"tree_view_00",65547},
		{L"txt_red",65551},
		{L"wnd_layout",65544}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			ani_test = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_edit = namedXmlID[2].strName;
			btn_input = namedXmlID[3].strName;
			btn_max = namedXmlID[4].strName;
			btn_min = namedXmlID[5].strName;
			btn_mytest = namedXmlID[6].strName;
			btn_new = namedXmlID[7].strName;
			btn_restore = namedXmlID[8].strName;
			btn_test = namedXmlID[9].strName;
			edit_input = namedXmlID[10].strName;
			main_icon = namedXmlID[11].strName;
			mytree = namedXmlID[12].strName;
			tgl_switch = namedXmlID[13].strName;
			tree_view_00 = namedXmlID[14].strName;
			txt_red = namedXmlID[15].strName;
			wnd_layout = namedXmlID[16].strName;
		}
		 const wchar_t * ani_test;
		 const wchar_t * btn_close;
		 const wchar_t * btn_edit;
		 const wchar_t * btn_input;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_mytest;
		 const wchar_t * btn_new;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_test;
		 const wchar_t * edit_input;
		 const wchar_t * main_icon;
		 const wchar_t * mytree;
		 const wchar_t * tgl_switch;
		 const wchar_t * tree_view_00;
		 const wchar_t * txt_red;
		 const wchar_t * wnd_layout;
		}name;

		class _id{
		public:
		const static int ani_test	=	65550;
		const static int btn_close	=	65537;
		const static int btn_edit	=	65542;
		const static int btn_input	=	65543;
		const static int btn_max	=	65538;
		const static int btn_min	=	65540;
		const static int btn_mytest	=	65545;
		const static int btn_new	=	65541;
		const static int btn_restore	=	65539;
		const static int btn_test	=	65549;
		const static int edit_input	=	65552;
		const static int main_icon	=	65536;
		const static int mytree	=	65546;
		const static int tgl_switch	=	65548;
		const static int tree_view_00	=	65547;
		const static int txt_red	=	65551;
		const static int wnd_layout	=	65544;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
