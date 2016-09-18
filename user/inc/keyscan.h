/*******************************************************************************
  Copyright (C),  2010,  712.Co., Ltd.
  File name:	interfunc.h
  Author: 李斌      Version: V1.00       Date: 2012.03.22 
  Description:  
  				主要功能： 
				1. 定义相关宏定义
				2. 变量声明
				3. 函数声明
				4. 定义结构体类型
				
  Others:         // 其它内容的说明
  Function List:  // 主要函数列表，每条记录应包括函数名及功能简要说明
  History:        // 修改历史记录列表，每条修改记录应包括修改日期、修改
                  // 者及修改内容简述  
    1. Date:
       Author:
       Modification:
*******************************************************************************/
#ifndef _KEYSCAN
#define _KEYSCAN
#define SYS_STATUE_NORMAL 0
#define SYS_STATUE_EMERGENT 1
void EMERGENCY_keyscan(void);
void Init_keyscan(void);
void POWER_keyscan(void);

extern U8 EMERGENCY_KeyStateFlg;

#endif
