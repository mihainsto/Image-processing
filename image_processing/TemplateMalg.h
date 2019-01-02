#pragma once
#pragma once
#ifndef TemplateMalg_H_   
#define TemplateMalg_H_
#include <stdlib.h>
#include <stdio.h>
typedef struct
{
	float corr;
	int top_i;
	int top_j;
	int number;
}detection;
typedef struct
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
}color;

void TM_grayscale(unsigned char* bitmap, int width, int height);
void template_matching(unsigned char* bitmap, int bitmap_width, int bitmap_height,float mincorr);
unsigned char* cut_template(unsigned char* bitmap, int bitmap_width, int template_width, int template_height, int top_i, int top_j);
void draw_rect(unsigned char* bitmap, int bitmap_width, int template_width, int template_height, int top_i, int top_j, color color);
void non_max(detection *dect_ar, int n, int template_width, int template_height);
void draw(detection *dect_ar, int k, unsigned char* bitmap, int bitmap_width, int bitmap_height, int template_width, int template_height);
#endif 