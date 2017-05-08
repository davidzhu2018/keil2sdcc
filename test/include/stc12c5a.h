/*--------- 8051内核特殊功能寄存器 -------------*/
sfr ACC =0xE0 ;            	//累加器
sfr B = 0xF0; 			//B 寄存器
sfr PSW    = 0xD0;          	//程序状态字寄存器
	sbit CY    = PSW^7;      	//进位标志位
	sbit AC    = PSW^6;       	//辅助进位标志位
	sbit F0    = PSW^5;       	//用户标志位0
	sbit RS1   = PSW^4;       	//工作寄存器组选择控制位
	sbit RS0   = PSW^3;       	//工作寄存器组选择控制位
	sbit OV    = PSW^2;       	//溢出标志位
	sbit F1    = PSW^1;       	//用户标志位1
	sbit P     = PSW^0;       	//奇偶标志位
sfr SP    = 0x81;           	//堆栈指针寄存器
sfr DPL  = 0x82;           	//数据指针0低字节
sfr DPH  = 0x83;           	//数据指针0高字节
/*------------ 系统管理特殊功能寄存器 -------------*/
sfr PCON  = 0x87;          	//电源控制寄存器
sfr AUXR = 0x8E;             	//辅助寄存器
sfr AUXR1 = 0xA2;            	//辅助寄存器1
sfr WAKE_CLKO = 0x8F;       	//时钟输出和唤醒控制寄存器
sfr CLK_DIV  = 0x97;         	//时钟分频控制寄存器
sfr BUS_SPEED = 0xA1;       	//总线速度控制寄存器
/*----------- 中断控制特殊功能寄存器 --------------*/
sfr IE     = 0xA8;          	//中断允许寄存器
	sbit EA    = IE^7; 		//总中断允许位 
	sbit ELVD  = IE^6;     	    	//低电压检测中断控制位
	sbit EADC  = IE^5;     	    	//ADC中断允许控制位
	sbit ES    = IE^4;        	//串口1中断允许位
	sbit ET1   = IE^3;        	//定时器1溢出中断允许位
	sbit EX1   = IE^2;        	//外部中断1允许位
	sbit ET0   = IE^1;        	//定时器0溢出中断允许位
	sbit EX0   = IE^0;        	//外部中断0允许位
sfr IE2  = 0xAF;        	//中断允许寄存器2
sfr IP     = 0xB8;         	//中断优先级寄存器
	sbit PPCA  = IP^7; 	       	// PCA中断优先级控制位
	sbit PLVD  = IP^6;           	//低电压检测中断优先级控制位
	sbit PADC  = IP^5;           	//ADC中断优先级控制位
	sbit PS    = IP^4;        	//串口1中断优先级控制位
	sbit PT1   = IP^3;        	//定时器1中断优先级控制位
	sbit PX1   = IP^2;        	//外部中断1优先级控制位
	sbit PT0   = IP^1;        	//定时器0中断优先级控制位
	sbit PX0   = IP^0;        	//外部中断0优先级控制位
sfr IPH  = 0xB7;             	//中断优先级高位寄存器
sfr IP2  = 0xB5;             	//第二中断优先级寄存器低字节
sfr IPH2 = 0xB6;             	//第二中断优先级寄存器高字节
/*--------------- I/O 口特殊功能寄存器 -------------------*/
sfr P0    = 0x80;         	//P0口寄存器
sfr P0M1  = 0x93;            	//P0口工作模式寄存器1
sfr P0M0  = 0x94;            	//P0口工作模式寄存器0
sfr P1    = 0x90;           	//P1口寄存器
sfr P1M1  = 0x91;            	//P1口工作模式寄存器1
sfr P1M0  = 0x92;            	//P1口工作模式寄存器0
sfr P1ASF = 0x9D;            	//P1口模拟量功能设置寄存器
sfr P2     = 0xA0;          	//P2口寄存器
sfr P2M1  = 0x95;            	//P2口工作模式寄存器1
sfr P2M0  = 0x96;            	//P2口工作模式寄存器0
sfr P3     = 0xB0;          	//P3口寄存器
	sbit T1    = P3^5;      	//定时器1外部输入
	sbit T0    = P3^4;        	//定时器0外部输入
	sbit INT1  = P3^3;        	//外部中断1
	sbit INT0  = P3^2;        	//外部中断0
	sbit TXD   = P3^1;        	//串行输入通道
	sbit RXD   = P3^0;        	//串行输出通道
sfr P3M1  = 0xB1;            	//P3口工作模式寄存器1
sfr P3M0  = 0xB2;            	//P3口工作模式寄存器0
sfr P4   = 0xC0;              	//P4口寄存器
sfr P4M1  = 0xB3;            	//P4口工作模式寄存器1
sfr P4M0  = 0xB4;            	//P4口工作模式寄存器0
sfr P4SW = 0xBB;             	//P4口功能切换寄存器
sfr P5   = 0xC8;              	//P5口（只有P5.3  P5.2  P5.1  P5.0）
sfr P5M1 = 0xC9;              	//P5口工作模式寄存器1
sfr P5M0 = 0xCA;             	//P5口工作模式寄存器0.
/*----------------- 定时器特殊功能寄存器 -----------------*/
sfr TCON  = 0x88;		//定时/计数控制寄存器
	sbit TF1   = TCON^7;		//定时器1溢出中断标志
	sbit TR1   = TCON^6;		//定时器1运行控制位
	sbit TF0   = TCON^5;		//定时器0溢出中断标志
	sbit TR0   = TCON^4;		//定时器0运行控制位
	sbit IE1   = TCON^3;		//外部中断1请求标志
	sbit IT1   = TCON^2;		//选择外部中断请求1为边沿触发方式的控制位
	sbit IE0   = TCON^1;   		//外部中断0请求标志
	sbit IT0   = TCON^0;   		//选择外部中断请求0为边沿触发方式的控制位
