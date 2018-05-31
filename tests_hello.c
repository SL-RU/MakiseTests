#include "tests.h"

MakiseStyle_Button ts_button =
{
    .font = &F_Default10x20,
    .bitmap_gap = 10,
    .active_delay = 5,
    //          bg       font     border   double_border
    .normal =  {MC_Black, MC_White, MC_White, 2}, //normal
    .focused = {MC_Black, MC_White, MC_White, 6}, //focused
    .active =  {MC_Green, MC_Gray, MC_White, 2}, //active
};
MakiseStyle_Lable ts_lable =
{
    .font = &F_Default8x13,
    //font       bg     border   double_border
    .font_col = MC_White,
    .bg_color = MC_Black,
    .border_c = MC_Black,
    .double_border = 0,
    .scroll_speed = 100
};


static MButton button; //button structure
static MButton button1; //button structure
static MLable lable; //lable structure


//event when button was clicked
static void  click(MButton* b) //b - button wich was clicked
{
    return;
    //create lable
    m_create_lable(&lable, b->el.parent,
		   mp_rel(100, 150, 220, 30),
		   &ts_lable);
    m_lable_set_text(&lable, "Hello world!");

    //remove button from the container
    makise_g_cont_rem(&button.el);
    
}

void tests_hello_init(MHost *h)
{
    m_create_button(&button, &h->host,
		    mp_rel(110, 53, 85, 30),
		    &ts_button);
    m_button_set_click(&button, &click);
    m_button_set_text(&button, "Click!");

    m_create_button(&button1, &h->host,
		    mp_rel(110, 150, 85, 30),
		    &ts_button);
    m_button_set_click(&button1, &click);
    m_button_set_text(&button1, "Click!");
}
