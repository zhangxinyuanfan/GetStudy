/***
*ElemType.cpp - ElemType��ʵ��
*	
****/

#include <stdio.h>
#include "ElemType.h"

int compare(ElemType x, ElemType y)
{
	return(x-y);
}

void visit(ElemType e)
{
	printf("%c\n", e);
}