sfr TMOD  = 0x89;           	//定时/计数模式控制寄存器
sfr TL0   = 0x8A;           	//定时/计数器0低字节
sfr TH0   = 0x8C;           	//定时/计数器0高字节
sfr TL1   = 0x8B;           	//定时/计数器1低字节
sfr TH1   = 0x8D;           	//定时/计数器1高字节
/*-------------- 串行口特殊功能寄存器 ------------------*/
sfr SCON = 0x98;           	//串行口控制寄存器
	sbit SM0   = SCON^7; 	    	//串行口工作方式设定控制位0（与FE功能复用）
	sbit FE   = SCON^7;
	sbit SM1   = SCON^6;   	    	//串行口工作方式设定控制位1
	sbit SM2   = SCON^5;   	    	//UART的SM2设定
	sbit REN   = SCON^4;   	    	//接收允许位
	sbit TB8   = SCON^3;   	    	//发送数据的第九位
	sbit RB8   = SCON^2;   	    	//接收数据的第九位
	sbit TI    = SCON^1;   	    	//发送中断标志
	sbit RI    = SCON^0;   	    	//接收中断标志
sfr SBUF  = 0x99;           	//串口数据缓冲器
sfr SADEN = 0xB9;           	//从机地址掩码寄存器
sfr SADDR = 0xA9;           	//从机地址寄存器
sfr S2CON = 0x9A;           	//串行口2控制寄存器
sfr S2BUF = 0x9B;           	//串行口2数据缓冲器
sfr BRT = 0x9C;             	//独立波特率定时器
/*---------------- 看门狗定时器寄存器 ------------------*/
sfr  WDT_CONTR = 0xC1; 		//看门狗定时器控制寄存器
/*---------------- PCA 寄存器 -----------------*/
sfr CCON   = 0xD8;    			//PCA控制寄存器
	sbit CF    = CCON^7;    	//PCA计数器溢出(CH,CL由FFFFH变为0000H)标志
	sbit CR    = CCON^6;    	//PCA计数器计数允许控制位
	sbit CCF1  = CCON^1;    	//PCA模块1中断标志
	sbit CCF0  = CCON^0;    	//PCA模块0中断标志
sfr CMOD   = 0xD9;    		//PCA工作模式寄存器
sfr CL     = 0xE9;      	//PCA计数器低8位
sfr CH     = 0xF9;      	//PCA计数器高8位
sfr CCAPM0 = 0xDA;    		//PAC模块0的工作模式寄存器
sfr CCAPM1 = 0xDB;    		//PAC模块1的工作模式寄存器
sfr CCAP0L = 0xEA;     		//PAC模块0捕捉/比较寄存器低8位
sfr CCAP0H = 0xFA;     		//PAC模块0捕捉/比较寄存器高8位
sfr CCAP1L = 0xEB;     		//PAC模块1捕捉/比较寄存器低8位
sfr CCAP1H = 0xFB;     		//PAC模块1捕捉/比较寄存器高8位
sfr PCA_PWM0 = 0xF2;   		//PCA模块0 PWM寄存器
sfr PCA_PWM1 = 0xF3;   		//PCA模块1 PWM寄存器
/*----------------- ADC 寄存器 -----------------*/
sfr ADC_CONTR  = 0xBC;    	//ADC控制寄存器, 本寄存器不支持位操作
sfr ADC_RES   = 0xBD;     	//ADC转换结果高8位寄存器
sfr ADC_RESL  = 0xBE;     	//ADC转换结果低2位寄存器
/*---------------- SPI 寄存器 --------------------*/
sfr SPSTAT  = 0xCD;        	//SPI状态寄存器,本寄存器不支持位操作
sfr SPCTL   = 0xCE;        	//SPI控制寄存器
sfr SPDAT   = 0xCF;        	//SPI数据寄存器
/*----------------- ISP_IAP_EEPROM 寄存器 ------------------*/
sfr IAP_DATA  = 0xC2;      	//ISP/IAP Flash数据寄存器
sfr IAP_ADDRH = 0xC3;     	//ISP/IAP Flash地址高字节
sfr IAP_ADDRL = 0xC4;     	//ISP/IAP Flash地址低字节
sfr IAP_CMD   = 0xC5;     	//ISP/IAP Flash命令寄存器
sfr IAP_TRIG  = 0xC6;      	//ISP/IAP Flash命令触发器
sfr IAP_CONTR = 0xC7;     	//ISP/IAP控制寄存器