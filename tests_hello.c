#include "tests.h"

MakiseStyle_Button ts_button =
{
    .font = &F_Default10x20,
    .bitmap_gap = 10,
    //bg       font     border   double_border
    .normal =  {MC_Black, MC_White, MC_Black, 0}, //normal
    .focused = {MC_White, MC_Black, MC_White, 0}, //focused
    .active =  {MC_Black, MC_White, MC_White, 0}, //active
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
static MLable lable; //lable structure


//event when button was clicked
static void  click(MButton* b) //b - button wich was clicked
{
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
}
