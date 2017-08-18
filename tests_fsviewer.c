#include "tests.h"


static MFSViewer fs; //button structure


static void  click(MButton* b) //b - button wich was clicked
{
}

void tests_fsviewer_init(MHost *h)
{
    m_create_fsviewer(&fs, //pointer to lable's structure
		      h->host, //parent container. We'll put lable to the same container, where is our button
		      mp_sall(0, 0, //position(x,y)
			      0, 0), //width, height
		      "select:",
		      0, 0,
		      MFSViewer_Viewer,
		      &ts_fsviewer,
		      &ts_fsviewer_item); //style
    fsviewer_open(&fs, "/home/lyra");
}
