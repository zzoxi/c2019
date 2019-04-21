#ifndef _STOCK_H
#define _STOCK_H

#define MAX 50
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<process.h>
typedef struct Goods
{ 
	char name[20];//货物名称 
	int quantity;//货物数量 
}goods;
extern goods all[MAX];
extern goods in[MAX];
extern goods out[MAX];
extern int m;
extern int correct;
void Read_file(void);
void Wirte_file(void);
void menu(void);
void Exit(void);
void Stock_in(void);
void Stock_out(void);

#endif
