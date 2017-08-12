#include "tests_styles.h"

MakiseStyle_Button ts_button =
{
    &F_Arial24,
    //bg       font     border   double_border
    {MC_Black, MC_White, MC_White, 0},//normal
    {MC_White, MC_Green, MC_White, 0}, //focused
    {MC_Green, MC_White, MC_White, 0}, //active
};

MakiseStyle_Button ts_button_small =
{
    &F_Arial12,
     //bg       font     border   double_border
    {MC_Black, MC_White, MC_White, 0},//normal
    {MC_White, MC_Green, MC_White, 0}, //focused
    {MC_Green, MC_White, MC_White, 0}, //active
};

MakiseStyle ts_slider =
{
    MC_White,
    &F_Arial24,
    0,
    //bg       font     border   double_border
    {0, 0,  0, 0},  //unactive
    {MC_Black, MC_Gray, MC_Gray, 0},//normal
    {MC_Black, MC_White, MC_White, 0}, //focused
    {MC_Green, MC_White, MC_White, 0}, //active
};
MakiseStyle_Lable ts_lable =
{
    &F_Arial24,
    //font       bg     border   double_border
    MC_White, MC_Black, MC_Black, 0
};
MakiseStyle_Lable ts_lable_small =
{
    &F_Arial16,
    //font       bg     border   double_border
    MC_White, MC_Black, MC_Black, 0
};


MakiseStyle ts_textfield =
{
    MC_White,
    &F_Arial15,
    3,
    //bg       font     border   double_border
    {MC_Black, MC_White, MC_Gray, 0},  //unactive
    {MC_Black, MC_White, MC_Green, 0},  //unactive
    {0, 0, 0, 0}, //focused
    {0, 0, 0, 0}, //active
};

MakiseStyle_Canvas ts_canvas =
{
    //bg       border   double_border
    {MC_Black, MC_White, 0},  //normal
    {MC_Black, MC_White, 0},  //focused
};

MakiseStyle ts_tabs =
{
    MC_White,
    &F_Arial16,
    0,
    //bg       font     border   double_border
    {MC_Black, MC_Gray, MC_Gray,    0},  //unactive
    {MC_Gray, MC_White, MC_White, 0},  //normal
    {MC_Black, MC_Gray, MC_White,   0},  //focused
    {MC_Black, MC_Green, MC_White, 0},  //active
};

MakiseStyle_SList ts_slist_item =
{
    &F_Arial16,
    0,
    //bg       font     border   double_border
    {MC_Black, MC_Gray, MC_White, 0},  //normal
    {MC_White, MC_Green, MC_White,   0},  //focused
    {MC_Black, MC_White, MC_White, 0},  //active
};
MakiseStyle_SList ts_slist =
{
    &F_Arial16,
    0,
    //bg       font     border   double_border
    {MC_Black, MC_Gray, MC_Gray, 0},  //normal
    {MC_Black, MC_White, MC_White,   0},  //focused
    {MC_Black, MC_White, MC_White, 0},  //active
};
MakiseStyle_SList ts_slist_small =
{
    &F_Arial12,
    0,
    //bg       font     border   double_border
    {MC_Black, MC_Gray, MC_Gray, 0},  //normal
    {MC_Black, MC_White, MC_White,   0},  //focused
    {MC_Black, MC_White, MC_White, 0},  //active
};
MakiseStyle_SList ts_slist_item_big =
{
    &F_Arial24,
    0,
    //bg       font     border   double_border
    {MC_Transparent, MC_White, MC_White, 0},  //normal
    {MC_White, MC_Green, MC_White,   0},  //focused
    {MC_Transparent, MC_White, MC_White, 0},  //active
};

