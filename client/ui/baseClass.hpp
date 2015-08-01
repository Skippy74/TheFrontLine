class TFL_RSC_ScrollBar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class TFL_RSC_ControlsGroup  
{
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	shadow = false;
	style = 16;
	
	class VScrollbar : TFL_RSC_ScrollBar {
		width = 0.021;
		autoScrollEnabled = 1;
	};
	
	class HScrollbar : TFL_RSC_ScrollBar {
		height = 0.028;
	};
	
	class Controls {};
};