	CA_END,					 
};
 
 
 
enum {
	CMB_ACT,				 
	CMB_BAK,				 
	CMB_DER,				 
	CMB_JUMP,				 
	CMB_NOW,				 
	CMB_TRW,				 
	CMB_GRSP,				 
	CMB_DOWN,				 

	CMB_WAIT,				 
	CMB_RNDWT,				 
	CMB_LVLWT,				 
	CMB_DELAY,				 
	CMB_RNDDELAY,			 

	CMB_KEEP,				 
	CMB_RNDKEEP,			 
	CMB_LVLKEEP,			 
	CMB_KEEP_ESTA,			 
	CMB_KEEP_EATK,			 

	CMB_ATIME,				 
	CMB_ACTSTA,				 
	CMB_ACTCODE,			 

	CMB_CHK_BLW,			 
	CMB_CHK_HIT,			 
	CMB_CHK_NOHIT,			 
	CMB_CHK_EATK,			 

	CMB_BRA,				 
	CMB_BRA_BLW,			 
	CMB_BRA_HIT,			 
	CMB_BRA_NOHIT,			 
	CMB_BRA_ACODE,			 

	CMB_GROUP,				 
	CMB_DER_GROUP,			 
	CMB_ORDER,				 

	CMB_CALL,				 

	CMB_END,				 
};
 
 
 
enum {
	COMCND_OFFENSE,						 
	COMCND_DEFENSE,						 

	COMCND_MAX							 
};



 
 
 
enum {
	ATYPE_BLW_HI,						 
	ATYPE_BLW_LW,						 
	ATYPE_TRW,							 
	ATYPE_HLD,							 

	ATYPE_MAX							 
};



 
 
 
enum {
	BLWHIT_NON,							 
	BLWHIT_HIT,							 
	BLWHIT_GRD,							 
	BLWHIT_DH_B,						 
};
 
 
 

# 217 "act/comthink.h"

 
 
 
 
typedef	struct {
	UINT8		per;					 
	UINT8		actreq;					 
	UINT8		para;					 
	UINT8		lvl;					 
} COMACT;
 
 
 
typedef struct {
	UINT8		now_act;				 
	UINT8		derv_act;				 
	UINT8		slip_act;				 
} DERVACT;
 
 
 
typedef struct {
	UINT8		act_time;			 
	UINT8		downa_act;			 
} DOWNACT;
 
 
 
struct	COMTRW {
	UINT8	throw_success;				 
	UINT8	throw_failure;				 
};






 
 
 
typedef	struct {
	UINT8		cmb_cmd;				 
	UINT8		cmb_act;				 
} COMBODAT;
 
 
 
typedef	struct {
	UINT8		of_wait_min, of_wait_lmt;		 
	UINT8		df_wait_min, df_wait_lmt;		 
	UINT8		der_wait_min, der_wait_lmt;		 
	UINT8		move_per;						 
	UINT8		blow_cont;						 
	UINT8		caution_per;					 
	UINT8		react_min;						 
	UINT8		react_up;						 
	UINT8		df_react_min, df_react_lmt;		 
	UINT8		derv_per;						 
	UINT8		slip_per;						 
	UINT8		throw_slip_per;					 
	UINT8		stgg_rcv_spd;					 
	UINT8		down_rcv_spd;					 
	UINT8		getup_per;						 
	UINT8		getup_der_per;					 
	UINT8		excombo_per;					 
	UINT8		downa_per;						 
	UINT8		ukemi_per_min;					 
	UINT8		ukemi_per_cng;					 
} COMLVL;
 
 
 
typedef struct {
	FIXED 	range_short;						 
	FIXED 	range_middle;						 
	FIXED 	range_long;							 

	FIXED 	excombo_hi;							 
	FIXED 	excombo_md;							 

	UINT8	of_per[ATYPE_MAX];					 
	UINT8	df_per[ATYPE_MAX];					 

	UINT8	mid_k_grsp;							 
} COMPSNL;
 
 
 
typedef struct {
	UINT8		per[ATYPE_MAX];					 
	UINT16		per_total;						 
} COMACTPER;
 
 
 
typedef struct {
	ADRSINT		act_dat;
	COMACT		**group_dat;
	COMBODAT	**combo_dat;
	COMPSNL		*psnl_dat;
} COMDAT;
 
 
 
typedef	struct {
	SINT16		act_wait;						 

	UINT8		der_wait_flg;					 
	SINT16		der_wait;						 

	UINT8		combo_flg;						 
	SINT16		combo_wait;						 
	COMBODAT	*combo_adrs;					 
	COMBODAT	*combo_ret_adrs;				 

	UINT8		act_flg;						 
	UINT8		downa_flg;						 
	UINT8		ukemi_flg;						 
	UINT8		caution_flg;					 
	UINT8		counter_flg;					 
	UINT8		start_flg;						 

	UINT8		now_cond;						 
	UINT8		now_type;						 

	UINT8		blow_flg;						 
	UINT8		blow_hi;						 
	UINT8		blow_hit;						 
	UINT8		blow_chk;						 

	UINT8		react_type;						 
	UINT8		react_per;						 
	UINT8		old_react_type;					 
	UINT8		old_react_per;					 

	UINT8		actsta_old;						 

	UINT8		vs_getup_hi;					 

	COMACTPER	actper_of;						 
	COMACTPER	actper_df;						 

	UINT8		order_num[32 ];				 
	UINT8		order_cnt[32 ];				 

	COMDAT		*data;							 
} COMCTRL;



# 30 "act/act.c" 2

# 1 "act/enmlevel.dat" 1
 

 
 
 
 
COMLVL com_level_normal[] = {
 
	{     
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   30 ), ((  120 ) - (   30 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		0x10,			 
		0x00,			 
		0x00,			 
		0x10, 0x08,		 
		0x00, 0x00,		 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x04,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x00,		 
	},

 
	{     
		(   10 ), ((   30 ) - (   10 )) ,	 
		(   30 ), ((  100 ) - (   30 )) ,	 
		(   30 ), ((   50 ) - (   30 )) ,	 
		0x10,			 
		0x10,			 
		0x08,			 
		0x10, 0x10,		 
		0x00, 0x00,		 
		0x08,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x08,			 
		0x08,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x10,		 
	},

 
	{     
		(    8 ), ((   20 ) - (    8 )) ,	 
		(   30 ), ((   80 ) - (   30 )) ,	 
		(   25 ), ((   50 ) - (   25 )) ,	 
		0x10,			 
		0x30,			 
		0x10,			 
		0x20, 0x10,		 
		0x00, 0x00,		 
		0x10,			 
		0x08,			 
		0x08,			 
		0x04,			 
		0x10,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x04,			 
		0x10, 0x30,		 
	},

 
	{     
		(    5 ), ((   15 ) - (    5 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   20 ), ((   40 ) - (   20 )) ,	 
		0x20,			 
		0x50,			 
		0x20,			 
		0x30, 0x10,		 
		0x00, 0x00,		 
		0x20,			 
		0x10,			 
		0x10,			 
		0x08,			 
		0x10,			 
		0x18,			 
		0x10,			 
		0x10,			 
		0x08,			 
		0x20, 0x50,		 
	},

 
	{     
		(    3 ), ((   10 ) - (    3 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   15 ), ((   35 ) - (   15 )) ,	 
		0x40,			 
		0x70,			 
		0x40,			 
		0x50, 0x18,		 
		0x00, 0x00,		 
		0x60,			 
		0x20,			 
		0x18,			 
		0x10,			 
		0x18,			 
		0x20,			 
		0x18,			 
		0x18,			 
		0x10,			 
		0x20, 0x60,		 
	},

 
	{     
		(    2 ), ((    8 ) - (    2 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   15 ), ((   30 ) - (   15 )) ,	 
		0x50,			 
		0x90,			 
		0x60,			 
		0x60, 0x20,		 
		0x00, 0x00,		 
		0x80,			 
		0x30,			 
		0x20,			 
		0x18,			 
		0x20,			 
		0x30,			 
		0x20,			 
		0x20,			 
		0x20,			 
		0x30, 0x70,		 
	},

 
	{     
		(    1 ), ((    7 ) - (    1 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   10 ), ((   20 ) - (   10 )) ,	 
		0x70,			 
		0xC0,			 
		0x80,			 
		0x70, 0x20,		 
		0x00, 0x00,		 
		0xA0,			 
		0x60,			 
		0x30,			 
		0x20,			 
		0x28,			 
		0x80,			 
		0x30,			 
		0xA0,			 
		0x40,			 
		0x30, 0x80,		 
	},

 
	{     
		(    1 ), ((    6 ) - (    1 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    5 ), ((   15 ) - (    5 )) ,	 
		0x80,			 
		0xE0,			 
		0xC0,			 
		0x80, 0x30,		 
		0x00, 0x00,		 
		0xC0,			 
		0xC0,			 
		0x40,			 
		0x30,			 
		0x30,			 
		0xD0,			 
		0x40,			 
		0xF0,			 
		0x80,			 
		0x40, 0x90,		 
	},

 
	{     
		(    0 ), ((    5 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    5 ), ((   15 ) - (    5 )) ,	 
		0x80,			 
		0xF0,			 
		0xC0,			 
		0x80, 0x40,		 
		0x00, 0x00,		 
		0xE0,			 
		0xE0,			 
		0x60,			 
		0x30,			 
		0x38,			 
		0xD0,			 
		0x40,			 
		0xFF,			 
		0xC0,			 
		0x40, 0xA0,		 
	},
};
 
 
 
COMLVL com_level_easy[] = {
 
	{     
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   30 ), ((  120 ) - (   30 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		0x10,			 
		0x00,			 
		0x00,			 
		0x08, 0x04,		 
		0x00, 0x00,		 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x04,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x00,		 
	},

 
	{     
		(   15 ), ((   40 ) - (   15 )) ,	 
		(   30 ), ((  100 ) - (   30 )) ,	 
		(   30 ), ((   50 ) - (   30 )) ,	 
		0x10,			 
		0x10,			 
		0x08,			 
		0x10, 0x08,		 
		0x00, 0x00,		 
		0x08,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x08,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x10,		 
	},

 
	{     
		(   15 ), ((   30 ) - (   15 )) ,	 
		(   30 ), ((   80 ) - (   30 )) ,	 
		(   30 ), ((   50 ) - (   30 )) ,	 
		0x10,			 
		0x20,			 
		0x10,			 
		0x20, 0x08,		 
		0x00, 0x00,		 
		0x10,			 
		0x08,			 
		0x00,			 
		0x00,			 
		0x08,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x04,			 
		0x00, 0x20,		 
	},

 
	{     
		(   15 ), ((   25 ) - (   15 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   25 ), ((   40 ) - (   25 )) ,	 
		0x20,			 
		0x30,			 
		0x20,			 
		0x20, 0x10,		 
		0x00, 0x00,		 
		0x18,			 
		0x08,			 
		0x08,			 
		0x04,			 
		0x08,			 
		0x18,			 
		0x08,			 
		0x10,			 
		0x08,			 
		0x08, 0x40,		 
	},

 
	{     
		(   13 ), ((   23 ) - (   13 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   25 ), ((   40 ) - (   25 )) ,	 
		0x40,			 
		0x40,			 
		0x40,			 
		0x20, 0x10,		 
		0x00, 0x00,		 
		0x20,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x10,			 
		0x20,			 
		0x10,			 
		0x18,			 
		0x10,			 
		0x10, 0x50,		 
	},

 
	{     
		(   11 ), ((   21 ) - (   11 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   20 ), ((   35 ) - (   20 )) ,	 
		0x50,			 
		0x50,			 
		0x60,			 
		0x30, 0x18,		 
		0x00, 0x00,		 
		0x30,			 
		0x18,			 
		0x10,			 
		0x10,			 
		0x18,			 
		0x30,			 
		0x18,			 
		0x20,			 
		0x20,			 
		0x18, 0x60,		 
	},

 
	{     
		(    9 ), ((   19 ) - (    9 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   20 ), ((   35 ) - (   20 )) ,	 
		0x70,			 
		0x60,			 
		0x80,			 
		0x30, 0x18,		 
		0x00, 0x00,		 
		0x40,			 
		0x20,			 
		0x18,			 
		0x18,			 
		0x20,			 
		0x80,			 
		0x20,			 
		0x30,			 
		0x40,			 
		0x20, 0x70,		 
	},

 
	{     
		(    7 ), ((   17 ) - (    7 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(   15 ), ((   30 ) - (   15 )) ,	 
		0x80,			 
		0x70,			 
		0xC0,			 
		0x30, 0x20,		 
		0x00, 0x00,		 
		0x60,			 
		0x30,			 
		0x20,			 
		0x20,			 
		0x28,			 
		0xD0,			 
		0x28,			 
		0x40,			 
		0x60,			 
		0x28, 0x80,		 
	},

 
	{     
		(    5 ), ((   15 ) - (    5 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(   15 ), ((   30 ) - (   15 )) ,	 
		0x80,			 
		0x80,			 
		0xC0,			 
		0x40, 0x20,		 
		0x00, 0x00,		 
		0x80,			 
		0x50,			 
		0x28,			 
		0x30,			 
		0x30,			 
		0xD0,			 
		0x30,			 
		0x60,			 
		0x80,			 
		0x30, 0x90,		 
	},
};
 
 
 
COMLVL com_level_hard[] = {
 
	{     
		(   25 ), ((   50 ) - (   25 )) ,	 
		(   30 ), ((  120 ) - (   30 )) ,	 
		(   30 ), ((   55 ) - (   30 )) ,	 
		0x10,			 
		0x00,			 
		0x00,			 
		0x10, 0x10,		 
		0x10, 0x00,		 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x04,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x00,		 
	},

 
	{     
		(    9 ), ((   25 ) - (    9 )) ,	 
		(   30 ), ((  100 ) - (   30 )) ,	 
		(   28 ), ((   45 ) - (   28 )) ,	 
		0x10,			 
		0x10,			 
		0x08,			 
		0x20, 0x10,		 
		0x10, 0x08,		 
		0x08,			 
		0x08,			 
		0x00,			 
		0x04,			 
		0x08,			 
		0x08,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x00, 0x10,		 
	},

 
	{     
		(    7 ), ((   19 ) - (    7 )) ,	 
		(   30 ), ((   80 ) - (   30 )) ,	 
		(   23 ), ((   40 ) - (   23 )) ,	 
		0x10,			 
		0x30,			 
		0x10,			 
		0x30, 0x18,		 
		0x10, 0x10,		 
		0x10,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x10,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x08,			 
		0x10, 0x30,		 
	},

 
	{     
		(    4 ), ((   13 ) - (    4 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   18 ), ((   35 ) - (   18 )) ,	 
		0x20,			 
		0x60,			 
		0x20,			 
		0x40, 0x18,		 
		0x10, 0x18,		 
		0x20,			 
		0x18,			 
		0x10,			 
		0x10,			 
		0x18,			 
		0x18,			 
		0x10,			 
		0x18,			 
		0x10,			 
		0x20, 0x50,		 
	},

 
	{     
		(    2 ), ((    9 ) - (    2 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   14 ), ((   30 ) - (   14 )) ,	 
		0x40,			 
		0x80,			 
		0x40,			 
		0x50, 0x20,		 
		0x10, 0x20,		 
		0x60,			 
		0x20,			 
		0x20,			 
		0x18,			 
		0x20,			 
		0x20,			 
		0x20,			 
		0x30,			 
		0x18,			 
		0x20, 0x60,		 
	},

 
	{     
		(    1 ), ((    7 ) - (    1 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   13 ), ((   25 ) - (   13 )) ,	 
		0x50,			 
		0xA0,			 
		0x60,			 
		0x60, 0x20,		 
		0x10, 0x28,		 
		0x80,			 
		0x30,			 
		0x30,			 
		0x20,			 
		0x28,			 
		0x30,			 
		0x28,			 
		0x40,			 
		0x28,			 
		0x30, 0x70,		 
	},

 
	{     
		(    1 ), ((    5 ) - (    1 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(    7 ), ((   18 ) - (    7 )) ,	 
		0x70,			 
		0xD0,			 
		0x80,			 
		0x70, 0x20,		 
		0x10, 0x30,		 
		0xA0,			 
		0x60,			 
		0x50,			 
		0x28,			 
		0x30,			 
		0x80,			 
		0x30,			 
		0xA0,			 
		0x50,			 
		0x30, 0x80,		 
	},

 
	{     
		(    0 ), ((    4 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    5 ), ((   13 ) - (    5 )) ,	 
		0x80,			 
		0xF0,			 
		0xC0,			 
		0x80, 0x30,		 
		0x10, 0x38,		 
		0xC0,			 
		0xD0,			 
		0x60,			 
		0x30,			 
		0x38,			 
		0xD0,			 
		0x40,			 
		0xFF,			 
		0xA0,			 
		0x40, 0x90,		 
	},

 
	{     
		(    0 ), ((    3 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    4 ), ((   12 ) - (    4 )) ,	 
		0x80,			 
		0xFF,			 
		0xC0,			 
		0x80, 0x40,		 
		0x10, 0x40,		 
		0xE0,			 
		0xF0,			 
		0x70,			 
		0x30,			 
		0x40,			 
		0xD0,			 
		0x50,			 
		0xFF,			 
		0xC0,			 
		0x40, 0xA0,		 
	},
};
 
 
 
COMLVL com_level_veryhard[] = {
 
	{     
		(   10 ), ((   25 ) - (   10 )) ,	 
		(   30 ), ((  120 ) - (   30 )) ,	 
		(   30 ), ((   50 ) - (   30 )) ,	 
		0x10,			 
		0x10,			 
		0x00,			 
		0x10, 0x10,		 
		0x20, 0x00,		 
		0x10,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x08,			 
		0x04,			 
		0x00,			 
		0x00,			 
		0x04,			 
		0x00, 0x00,		 
	},

 
	{     
		(    3 ), ((   16 ) - (    3 )) ,	 
		(   30 ), ((  100 ) - (   30 )) ,	 
		(   25 ), ((   40 ) - (   25 )) ,	 
		0x10,			 
		0x10,			 
		0x08,			 
		0x20, 0x10,		 
		0x20, 0x08,		 
		0x20,			 
		0x08,			 
		0x08,			 
		0x04,			 
		0x08,			 
		0x08,			 
		0x08,			 
		0x04,			 
		0x08,			 
		0x00, 0x10,		 
	},

 
	{     
		(    1 ), ((   13 ) - (    1 )) ,	 
		(   30 ), ((   80 ) - (   30 )) ,	 
		(   20 ), ((   35 ) - (   20 )) ,	 
		0x10,			 
		0x30,			 
		0x10,			 
		0x30, 0x18,		 
		0x20, 0x10,		 
		0x30,			 
		0x10,			 
		0x10,			 
		0x08,			 
		0x10,			 
		0x10,			 
		0x10,			 
		0x10,			 
		0x10,			 
		0x10, 0x30,		 
	},

 
	{     
		(    1 ), ((   10 ) - (    1 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   16 ), ((   30 ) - (   16 )) ,	 
		0x20,			 
		0x60,			 
		0x20,			 
		0x40, 0x18,		 
		0x20, 0x18,		 
		0x50,			 
		0x18,			 
		0x18,			 
		0x10,			 
		0x18,			 
		0x18,			 
		0x18,			 
		0x20,			 
		0x18,			 
		0x20, 0x50,		 
	},

 
	{     
		(    0 ), ((    7 ) - (    0 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   12 ), ((   25 ) - (   12 )) ,	 
		0x40,			 
		0x80,			 
		0x40,			 
		0x50, 0x20,		 
		0x20, 0x20,		 
		0x80,			 
		0x20,			 
		0x20,			 
		0x18,			 
		0x20,			 
		0x20,			 
		0x20,			 
		0x38,			 
		0x20,			 
		0x20, 0x60,		 
	},

 
	{     
		(    0 ), ((    5 ) - (    0 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(    8 ), ((   20 ) - (    8 )) ,	 
		0x50,			 
		0xA0,			 
		0x60,			 
		0x60, 0x20,		 
		0x20, 0x28,		 
		0xA0,			 
		0x40,			 
		0x30,			 
		0x20,			 
		0x28,			 
		0x30,			 
		0x30,			 
		0x50,			 
		0x30,			 
		0x30, 0x80,		 
	},

 
	{     
		(    0 ), ((    3 ) - (    0 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(    5 ), ((   15 ) - (    5 )) ,	 
		0x70,			 
		0xD0,			 
		0x80,			 
		0x70, 0x20,		 
		0x20, 0x30,		 
		0xC0,			 
		0x70,			 
		0x50,			 
		0x28,			 
		0x30,			 
		0x80,			 
		0x40,			 
		0xA0,			 
		0x60,			 
		0x40, 0x90,		 
	},

 
	{     
		(    0 ), ((    2 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    3 ), ((   12 ) - (    3 )) ,	 
		0x80,			 
		0xFF,			 
		0xC0,			 
		0x80, 0x30,		 
		0x20, 0x38,		 
		0xE0,			 
		0xE0,			 
		0x60,			 
		0x30,			 
		0x38,			 
		0xD0,			 
		0x50,			 
		0xFF,			 
		0xC0,			 
		0x50, 0x90,		 
	},

 
	{     
		(    0 ), ((    1 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    2 ), ((   10 ) - (    2 )) ,	 
		0x80,			 
		0xFF,			 
		0xC0,			 
		0x80, 0x40,		 
		0x20, 0x40,		 
		0xF0,			 
		0xF0,			 
		0x70,			 
		0x30,			 
		0x40,			 
		0xD0,			 
		0x50,			 
		0xFF,			 
		0xC0,			 
		0x60, 0x90,		 
	},
};

# 1017 "act/enmlevel.dat"

 
 
 
COMLVL com_level_practice[] = {
 
 
 
	{     
		(   15 ), ((   60 ) - (   15 )) ,	 
		(   30 ), ((  120 ) - (   30 )) ,	 
		(    5 ), ((   15 ) - (    5 )) ,	 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x00,		 
		0x00, 0x00,		 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x00, 0x00,		 
	},
 
 
 
	{     
		(   15 ), ((   60 ) - (   15 )) ,	 
		(   30 ), ((  100 ) - (   30 )) ,	 
		(   10 ), ((   20 ) - (   10 )) ,	 
		0x20,			 
		0x50,			 
		0x00,			 
		0x00, 0x00,		 
		0x00, 0x00,		 
		0xFF,			 
		0x50,			 
		0x20,			 
		0x08,			 
		0x08,			 
		0x08,			 
		0x00,			 
		0x00,			 
		0x00,			 
		0x30, 0x60,		 
	},
 
 
 
	{     
		(    8 ), ((   20 ) - (    8 )) ,	 
		(   30 ), ((   80 ) - (   30 )) ,	 
		(   20 ), ((   40 ) - (   20 )) ,	 
		0x10,			 
		0x20,			 
		0x10,			 
		0x20, 0x10,		 
		0x00, 0x00,		 
		0x10,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x08,			 
		0x10,			 
		0x08,			 
		0x08,			 
		0x08,			 
		0x08, 0x20,		 
	},
 
 
 
	{     
		(    5 ), ((   15 ) - (    5 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   15 ), ((   30 ) - (   15 )) ,	 
		0x20,			 
		0x40,			 
		0x20,			 
		0x30, 0x10,		 
		0x00, 0x00,		 
		0x18,			 
		0x18,			 
		0x10,			 
		0x10,			 
		0x10,			 
		0x18,			 
		0x10,			 
		0x10,			 
		0x10,			 
		0x10, 0x30,		 
	},
 
 
 
	{     
		(    3 ), ((   10 ) - (    3 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(   10 ), ((   30 ) - (   10 )) ,	 
		0x40,			 
		0x80,			 
		0x40,			 
		0x40, 0x10,		 
		0x00, 0x00,		 
		0x20,			 
		0x20,			 
		0x18,			 
		0x18,			 
		0x18,			 
		0x20,			 
		0x18,			 
		0x18,			 
		0x20,			 
		0x20, 0x40,		 
	},
 
 
 
	{     
		(    0 ), ((    5 ) - (    0 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(    5 ), ((   25 ) - (    5 )) ,	 
		0x50,			 
		0xA0,			 
		0x60,			 
		0x60, 0x20,		 
		0x00, 0x00,		 
		0x30,			 
		0x30,			 
		0x20,			 
		0x20,			 
		0x20,			 
		0x30,			 
		0x20,			 
		0x20,			 
		0x30,			 
		0x30, 0x60,		 
	},
 
 
 
	{     
		(    0 ), ((    5 ) - (    0 )) ,	 
		(   30 ), ((   60 ) - (   30 )) ,	 
		(    5 ), ((   15 ) - (    5 )) ,	 
		0x70,			 
		0xD0,			 
		0x80,			 
		0x70, 0x20,		 
		0x00, 0x00,		 
		0x40,			 
		0x40,			 
		0x40,			 
		0x28,			 
		0x28,			 
		0x80,			 
		0x30,			 
		0xA0,			 
		0x80,			 
		0x40, 0x80,		 
	},
 
 
 
	{     
		(    0 ), ((    3 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    0 ), ((   10 ) - (    0 )) ,	 
		0x80,			 
		0xFF,			 
		0xC0,			 
		0x80, 0x30,		 
		0x00, 0x00,		 
		0xE0,			 
		0xF0,			 
		0x60,			 
		0x30,			 
		0x30,			 
		0xD0,			 
		0x40,			 
		0xFF,			 
		0xC0,			 
		0x60, 0x98,		 
	},
 
 
 
	{     
		(    0 ), ((    3 ) - (    0 )) ,	 
		(   20 ), ((   60 ) - (   20 )) ,	 
		(    0 ), ((   10 ) - (    0 )) ,	 
		0x80,			 
		0xFF,			 
		0xC0,			 
		0x80, 0x30,		 
		0x00, 0x00,		 
		0xE0,			 
		0xF0,			 
		0x60,			 
		0x30,			 
		0x30,			 
		0xD0,			 
		0x40,			 
		0xFF,			 
		0xC0,			 
		0x60, 0x98,		 
	},
};

 
 
 
COMLVL *com_level[] = {
	com_level_easy,			 
	com_level_normal,		 
	com_level_hard,			 
	com_level_veryhard,		 
	com_level_practice,		 
};
 
# 31 "act/act.c" 2

# 1 "act/training.h" 1
 



# 32 "act/act.c" 2


# 1 "act/act_def.h" 1

 
 
 
 
# 186 "act/act_def.h"

 
# 34 "act/act.c" 2

# 1 "act/act_dat.h" 1
 
 
 
  
 
 
extern	PAD		pad[2];

extern	UINT16 	**cmd_standard[];			 
 
extern	FIXED 	act_range_rev_dat[];



extern	Uint8	LoadMemDatFlg[];				 



Uint8	act_adr_cng_flg[2];



 
# 35 "act/act.c" 2

# 1 "act/act_com.h" 1
 


extern	void com_init(UINT8 plyr);

extern	void com_act_set(void);
extern	void com_act_set_norm(void);
extern	void com_act_set_move(void);
extern	void com_move_std(FIXED  range);
extern	void com_act(UINT8 com_sta);

extern	UINT8 order_act_set(UINT8 odr_dat_num, COMACT *odr_adrs);

extern	void com_act_set_vs_norm_of(void);
extern	void com_act_set_vs_norm_df(void);
extern	void com_act_set_vs_down(void);

extern	void com_wait_derive(UINT8 own_sta);
extern	void derive_act_set(DERVACT *data_adr);

extern	void com_wait_slip(UINT8 own_sta);
extern	void slip_act_set(DERVACT *data_adr);

extern	void com_combo_init(UINT8 data_num);
extern	void com_combo(void);
extern	void com_combo_wait_sub(void);

extern	void com_act_set_down(void);
extern	void com_down_recover(void);
extern	void com_act_set_ukemiderv(void);
extern	void com_act_set_getupderv(void);

extern	void com_stagger_recover(void);

extern	void com_ukemi_chk();

extern	void com_drct_rev(void);
extern	void com_move_clr(void);

extern	UINT8 per_chk(UINT16 chk_per);
extern	UINT8 per_act_set(COMACT *dat_adrs);
extern	UINT8 cond_act_set(UINT8 set_num, UINT8 chk_cond);

extern	void com_wait_set(void);

extern	UINT8 com_sta_think(UINT8 cond, UINT8 sel_max);
extern	void com_study_result(UINT8 scs);
extern	UINT8 com_personal_ofdf(void);
extern	UINT8 com_personal_act(void);






# 156 "act/act_com.h"


 
# 36 "act/act.c" 2

# 1 "act/act_work.h" 1
 
 
 
 
extern	UINT8	key_dat_tbl[];

extern	UINT8	*key_tbl;

 

extern	UINT8	newsw_buf[2 ][0x80 ];	 
extern	UINT8	onsw_buf[2 ][0x80 ];	 
extern	UINT8	lonsw_buf[2 ][0x80 ];	 






extern	UINT8	sw_buf_ix,sw_buf_ix_bak,sw_buf_ix_bak_bak;
extern	UINT8	sw_buf_ix_wk;					 
extern	UINT8	*newsw_buf_adr, *onsw_buf_adr, *lonsw_buf_adr;



extern	SINT16	pose_keep_time[2 ];			 



extern	SINT16	actreq_exe_time[2 ];			 


 
extern	void		**act_play_adr_1;
extern	void		**act_play_adr_2;
extern	ACT_TYPE	*act_code_data_1;
extern 	ACT_TYPE	*act_code_data_2;
 
 
extern	UINT16 		***cmd_data_chr_1;
extern	UINT16 		***cmd_data_chr_2;
extern	struct	DOWNTIME	*down_time_dat_1;
extern	struct	DOWNTIME	*down_time_dat_2;
extern	struct	DOWNTIME	*dwna_down_time_dat_1;
extern	struct	DOWNTIME	*dwna_down_time_dat_2;
extern	FIXED	*chr_range_rev_dat_1;
extern	FIXED	*chr_range_rev_dat_2;
extern	struct	TRWDAT	*throw_1;
extern	struct	TRWDAT	*throw_2;

 
 
extern	struct	COMTRW		*com_throw_1;
extern	struct	COMTRW		*com_throw_2;
extern 	struct	DOWNTIME	*throw_down_time_rev_dat[2];

extern	Uint8	debug_no;

extern	void	**com_think_adr_1;
extern	void	**com_think_adr_2;
# 89 "act/act_work.h"

extern	COMDAT 	*comdat_tbl_1;
extern	COMDAT 	*comdat_tbl_2;


 
extern	Uint8	wanpan;
extern	Uint8	practice, practice_bak;

extern	Uint8	conte_res_flg;
extern	ANGLE	theta;
extern	UINT8	length;

extern	int		showing;					 

extern	UINT8	ONSW[2 ], OFFSW[2 ], NEWSW[2 ], OLDSW[2 ];
 
extern	UINT8	newsw_buf[2 ][0x80 ];	 
extern	UINT8	onsw_buf[2 ][0x80 ];	 
extern	UINT8	lonsw_buf[2 ][0x80 ];	 
extern	UINT8	actreq_buf[2 ][0x80 ];	 
extern	UINT8	actcode_buf[2 ][0x80 ];	 
extern	UINT8	pose_buf[2 ][0x80 ];
extern	UINT8	sw_buf_ix,sw_buf_ix_bak,sw_buf_ix_bak_bak;
extern	UINT8	sw_buf_ix_wk;					 
extern	UINT8	*newsw_buf_adr,*onsw_buf_adr,*lonsw_buf_adr;
extern	UINT8	*actreq_buf_adr,*actcode_buf_adr;

 
extern	UINT16 	*cmd_data_adr;				 
extern	UINT16 	**cmd_data_tbl;				 
 

 
extern	SINT16	cmd_time;					 
extern	UINT8	plyr,rival;					 
extern	UINT8	cmd_fst_flg;				 
extern	UINT16	lev_chk;					 
extern	UINT8	cmd_break_flg;				 
extern	UINT8	cmd_conc_flg;
extern	UINT8	cmd_conc_num;				 
extern	PLAYER	*pwrk_own,*pwrk_rival;		 
extern	UINT8	throw_der_flg[2 ];		 
extern	UINT8	blow_der_flg[2 ];			 
extern	UINT16	act_exe_time[2 ];			 
extern	UINT16	act_exe_time_old[2 ];			 
extern	UINT8	cmd_chk_actsta[2 ];
extern	UINT8	cmd_chk_actsta_bak[2 ];
extern	UINT8	cmd_chk_actsta_bak_bak[2 ];
extern	UINT8	act_conc[2 ];				 
extern	UINT8	der_chk_flg[2 ];			 
extern	UINT8	actcode_newest[2 ];
extern	UINT8	actreq_newest[2 ];
extern	UINT8	p_chk_flg;					 
extern	UINT8	rcv_btn_cnt[2 ];			 
extern	UINT8	pre_flg, pre_sw_buf_ix;

 
extern	UINT8	p_turn_drct[2 ];			 
extern	UINT8	p_disp_drct[2 ];			 
extern	UINT8	throw_drct[2 ];			 
extern	UINT8	throw_flg[2 ];			 

 
extern	INT16	down_time[2 ];			 
extern	INT16	getup_time[2 ];			 
extern	UINT8	down_sta[2 ];				 

extern	INT16	down_time_max[2 ];		 
extern	UINT16	down_damage[2 ];			 
extern	UINT8	down_before_act[2 ];		 
extern	INT16	getup_time_max[2 ];		 

 


 
extern	COMLVL	*level_dat_adr;				 

extern	COMCTRL	com_ctrl[2 ];				 
extern	COMCTRL	*com;

extern	COMPSNL	*com_psnl;

extern	UINT8	com_group_flg;				 

# 209 "act/act_work.h"


extern	UINT16	per_wrk;					 
extern	UINT	per_up_wrk;

extern	UINT	com_exp_up;


extern	UINT8	hit_dwna[2 ];


 
extern	UINT8	act_req[2 ][4 ];	 
extern	INT8	act_req_ix[2 ];			 

extern	int		sw_buf_init_flg, sw_buf_init_cnt;

extern	UINT8	atk_bfr[2 ], atk_btw[2 ], atk_aft[2 ];
extern	UINT8	atk_time[2 ];

 
extern	UINT8	chrnum_bak[2 ];			 
extern	UINT8	actsta_bak[2 ];			 
extern	UINT8	attacksta_bak[2 ];		 
extern	UINT8	actcode_bak[2 ];			 
extern	UINT8	actreq_bak[2 ];			 
extern	UINT8	actcancel_bak[2 ];		 
extern	UINT8	animeflg_bak[2 ];			 
extern	UINT8	posestatus_bak[2 ];			 
extern	UINT8	mountsta_bak[2 ];				 
extern	UINT8	bak_playsta;				 
extern	UINT16	act_hitp_bak[2 ];			 
extern	UINT8	roundfin_bak;				 
extern	UINT8	animeflg_bak[2 ];			 

extern	INT8	round_start_init_wait, set_start_init_wait;

extern	UINT8	com_combo_num[2 ];		 
extern	UINT8	combo_dat_cnt[2 ];		 

 
										 
extern	INT16	thr_delay_time;				 
extern	INT16	thr_dis_time[2 ];			 

extern	UINT8	demo_guard_flg[2 ];

extern	UINT8	back_time;
extern	SINT16	cmd_chk_time;		 


extern	UINT8	thr_dis_flg[2 ];		 


extern	UINT8	thr_dis_blow_flg[2 ];		 


# 37 "act/act.c" 2


# 1 "act/cmd_std.dat" 1
 
 
 
 
UINT16 	 CMD_SIT[] = {			 
	(UINT16)   0x0A  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0010  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_FRONT[] = {		 
	(UINT16)   0x01  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0040  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_BACK[] = {			 
	(UINT16)   0x02  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0080  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_FRONT[] = {		 
	(UINT16)   0x0B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_BACK[] = {		 
	(UINT16)   0x0C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_DASH_FRONT[] = {		 
	(UINT16)   0x03  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0040  			  ,	(UINT16)  0x13 		  , 
		(UINT16)   0x0200 | 0x0000  			  ,	(UINT16)  0x13 		  , 
		(UINT16)   16  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0040  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_DASH_BACK[] = {		 
	(UINT16)   0x04  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0080  			  ,	(UINT16)  0x13 		  , 
		(UINT16)   0x0200 | 0x0000  			  ,	(UINT16)  0x13 		  , 
		(UINT16)   10 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0080  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_DASH_F1[] = {		 
	(UINT16)   0x10  			  ,	(UINT16)  0xFFFF 		  , 






		(UINT16)   (0x0040 | 0x0010 )  			  ,	(UINT16)  0x15 	  , 
		(UINT16)   0x0200 | 0x0000  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   16  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   (0x0040 | 0x0010 )  			  ,	(UINT16)  0x15 	  , 
};
UINT16 	 CMD_LO_DASH_B1[] = {		 
	(UINT16)   0x11  			  ,	(UINT16)  0xFFFF 		  , 






		(UINT16)   (0x0080 | 0x0010 )  			  ,	(UINT16)  0x15 	  , 
		(UINT16)   0x0200 | 0x0000  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   10 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   (0x0080 | 0x0010 )  			  ,	(UINT16)  0x15 	  , 
};
UINT16 	 CMD_LO_DASH_F2[] = {		 
	(UINT16)   0x10  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0010  			  ,	(UINT16)  0x10 		  , 	 
		(UINT16)   (0x0080 | 0x0010 )  		  ,	(UINT16)   (0x0040 | 0x0010 )  			  ,	(UINT16)  0x14 		  , 
		(UINT16)   0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   16  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_DASH_B2[] = {		 
	(UINT16)   0x11  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0010  			  ,	(UINT16)  0x10 		  , 	 
		(UINT16)   (0x0040 | 0x0010 )  		  ,	(UINT16)   (0x0080 | 0x0010 )  			  ,	(UINT16)  0x14 		  , 
		(UINT16)   0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   16  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_RUN[] = {			 
	(UINT16)   0x05  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x03  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   10  				  ,	(UINT16)   0x0040  			  ,	(UINT16)  0x12 		  , 
};

UINT16 	 CMD_TURN[] = {			 
	(UINT16)   0x12  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0080  			  ,	(UINT16)  0x10 		  , 
		(UINT16)  0x31 	  , 
};
UINT16 	 CMD_SIT_TURN[] = {		 
	(UINT16)   0x13  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)  0x31 	  , 
};
 
 
 
 
UINT16 	 CMD_LO_JUMP_F[] = {		 
	(UINT16)   0x14  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0020 )  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_JUMP_F2[] = {		 
	(UINT16)   0x14  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   (0x0040 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_LO_JUMP_O[] = {		 
	(UINT16)   0x15  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0020  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_JUMP_B[] = {		 
	(UINT16)   0x16  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)  0x2A 		  , 		 
		(UINT16)   (0x0080 | 0x0020 )  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_JUMP_B2[] = {		 
	(UINT16)   0x16  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)  0x2A 		  , 		 
		(UINT16)   (0x0080 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
};
 
 
 
UINT16 	 CMD_SIDE_UP_H[] = {		 
	(UINT16)   0x1E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x02  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_H_FR[] = {		 
	(UINT16)   0x1E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x00  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_H_BK[] = {		 
	(UINT16)   0x1E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x01  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_SIDE_UP_F[] = {		 
	(UINT16)   0x1F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x02  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_F_FR[] = {		 
	(UINT16)   0x1F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x00  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_F_BK[] = {		 
	(UINT16)   0x1F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x01  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_SIDE_DOWN_H[] = {		 
	(UINT16)   0x20  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x02  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_H_FR[] = {	 
	(UINT16)   0x20  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x00  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_H_BK[] = {	 
	(UINT16)   0x20  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x01  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_SIDE_DOWN_F[] = {		 
	(UINT16)   0x21  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x02  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_F_FR[] = {	 
	(UINT16)   0x21  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x00  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_F_BK[] = {	 
	(UINT16)   0x21  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x01  				  ,	(UINT16)  0x32 	  , 
		(UINT16)   0x0200 | 0x0100 | 0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_NORM_UP_H[] = {		 
	(UINT16)   0x1A  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NORM_UP_F[] = {		 
	(UINT16)   0x1B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NORM_DOWN_H[] = {		 
	(UINT16)   0x1C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NORM_DOWN_F[] = {		 
	(UINT16)   0x1D  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_REAR_UP_H[] = {		 
	(UINT16)   0x22  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0040  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_UP_F[] = {		 
	(UINT16)   0x23  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0080  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_DOWN_H[] = {		 
	(UINT16)   0x24  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0080  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_DOWN_F[] = {		 
	(UINT16)   0x25  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0040  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_UP_H[] = {		 
	(UINT16)   0x26  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_UP_F[] = {		 
	(UINT16)   0x27  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_DOWN_H[] = {		 
	(UINT16)   0x28  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_DOWN_F[] = {		 
	(UINT16)   0x29  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	CMD_SIT_SIDE_UP_H[] = {		 
	(UINT16)   0x2A  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x1E  			  ,	(UINT16)  0x29 	  , 
		(UINT16)  0x2B 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_SIDE_UP_F[] = {		 
	(UINT16)   0x2B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x1F  			  ,	(UINT16)  0x29 	  , 
		(UINT16)  0x2B 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_SIDE_DOWN_H[] = { 	 
	(UINT16)   0x2C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x20  			  ,	(UINT16)  0x29 	  , 
		(UINT16)  0x2B 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_SIDE_DOWN_F[] = { 	 
	(UINT16)   0x2D  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x21  			  ,	(UINT16)  0x29 	  , 
		(UINT16)  0x2B 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_REAR_UP_H[] = {		 
	(UINT16)   0x2E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_REAR_UP_F[] = {		 
	(UINT16)   0x2F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_REAR_DOWN_H[] = { 	 
	(UINT16)   0x30  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	CMD_SIT_REAR_DOWN_F[] = { 	 
	(UINT16)   0x31  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
 
 
 
UINT16 	 CMD_GRASP_HI[] = {		 
	(UINT16)   0x40  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_GRASP_MD1[] = {		 
	(UINT16)   0x41  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0000  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   2 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_GRASP_MD2[] = {		 
	(UINT16)   0x41  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0000  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   2 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_GRASP_LO[] = {		 
	(UINT16)   0x42  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_GRASP_TRN_HI[] = {		 
	(UINT16)   0x43  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_GRASP_TRN_LO[] = {		 
	(UINT16)   0x44  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001  			  ,	(UINT16)  0x10 		  , 
};
 
 
 
UINT16 	 CMD_THROW_NML_SLIP[] = {	 
	(UINT16)   0x4F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x4D  			  ,	(UINT16)  0x22 		  , 
		(UINT16)   10  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0002  			  ,	(UINT16)  0x11 		  , 
};

 
 
 
UINT16 	 CMD_STAND_P[] = {		 
	(UINT16)   0x53  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_MID_P[] = {		 
	(UINT16)   0x54  			  ,	(UINT16)  0xFFFF 		  , 







		(UINT16)  0x2A 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_P[] = {		 
	(UINT16)   0x55  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_STAND_K[] = {		 
	(UINT16)   0x56  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_MID_K[] = {		 
	(UINT16)   0x57  			  ,	(UINT16)  0xFFFF 		  , 
 


		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIT_K[] = {		 
	(UINT16)   0x58  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_STAND_SPK[] = {		 
	(UINT16)   0x53  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001 | 0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_STAND_SP[] = {		 
	(UINT16)   0x53  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001 | 0x0002  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_STAND_PK[] = {		 
	(UINT16)   0x53  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_STAND_SK[] = {		 
	(UINT16)   0x56  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_SIT_SPK[] = {		 
	(UINT16)   0x55  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_SIT_SP[] = {		 
	(UINT16)   0x55  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0002  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_SIT_PK[] = {		 
	(UINT16)   0x55  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_SIT_SK[] = {		 
	(UINT16)   0x58  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};


UINT16 	 CMD_TURN_P[] = {		 
	(UINT16)   0x59  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_P2[] = {		 
	(UINT16)   0x59  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   (0x0080 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_MID_P[] = {		 
	(UINT16)   0x5A  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_SIT_P[] = {		 
	(UINT16)   0x5B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_K[] = {		 
	(UINT16)   0x5C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_K2[] = {		 
	(UINT16)   0x5C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   (0x0080 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_MID_K[] = {		 
	(UINT16)   0x5D  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_TURN_SIT_K[] = {		 
	(UINT16)   0x5E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_TURN_SPK[] = {		 
	(UINT16)   0x59  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001 | 0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_SP[] = {		 
	(UINT16)   0x59  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001 | 0x0002  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_PK[] = {		 
	(UINT16)   0x59  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_SK[] = {		 
	(UINT16)   0x5C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0001 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_SIT_SPK[] = {		 
	(UINT16)   0x5B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_SIT_SP[] = {		 
	(UINT16)   0x5B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0002  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_SIT_PK[] = {		 
	(UINT16)   0x5B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
UINT16 	 CMD_TURN_SIT_SK[] = {		 
	(UINT16)   0x5E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0010  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0001 | 0x0004  			  ,	(UINT16)  0x11 		  , 
};
 
 
 
 
UINT16 	 CMD_LO_F_JMP_SYNC_P[] = {	 
	(UINT16)   0x5F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x14  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_F_JMP_SYNC_K[] = {	 
	(UINT16)   0x60  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x14  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_F_JMP_SYNC_P2[] = {	 
	(UINT16)   0x5F  			  ,	(UINT16)  0xFFFF 		  , 
 
		(UINT16)   (0x0040 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_F_JMP_SYNC_K2[] = {	 
	(UINT16)   0x60  			  ,	(UINT16)  0xFFFF 		  , 
 
		(UINT16)   (0x0040 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_F_JMP_P[] = {		 
	(UINT16)   0x65  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_F_JMP_K[] = {		 
	(UINT16)   0x66  			  ,	(UINT16)  0xFFFF 		  , 
 
 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_O_JMP_SYNC_P[] = {	 
	(UINT16)   0x61  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x15  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_O_JMP_SYNC_K[] = {	 
	(UINT16)   0x62  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x15  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_O_JMP_SYNC_P2[] = {	 
	(UINT16)   0x61  			  ,	(UINT16)  0xFFFF 		  , 
 
		(UINT16)   0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_O_JMP_SYNC_K2[] = {	 
	(UINT16)   0x62  			  ,	(UINT16)  0xFFFF 		  , 
 
		(UINT16)   0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_O_JMP_P[] = {		 
	(UINT16)   0x67  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_O_JMP_K[] = {		 
	(UINT16)   0x68  			  ,	(UINT16)  0xFFFF 		  , 
 
 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_B_JMP_SYNC_P[] = {	 
	(UINT16)   0x63  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x16  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_B_JMP_SYNC_K[] = {	 
	(UINT16)   0x64  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x16  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_B_JMP_SYNC_P2[] = {	 
	(UINT16)   0x63  			  ,	(UINT16)  0xFFFF 		  , 
 
		(UINT16)   (0x0080 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_LO_B_JMP_SYNC_K2[] = {	 
	(UINT16)   0x64  			  ,	(UINT16)  0xFFFF 		  , 
 
		(UINT16)   (0x0080 | 0x0020 )  			  ,	(UINT16)  0x11 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
 
 
 
UINT16 	 CMD_NML_UP_F_K[] = {		 
	(UINT16)   0x73  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NML_UP_F_LK[] = {		 
	(UINT16)   0x74  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NML_UP_H_K[] = {		 
	(UINT16)   0x75  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NML_UP_H_LK[] = {		 
	(UINT16)   0x76  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_NML_DOWN_F_K[] = {		 
	(UINT16)   0x77  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NML_DOWN_F_LK[] = {	 
	(UINT16)   0x78  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NML_DOWN_H_K[] = {		 
	(UINT16)   0x79  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_NML_DOWN_H_LK[] = {	 
	(UINT16)   0x7A  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_SIDE_UP_F_K[] = {		 
	(UINT16)   0x7B  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x1F  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_F_LK[] = {		 
	(UINT16)   0x7C  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x1F  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_H_K[] = {		 
	(UINT16)   0x7D  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x1E  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_UP_H_LK[] = {		 
	(UINT16)   0x7E  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x1E  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};

UINT16 	 CMD_SIDE_DOWN_F_K[] = {	 
	(UINT16)   0x7F  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x21  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_F_LK[] = {	 
	(UINT16)   0x80  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x21  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_H_K[] = {	 
	(UINT16)   0x81  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x20  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_SIDE_DOWN_H_LK[] = {	 
	(UINT16)   0x82  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x20  			  ,	(UINT16)  0x21 		  , 
		(UINT16)   60  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0200 | (0x0010 | 0x0100 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_UP_F_K[] = {		 
	(UINT16)   0x83  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0080  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_UP_F_LK[] = {		 
	(UINT16)   0x84  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_UP_H_K[] = {		 
	(UINT16)   0x85  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0040  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_UP_H_LK[] = {		 
	(UINT16)   0x86  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_DOWN_F_K[] = {	 
	(UINT16)   0x87  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0040  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_DOWN_F_LK[] = {	 
	(UINT16)   0x88  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0040 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_DOWN_H_K[] = {	 
	(UINT16)   0x89  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | 0x0100 | 0x0080  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
UINT16 	 CMD_REAR_DOWN_H_LK[] = {	 
	(UINT16)   0x8A  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0200 | (0x0080 | 0x0010 )  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   1 				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0004  			  ,	(UINT16)  0x10 		  , 
};
 
 
 
 
UINT16 	 CMD_LO_D_ATTACK[] = {		 
	(UINT16)   0x95  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x15  			  ,	(UINT16)  0x20 	  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
		(UINT16)  0x26 		  , 
};
UINT16 	 CMD_LO_D_ATTACK2[] = {		 
	(UINT16)   0x95  			  ,	(UINT16)  0xFFFF 		  , 
		(UINT16)   0x0020  			  ,	(UINT16)  0x10 		  , 
		(UINT16)   6  				  ,	(UINT16)  0x00 		  , 
		(UINT16)   0x0002  			  ,	(UINT16)  0x10 		  , 
		(UINT16)  0x26 		  , 
};
 
 
 
 
 
 
 
UINT16  *standard_normal[] = {
	( CMD_RUN ) + (sizeof( CMD_RUN ) / 2 ) - 1 ,			 
	( CMD_DASH_FRONT ) + (sizeof( CMD_DASH_FRONT ) / 2 ) - 1 ,		 
	( CMD_DASH_BACK ) + (sizeof( CMD_DASH_BACK ) / 2 ) - 1 ,		 




	( CMD_LO_DASH_F1 ) + (sizeof( CMD_LO_DASH_F1 ) / 2 ) - 1 ,		 
	( CMD_LO_DASH_F2 ) + (sizeof( CMD_LO_DASH_F2 ) / 2 ) - 1 ,		 
	( CMD_LO_DASH_B1 ) + (sizeof( CMD_LO_DASH_B1 ) / 2 ) - 1 ,		 
	( CMD_LO_DASH_B2 ) + (sizeof( CMD_LO_DASH_B2 ) / 2 ) - 1 ,		 

	( CMD_LO_JUMP_F2 ) + (sizeof( CMD_LO_JUMP_F2 ) / 2 ) - 1 ,		 
	( CMD_LO_JUMP_B2 ) + (sizeof( CMD_LO_JUMP_B2 ) / 2 ) - 1 ,		 
	( CMD_LO_JUMP_F ) + (sizeof( CMD_LO_JUMP_F ) / 2 ) - 1 ,		 
	( CMD_LO_JUMP_B ) + (sizeof( CMD_LO_JUMP_B ) / 2 ) - 1 ,		 
	( CMD_LO_JUMP_O ) + (sizeof( CMD_LO_JUMP_O ) / 2 ) - 1 ,		 

	( CMD_SIT_FRONT ) + (sizeof( CMD_SIT_FRONT ) / 2 ) - 1 ,		 
	( CMD_SIT_BACK ) + (sizeof( CMD_SIT_BACK ) / 2 ) - 1 ,		 
	( CMD_SIT ) + (sizeof( CMD_SIT ) / 2 ) - 1 ,			 
	( CMD_FRONT ) + (sizeof( CMD_FRONT ) / 2 ) - 1 ,		 
	( CMD_BACK ) + (sizeof( CMD_BACK ) / 2 ) - 1 ,			 

	0x00 ,
};
 
UINT16  *standard_normal_btn[] = {
 	 
 	 
 	 
	0x00 ,
};
 
 
 
 
UINT16  *standard_back[] = {
 	 
	( CMD_DASH_FRONT ) + (sizeof( CMD_DASH_FRONT ) / 2 ) - 1 ,		 



	( CMD_LO_DASH_F1 ) + (sizeof( CMD_LO_DASH_F1 ) / 2 ) - 1 ,		 
	( CMD_LO_DASH_F2 ) + (sizeof( CMD_LO_DASH_F2 ) / 2 ) - 1 ,		 

	( CMD_LO_JUMP_F ) + (sizeof( CMD_LO_JUMP_F ) / 2 ) - 1 ,		 
 	 
	( CMD_LO_JUMP_O ) + (sizeof( CMD_LO_JUMP_O ) / 2 ) - 1 ,		 

	( CMD_SIT_TURN ) + (sizeof( CMD_SIT_TURN ) / 2 ) - 1 ,		 
	( CMD_TURN ) + (sizeof( CMD_TURN ) / 2 ) - 1 ,			 

	( CMD_SIT_FRONT ) + (sizeof( CMD_SIT_FRONT ) / 2 ) - 1 ,		 
	( CMD_SIT ) + (sizeof( CMD_SIT ) / 2 ) - 1 ,			 
	( CMD_FRONT ) + (sizeof( CMD_FRONT ) / 2 ) - 1 ,		 

	0x00 ,
};
 
UINT16  *standard_back_btn[] = {
	( CMD_TURN_MID_P ) + (sizeof( CMD_TURN_MID_P ) / 2 ) - 1 ,		 
	( CMD_TURN_MID_K ) + (sizeof( CMD_TURN_MID_K ) / 2 ) - 1 ,		 

 	 

	( CMD_LO_F_JMP_SYNC_P2 ) + (sizeof( CMD_LO_F_JMP_SYNC_P2 ) / 2 ) - 1 ,	 
	( CMD_LO_F_JMP_SYNC_K2 ) + (sizeof( CMD_LO_F_JMP_SYNC_K2 ) / 2 ) - 1 ,	 
	( CMD_TURN_P2 ) + (sizeof( CMD_TURN_P2 ) / 2 ) - 1 ,		 
	( CMD_TURN_K2 ) + (sizeof( CMD_TURN_K2 ) / 2 ) - 1 ,		 
	( CMD_LO_O_JMP_SYNC_P2 ) + (sizeof( CMD_LO_O_JMP_SYNC_P2 ) / 2 ) - 1 ,	 
	( CMD_LO_O_JMP_SYNC_K2 ) + (sizeof( CMD_LO_O_JMP_SYNC_K2 ) / 2 ) - 1 ,	 

 	 
	( CMD_TURN_SIT_P ) + (sizeof( CMD_TURN_SIT_P ) / 2 ) - 1 ,		 
	( CMD_TURN_SIT_K ) + (sizeof( CMD_TURN_SIT_K ) / 2 ) - 1 ,		 

 	 
	( CMD_TURN_P ) + (sizeof( CMD_TURN_P ) / 2 ) - 1 ,		 
	( CMD_TURN_K ) + (sizeof( CMD_TURN_K ) / 2 ) - 1 ,		 

	( CMD_TURN_SIT_SPK ) + (sizeof( CMD_TURN_SIT_SPK ) / 2 ) - 1 ,		 
	( CMD_TURN_SIT_SP ) + (sizeof( CMD_TURN_SIT_SP ) / 2 ) - 1 ,		 
	( CMD_TURN_SIT_PK ) + (sizeof( CMD_TURN_SIT_PK ) / 2 ) - 1 ,		 
	( CMD_TURN_SIT_SK ) + (sizeof( CMD_TURN_SIT_SK ) / 2 ) - 1 ,		 
	( CMD_TURN_SPK ) + (sizeof( CMD_TURN_SPK ) / 2 ) - 1 ,		 
	( CMD_TURN_SP ) + (sizeof( CMD_TURN_SP ) / 2 ) - 1 ,		 
	( CMD_TURN_PK ) + (sizeof( CMD_TURN_PK ) / 2 ) - 1 ,		 
	( CMD_TURN_SK ) + (sizeof( CMD_TURN_SK ) / 2 ) - 1 ,		 

	( CMD_SIT_FRONT ) + (sizeof( CMD_SIT_FRONT ) / 2 ) - 1 ,		 
	( CMD_SIT ) + (sizeof( CMD_SIT ) / 2 ) - 1 ,			 
	( CMD_FRONT ) + (sizeof( CMD_FRONT ) / 2 ) - 1 ,		 

	0x00 ,
};
 
 
 
 
UINT16  *standard_beat_derive[] = {
	0x00 ,
};
 
UINT16  *standard_thrw_derive[] = {
	0x00 ,
};
 
UINT16  *standard_grsp_derive[] = {
	0x00 ,
};
 
 
 
 
UINT16  *standard_jmp_bfr[] = {
 	 

	( CMD_LO_F_JMP_SYNC_P ) + (sizeof( CMD_LO_F_JMP_SYNC_P ) / 2 ) - 1 ,	 
	( CMD_LO_F_JMP_SYNC_K ) + (sizeof( CMD_LO_F_JMP_SYNC_K ) / 2 ) - 1 ,	 
	( CMD_LO_B_JMP_SYNC_P ) + (sizeof( CMD_LO_B_JMP_SYNC_P ) / 2 ) - 1 ,	 
	( CMD_LO_B_JMP_SYNC_K ) + (sizeof( CMD_LO_B_JMP_SYNC_K ) / 2 ) - 1 ,	 
	( CMD_LO_O_JMP_SYNC_P ) + (sizeof( CMD_LO_O_JMP_SYNC_P ) / 2 ) - 1 ,	 
	( CMD_LO_O_JMP_SYNC_K ) + (sizeof( CMD_LO_O_JMP_SYNC_K ) / 2 ) - 1 ,	 

	0x00 ,
};
 
UINT16  *standard_jmp_up[] = {




	0x00 ,
};
 
UINT16  *standard_jmp_fr[] = {




	0x00 ,
};
 
UINT16  *standard_jmp_bk[] = {
	0x00 ,
};
 
 
 
 
UINT16  *standard_getup_up_head[] = {
	( CMD_SIT_REAR_UP_H ) + (sizeof( CMD_SIT_REAR_UP_H ) / 2 ) - 1 ,	 
	( CMD_REAR_UP_H ) + (sizeof( CMD_REAR_UP_H ) / 2 ) - 1 ,		 
	( CMD_REAR_UP_H_LK ) + (sizeof( CMD_REAR_UP_H_LK ) / 2 ) - 1 ,		 
	( CMD_REAR_UP_H_K ) + (sizeof( CMD_REAR_UP_H_K ) / 2 ) - 1 ,		 
	( CMD_NML_UP_H_LK ) + (sizeof( CMD_NML_UP_H_LK ) / 2 ) - 1 ,		 
	( CMD_NML_UP_H_K ) + (sizeof( CMD_NML_UP_H_K ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_H_FR ) + (sizeof( CMD_SIDE_UP_H_FR ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_H_BK ) + (sizeof( CMD_SIDE_UP_H_BK ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_H ) + (sizeof( CMD_SIDE_UP_H ) / 2 ) - 1 ,		 
	( CMD_SIT_UP_H ) + (sizeof( CMD_SIT_UP_H ) / 2 ) - 1 ,		 
	( CMD_NORM_UP_H ) + (sizeof( CMD_NORM_UP_H ) / 2 ) - 1 ,		 
	0x00 ,
};
 
UINT16  *standard_getup_up_foot[] = {
	( CMD_SIT_REAR_UP_F ) + (sizeof( CMD_SIT_REAR_UP_F ) / 2 ) - 1 ,	 
	( CMD_REAR_UP_F ) + (sizeof( CMD_REAR_UP_F ) / 2 ) - 1 ,		 
	( CMD_REAR_UP_F_LK ) + (sizeof( CMD_REAR_UP_F_LK ) / 2 ) - 1 ,		 
	( CMD_REAR_UP_F_K ) + (sizeof( CMD_REAR_UP_F_K ) / 2 ) - 1 ,		 
	( CMD_NML_UP_F_LK ) + (sizeof( CMD_NML_UP_F_LK ) / 2 ) - 1 ,		 
	( CMD_NML_UP_F_K ) + (sizeof( CMD_NML_UP_F_K ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_F_FR ) + (sizeof( CMD_SIDE_UP_F_FR ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_F_BK ) + (sizeof( CMD_SIDE_UP_F_BK ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_F ) + (sizeof( CMD_SIDE_UP_F ) / 2 ) - 1 ,		 
	( CMD_SIT_UP_F ) + (sizeof( CMD_SIT_UP_F ) / 2 ) - 1 ,		 
	( CMD_NORM_UP_F ) + (sizeof( CMD_NORM_UP_F ) / 2 ) - 1 ,		 
	0x00 ,
};
 
UINT16  *standard_getup_dw_head[] = {
	( CMD_SIT_REAR_DOWN_H ) + (sizeof( CMD_SIT_REAR_DOWN_H ) / 2 ) - 1 ,	 
	( CMD_REAR_DOWN_H ) + (sizeof( CMD_REAR_DOWN_H ) / 2 ) - 1 ,		 
	( CMD_REAR_DOWN_H_LK ) + (sizeof( CMD_REAR_DOWN_H_LK ) / 2 ) - 1 ,	 
	( CMD_REAR_DOWN_H_K ) + (sizeof( CMD_REAR_DOWN_H_K ) / 2 ) - 1 ,	 
	( CMD_NML_DOWN_H_LK ) + (sizeof( CMD_NML_DOWN_H_LK ) / 2 ) - 1 ,	 
	( CMD_NML_DOWN_H_K ) + (sizeof( CMD_NML_DOWN_H_K ) / 2 ) - 1 ,		 
	( CMD_SIDE_DOWN_H_FR ) + (sizeof( CMD_SIDE_DOWN_H_FR ) / 2 ) - 1 ,	 
	( CMD_SIDE_DOWN_H_BK ) + (sizeof( CMD_SIDE_DOWN_H_BK ) / 2 ) - 1 ,	 
	( CMD_SIDE_DOWN_H ) + (sizeof( CMD_SIDE_DOWN_H ) / 2 ) - 1 ,		 
	( CMD_SIT_DOWN_H ) + (sizeof( CMD_SIT_DOWN_H ) / 2 ) - 1 ,		 
	( CMD_NORM_DOWN_H ) + (sizeof( CMD_NORM_DOWN_H ) / 2 ) - 1 ,		 
	0x00 ,
};
 
UINT16  *standard_getup_dw_foot[] = {
	( CMD_SIT_REAR_DOWN_F ) + (sizeof( CMD_SIT_REAR_DOWN_F ) / 2 ) - 1 ,	 
	( CMD_REAR_DOWN_F ) + (sizeof( CMD_REAR_DOWN_F ) / 2 ) - 1 ,		 
	( CMD_REAR_DOWN_F_LK ) + (sizeof( CMD_REAR_DOWN_F_LK ) / 2 ) - 1 ,	 
	( CMD_REAR_DOWN_F_K ) + (sizeof( CMD_REAR_DOWN_F_K ) / 2 ) - 1 ,	 
	( CMD_NML_DOWN_F_LK ) + (sizeof( CMD_NML_DOWN_F_LK ) / 2 ) - 1 ,	 
	( CMD_NML_DOWN_F_K ) + (sizeof( CMD_NML_DOWN_F_K ) / 2 ) - 1 ,		 
	( CMD_SIDE_DOWN_F_FR ) + (sizeof( CMD_SIDE_DOWN_F_FR ) / 2 ) - 1 ,	 
	( CMD_SIDE_DOWN_F_BK ) + (sizeof( CMD_SIDE_DOWN_F_BK ) / 2 ) - 1 ,	 
	( CMD_SIDE_DOWN_F ) + (sizeof( CMD_SIDE_DOWN_F ) / 2 ) - 1 ,		 
	( CMD_SIT_DOWN_F ) + (sizeof( CMD_SIT_DOWN_F ) / 2 ) - 1 ,		 
	( CMD_NORM_DOWN_F ) + (sizeof( CMD_NORM_DOWN_F ) / 2 ) - 1 ,		 
	0x00 ,
};
 
UINT16  *standard_getup_derive[] = {
	( CMD_SIDE_UP_H_LK ) + (sizeof( CMD_SIDE_UP_H_LK ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_H_K ) + (sizeof( CMD_SIDE_UP_H_K ) / 2 ) - 1 ,		 
	( CMD_SIT_SIDE_UP_H ) + (sizeof( CMD_SIT_SIDE_UP_H ) / 2 ) - 1 ,	 

	( CMD_SIDE_UP_F_LK ) + (sizeof( CMD_SIDE_UP_F_LK ) / 2 ) - 1 ,		 
	( CMD_SIDE_UP_F_K ) + (sizeof( CMD_SIDE_UP_F_K ) / 2 ) - 1 ,		 
	( CMD_SIT_SIDE_UP_F ) + (sizeof( CMD_SIT_SIDE_UP_F ) / 2 ) - 1 ,	 

	( CMD_SIDE_DOWN_H_LK ) + (sizeof( CMD_SIDE_DOWN_H_LK ) / 2 ) - 1 ,	 
	( CMD_SIDE_DOWN_H_K ) + (sizeof( CMD_SIDE_DOWN_H_K ) / 2 ) - 1 ,	 
	( CMD_SIT_SIDE_DOWN_H ) + (sizeof( CMD_SIT_SIDE_DOWN_H ) / 2 ) - 1 ,	 

	( CMD_SIDE_DOWN_F_LK ) + (sizeof( CMD_SIDE_DOWN_F_LK ) / 2 ) - 1 ,	 
	( CMD_SIDE_DOWN_F_K ) + (sizeof( CMD_SIDE_DOWN_F_K ) / 2 ) - 1 ,	 
	( CMD_SIT_SIDE_DOWN_F ) + (sizeof( CMD_SIT_SIDE_DOWN_F ) / 2 ) - 1 ,	 
	0x00 ,
};
 
 
 
UINT16  *standard_beaten[] = {
	( CMD_THROW_NML_SLIP ) + (sizeof( CMD_THROW_NML_SLIP ) / 2 ) - 1 ,	 
	0x00 ,
};
 
 
 
UINT16  *standard_etc[] = {
	0x00 ,
};

UINT16  *standard_normal_h[] = {
	( CMD_GRASP_LO ) + (sizeof( CMD_GRASP_LO ) / 2 ) - 1 ,		 
	( CMD_GRASP_HI ) + (sizeof( CMD_GRASP_HI ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_normal_p[] = {
	( CMD_LO_F_JMP_SYNC_P2 ) + (sizeof( CMD_LO_F_JMP_SYNC_P2 ) / 2 ) - 1 ,	 
	( CMD_LO_B_JMP_SYNC_P2 ) + (sizeof( CMD_LO_B_JMP_SYNC_P2 ) / 2 ) - 1 ,	 
	( CMD_LO_O_JMP_SYNC_P2 ) + (sizeof( CMD_LO_O_JMP_SYNC_P2 ) / 2 ) - 1 ,	 
	( CMD_MID_P ) + (sizeof( CMD_MID_P ) / 2 ) - 1 ,		 
	( CMD_SIT_P ) + (sizeof( CMD_SIT_P ) / 2 ) - 1 ,		 
	( CMD_STAND_P ) + (sizeof( CMD_STAND_P ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_normal_k[] = {
	( CMD_LO_F_JMP_SYNC_K2 ) + (sizeof( CMD_LO_F_JMP_SYNC_K2 ) / 2 ) - 1 ,	 
	( CMD_LO_B_JMP_SYNC_K2 ) + (sizeof( CMD_LO_B_JMP_SYNC_K2 ) / 2 ) - 1 ,	 
	( CMD_LO_O_JMP_SYNC_K2 ) + (sizeof( CMD_LO_O_JMP_SYNC_K2 ) / 2 ) - 1 ,	 
	( CMD_MID_K ) + (sizeof( CMD_MID_K ) / 2 ) - 1 ,		 
	( CMD_SIT_K ) + (sizeof( CMD_SIT_K ) / 2 ) - 1 ,		 
	( CMD_STAND_K ) + (sizeof( CMD_STAND_K ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_normal_hp[] = {
	( CMD_SIT_SP ) + (sizeof( CMD_SIT_SP ) / 2 ) - 1 ,		 
	( CMD_STAND_SP ) + (sizeof( CMD_STAND_SP ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_normal_hk[] = {
	( CMD_SIT_SK ) + (sizeof( CMD_SIT_SK ) / 2 ) - 1 ,		 
	( CMD_STAND_SK ) + (sizeof( CMD_STAND_SK ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_normal_pk[] = {
	( CMD_SIT_PK ) + (sizeof( CMD_SIT_PK ) / 2 ) - 1 ,		 
	( CMD_STAND_PK ) + (sizeof( CMD_STAND_PK ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_normal_hpk[] = {
	( CMD_SIT_SPK ) + (sizeof( CMD_SIT_SPK ) / 2 ) - 1 ,		 
	( CMD_STAND_SPK ) + (sizeof( CMD_STAND_SPK ) / 2 ) - 1 ,		 
	0x00 ,
};

UINT16  *standard_beat_der_h[] = {
	0x00 ,
};

UINT16  *standard_beat_der_p[] = {
	0x00 ,
};

UINT16  *standard_beat_der_k[] = {
	0x00 ,
};

UINT16  *standard_beat_der_hp[] = {
	0x00 ,
};

UINT16  *standard_beat_der_hk[] = {
	0x00 ,
};

UINT16  *standard_beat_der_pk[] = {
	0x00 ,
};

UINT16  *standard_beat_der_hpk[] = {
	0x00 ,
};


 
 
 
UINT16  **cmd_standard[] = {
	standard_normal,		 
	standard_normal_btn,		 
	standard_back,			 
	standard_back_btn,		 
	standard_beat_derive,		 
	standard_thrw_derive,		 
	standard_grsp_derive,		 
	standard_jmp_bfr,		 
	standard_jmp_up,		 
	standard_jmp_fr,		 
	standard_jmp_bk,		 
	standard_getup_up_head,		 
	standard_getup_up_foot,		 
	standard_getup_dw_head,		 
	standard_getup_dw_foot,		 
	standard_getup_derive,		 
	standard_beaten,		 
	standard_etc,			 
	standard_normal_h,		 
	standard_normal_p,		 
	standard_normal_k,		 
	standard_normal_hp,		 
	standard_normal_hk,		 
	standard_normal_pk,		 
	standard_normal_hpk,		 
	standard_beat_der_h,		 
	standard_beat_der_p,		 
	standard_beat_der_k,		 
	standard_beat_der_hp,		 
	standard_beat_der_hk,		 
	standard_beat_der_pk,		 
	standard_beat_der_hpk,		 
};

 
# 39 "act/act.c" 2





UINT8	ShowSW[2];							 

 
 
 
void	plyr_ang_set( UINT8 plyr, ANGLE plyr_line_ang
					, ANGLE plyr_line_ang_body );
void	actsel_start_init( void );
void	actreq_buf_init( void );
void	sw_buf_init2_init( void );
void	buf_act_req( void );
void	derive_cut( void );
void	ukemi_input_chk2( void );
void	man_act_set( void );
void	man_act_set_norm( void );
void	down_time_calc( void );
void	man_act_set_down( void );
void	man_act_set_getup_norm( void );
void	man_act_set_getup_derive( void );
void	sta_cmd_chk( int );
void	sta_cmd_chk_e( int );
void	cmd_chk( Uint8 );
void	cmd_time_chk( void );
void	fst_cmd_chk( void );
void	prg_cmd_time( void );
void	prg_cmd_wait( void );
void	prg_cmd_hold( void );
void	prg_cmd_sync( void );
void	prg_cmd_key( void );
void	prg_cmd_sync_only( void );
void	prg_e_act_chk( void );
void	prg_down_chk( void );
void	prg_actreq_chk( void );
void	prg_actreq_chk2( void );
void	prg_act_chk( void );
void	prg_act_chk2( void );
void	prg_act_chk3( void );
void	prg_getup_side( void );
void	spin_center( void );
void	prg_nowact_chk( void );
void	prg_throw_chk( void );
void	prg_turn_chk( void );
void	prg_sit_chk( void );
void	prg_stand_chk( void );
void	prg_act_set( void );
void	prg_cmdfst_kill( void );
UINT8	actreq_buf_chk( UINT8 );
void	prg_der_chk( void );
void	prg_cmd_only( void );
void	prg_cmd_limit( void );
void	prg_act_time_chk( void );
void	man_guard_chk( void );
void	auto_guard( void );
void	man_act_set_jump( void );
void	man_down_recover( void );
void	man_stagger_recover( void );
void	lev_chk_flip( void );
UINT8	input_sync( UINT8, UINT8 );
UINT8	throw_chk( UINT8 );
UINT8	getup_code_chk( UINT8 );
UINT8	getupa_code_chk(UINT8 chk_actcode);
UINT8	dh_code_chk(UINT8 chk_actcode);
void	precede_input_chk( void );
UINT8	ringside_chk( UINT8, FIXED , INT32 );
UINT8	dangerzone_chk( FIXED , FIXED  );
UINT8	act_punch_chk( void );
UINT8	act_kick_chk( void );
UINT8	act_psbl_chk( void );
void	demo_act_set( void );
UINT16	rand_limit( UINT16 );
void	pointer_init(int, void**, int);
void	pointer_init_tnk(int, void**, int);
void	pointer_move(int, void**, int);
void	pointer_move_tnk(int, void**, int);

UINT8	key_int_change(UINT16);	

extern	UINT8	ActcodeSta(UINT8	code, int	i);
extern	SINT8	chr_dat_load_flg;
 
 
 
Uint8	std_flg[2];

int		i, j;


 
 
 
UINT8 ukemi_time[] = {
		15,								 
		20,								 
};
 
 
 
void ActSel( void )
{

 


 
 

	key_tbl				= (UINT8*)key_dat_tbl;



	if (chr_dat_load_flg == 1) {			 







	if ((LoadMemDatFlg[0x02 ] != 0) &&
	    (LoadMemDatFlg[0x08 ] != 0)){
		if		(act_adr_cng_flg[0x00 ] == 0) {
													 
													 
			act_play_adr_1							 
				= (void**)((Uint32)0x00200000 	 
				+ (Uint32)CmnLoadDat[0x02 ].DatDelta);
			pointer_init(0x00 , act_play_adr_1, 0x02 );

			com_think_adr_1
				= (void**)((Uint32)0x00000000 
				+ (Uint32)CmnLoadDat[0x08 ].DatDelta);
			pointer_init_tnk(0x00 , com_think_adr_1, 0x08 );


			act_adr_cng_flg[0x00 ]	= 1;

		}
		else if	((CmnLoadDat[0x02 ].MovDelta != 0) &&
				 (CmnLoadDat[0x08 ].MovDelta != 0)){
													 
													 
													 
			act_play_adr_1
				= (void**)((Uint32)act_play_adr_1
				- (Uint32)CmnLoadDat[0x02 ].MovDelta);
			pointer_move(0x00 , act_play_adr_1, 0x02 );

			com_think_adr_1
				= (void**)((Uint32)com_think_adr_1
				- (Uint32)CmnLoadDat[0x08 ].MovDelta);
			pointer_move_tnk(0x00 , com_think_adr_1, 0x08 );
			
		}
	}

	if ((LoadMemDatFlg[0x03 ] != 0) &&
	    (LoadMemDatFlg[0x09 ] != 0)){
		if		(act_adr_cng_flg[0x01 ] == 0) {
													 
													 
			act_play_adr_2							 
				= (void**)((Uint32)0x00200000 	 
				+ (Uint32)CmnLoadDat[0x03 ].DatDelta);
			pointer_init(0x01 , act_play_adr_2, 0x03 );

			com_think_adr_2
				= (void**)((Uint32)0x00000000 
				+ (Uint32)CmnLoadDat[0x09 ].DatDelta);
			pointer_init_tnk(0x01 , com_think_adr_2, 0x09 );

			act_adr_cng_flg[0x01 ]	= 1;

		}
		else if	((CmnLoadDat[0x03 ].MovDelta != 0) &&
				 (CmnLoadDat[0x09 ].MovDelta != 0)){
                                                                                                                                                                                                                           													 
													 
													 
			act_play_adr_2
				= (void**)((Uint32)act_play_adr_2
				- (Uint32)CmnLoadDat[0x03 ].MovDelta);
			pointer_move(0x01 , act_play_adr_2, 0x03 );
		
			com_think_adr_2
				= (void**)((Uint32)com_think_adr_2
				- (Uint32)CmnLoadDat[0x09 ].MovDelta);
			pointer_move_tnk(0x01 , com_think_adr_2, 0x09 );
		
		}
	}

	if		((LoadMemDatFlg[0x02 ] == 0) &&
			 (LoadMemDatFlg[0x08 ] == 0)){
		act_play_adr_1	= act_play_adr_2;
		com_think_adr_1 = com_think_adr_2;
	}
	else if	((LoadMemDatFlg[0x03 ] == 0) &&
			 (LoadMemDatFlg[0x09 ] == 0)){
		act_play_adr_2	= act_play_adr_1;
		com_think_adr_2 = com_think_adr_1;
	}

# 256 "act/act.c"


	act_code_data_1		= act_play_adr_1[0];
	act_code_data_2		= act_play_adr_2[0];
	
 
 

	cmd_data_chr_1		= act_play_adr_1[1];
	cmd_data_chr_2		= act_play_adr_2[1];

	down_time_dat_1		= act_play_adr_1[2];
	down_time_dat_2		= act_play_adr_2[2];

	dwna_down_time_dat_1= act_play_adr_1[3];
	dwna_down_time_dat_2= act_play_adr_2[3];

	chr_range_rev_dat_1 = act_play_adr_1[4];
	chr_range_rev_dat_2 = act_play_adr_2[4];

	throw_1				= act_play_adr_1[5];
	throw_2				= act_play_adr_2[5];

# 291 "act/act.c"

 
# 304 "act/act.c"

 	comdat_tbl_1		= com_think_adr_1[0];
 	comdat_tbl_2		= com_think_adr_2[0];
 


	com_throw_1			= act_play_adr_1[18];
	com_throw_2			= act_play_adr_2[18];

	throw_down_time_rev_dat[0]	= act_play_adr_1[31];
	throw_down_time_rev_dat[1]	= act_play_adr_2[31];



	}
	 
	 
	 
# 355 "act/act.c"


	wanpan = OFF;
	conte_res_flg = OFF;


	sw_buf_ix = 0;


	showing = OFF;

	for( plyr = 0; plyr < 2 ; plyr++ ){
		sw_buf_init2_init();				 
		actreq_buf_init();					 
		PlayerWrk[plyr].actreq = 0xFF ;	 



		actreq_newest[plyr]				= 0xFF ;
		actcode_newest[plyr]			= 0xFF ;
		actreq_bak[plyr]				= 0xFF ;
		actcode_bak[plyr]				= 0xFF ;
		actsta_bak[plyr]				= 0x00 ;
		cmd_chk_actsta_bak_bak[plyr]	= 0x00 ;
		cmd_chk_actsta_bak[plyr]		= 0x00 ;
		ShowSW[plyr]					= 0xFF;
		posestatus_bak[plyr]	= 0x00 ;
		NEWSW[plyr] = 0x00;
		OLDSW[plyr] = 0x00;
		ONSW[plyr] = 0x00;
		OFFSW[plyr] = 0x00;
		for (i = 0; i <= 16; i++) {
			newsw_buf[plyr][i] = 0x00;
			onsw_buf[plyr][i] = 0x00;
			lonsw_buf[plyr][i] = 0x00;
		}
	}
	bak_playsta	= 0xFF;		 
	
	if(CmnDifficult == 4) {
		practice = 0x01 ;
	}
	else {
		practice = 0x00 ;
	}
	
	 
	 
	 
	while(TRUE) {
		MTC_WAIT( 1 );

		CmnCallMsgReq = OFF;				 

		actsel_start_init();				 

		if( practice != 0x00  ){
			if( (practice >= 0x0C ) ){
 
				CmnRoundNum = 1;
			}
			else {
 
				CmnRoundNum = 0;
			}
		}

		 
		plyr_ang_set( 0, PlayerWrk[0].drct, PlayerWrk[0].bodydrct);
		plyr_ang_set( 1, PlayerWrk[1].drct + ((long)((65536.0 * ( 180 )) / 360.0)) , 
							   PlayerWrk[1].bodydrct + ((long)((65536.0 * ( 180 )) / 360.0))  );

 
		
		if (KumiMode == CmnSelMode) {
			level_dat_adr = &com_level[CmnDifficult][ Mod(CmnRoundNum, 7)+2 ];
		}
		else if( CmnMainSta	== 0x02  ) {
			level_dat_adr = &com_level[ 3 ][ 8 ];
		}
		else {
			level_dat_adr = &com_level[ CmnDifficult ][ CmnRoundNum ];
		}





	 
		for( plyr = 0; plyr < 2 ; plyr++ ){
			if( ( (PlayerWrk[plyr].actsta == 0x04 )	 
				||(PlayerWrk[plyr].actsta == 0x06 ))
		  	&& (PlayerWrk[plyr].actreq != 0xFF  )		 
			){
				throw_der_flg[plyr^1] = OFF;			 
			}

			if( (animeflg_bak[plyr]			== 0x02 )
			 && (PlayerWrk[plyr].animeflg	== 0x00 )
 		 && (PlayerWrk[plyr].actcode	== actcode_bak[plyr])
			){
				blow_der_flg[plyr]  = OFF;
				throw_der_flg[plyr] = OFF;
			}


			if (thr_dis_time[plyr] != 0) {
				thr_dis_time[plyr]--;		 
			}


		}

	 
		for( plyr = 0; plyr < 2 ; plyr++ ){








# 493 "act/act.c"

			
			OLDSW[plyr] = key_int_change(pad[plyr].old);
			NEWSW[plyr] = key_int_change(pad[plyr].shot);
			OFFSW[plyr] = key_int_change(pad[plyr].off);
			ONSW[plyr]  = key_int_change(pad[plyr].one_shot);

# 530 "act/act.c"


 
# 549 "act/act.c"

			newsw_buf[plyr][sw_buf_ix]	= NEWSW[plyr];
			onsw_buf[plyr][sw_buf_ix]	= ONSW[plyr];
			lonsw_buf[plyr][sw_buf_ix]	= ONSW[plyr];
																 
			if ((NEWSW[plyr] & 0xF0 ) != (OLDSW[plyr] & 0xF0 )) {
				lonsw_buf[plyr][sw_buf_ix] |= (NEWSW[plyr] & 0xF0 );
			}
 


			if( (actcode_bak[plyr] != PlayerWrk[plyr].actcode)
			 || ( (PlayerWrk[plyr].actsta	== 0x09 )
			 	&&(PlayerWrk[plyr].beathitsta == ON		) )
			){




				actcode_newest[plyr] = PlayerWrk[plyr].actcode;
				PlayerWrk[plyr].grplslip = OFF;
				throw_der_flg[plyr] = ON;		 

 		 

	 	if (PlayerWrk[plyr].actsta != actsta_bak[plyr]) {
				 
				if (thr_dis_blow_flg[plyr] != ON) {
					blow_der_flg[plyr]	= ON;	 
				}
				else {
					blow_der_flg[plyr]	= OFF;	 
				}
				thr_dis_blow_flg[plyr] = OFF;
	 	}




				thr_dis_flg[plyr] = OFF;
										 


				act_exe_time_old[plyr]	= act_exe_time[plyr];
												 
				act_exe_time[plyr]  = 0;		 

										 
												 
				if ((PlayerWrk[plyr].actsta == 0x04 )
				 || (PlayerWrk[plyr].actsta == 0x0A )
				 || (PlayerWrk[plyr].actsta == 0x06 )
				 || (PlayerWrk[plyr].actsta == 0x0B )
				) {
					if (PlayerWrk[plyr].actsta != actsta_bak[plyr]) {
															 
						thr_dis_time[plyr] = 15 ;
					}
					else {									 
						thr_dis_time[plyr] = 15 
													- thr_delay_time + 1;
						if (thr_dis_time[plyr] < 0) {
							thr_dis_time[plyr] = 0;
						}
					}
				}

			}










												 







			if( (PlayerWrk[plyr].actsta == 0x03 )		 
			 || (PlayerWrk[plyr].actsta == 0x02 )
			 || (PlayerWrk[plyr].actsta == 0x05 )
			){
				if( PlayerWrk[plyr].actcode != actcode_bak[plyr] ){
					AttackSpeedPick( PlayerWrk[plyr].actcode, plyr);
					atk_bfr[plyr]	= CmnAtkSpdBfr;
					atk_btw[plyr]	= CmnAtkSpdBtw;
					atk_aft[plyr]	= CmnAtkSpdAft;
					atk_time[plyr]	= atk_bfr[plyr];

				}
				if( PlayerWrk[plyr].attacksta != attacksta_bak[plyr] ){
					switch( PlayerWrk[plyr].attacksta ){
						case 0x00 :
							atk_time[plyr] = atk_bfr[plyr];
							break;
						case 0x01 :
							atk_time[plyr] = atk_btw[plyr];
							break;
						case 0x02 :
							atk_time[plyr] = atk_aft[plyr];
							break;
					}
				}
				if( CmnPolyPause == OFF ){
					atk_time[plyr]--;
				}
			}
# 673 "act/act.c"

										 
			pwrk_own = &PlayerWrk[plyr];
			if ( ((pwrk_own->actsta	== 0x04 )
				||(pwrk_own->actsta	== 0x06 ))
			 && (pwrk_own->animeflg == 0x02 )
			) {										 
				if (animeflg_bak[plyr] == 0x00 ) {
					thr_delay_time = 0;		 
				}
				thr_delay_time++;				 
			}

			 
			if (posestatus_bak[plyr] != PlayerWrk[plyr].posestatus) {
				pose_keep_time[plyr] = 0;
			}
			else if (pose_keep_time[plyr] < 999 ) {
				pose_keep_time[plyr]++;
			}



			 
			if (actreq_exe_time[plyr] < 999 ) {
				actreq_exe_time[plyr]++;
			}


			if( CmnPolyPause == OFF ){
				if (act_exe_time[plyr] < 999 ) {
					act_exe_time[plyr]++;		 
				}
			}
		}


	 
		for( plyr = 0; plyr < 2 ; plyr++ ){

			pwrk_own	= &PlayerWrk[ plyr ];
			rival		= plyr^1;
			pwrk_rival	= &PlayerWrk[ rival ];




			newsw_buf_adr	= newsw_buf[plyr];		 
			onsw_buf_adr	= onsw_buf[plyr];		 
			lonsw_buf_adr	= lonsw_buf[plyr];		 























		
		 
			cmd_conc_num = 0xFF ;

 
 
			








			if( (CmnPlaySta == 0x01 )
			 || ((CmnPlaySta == 0x02 ) && ( CmnWinPlayer == plyr) &&
			 		(pwrk_own->mancom == 0x01 ))
			){
				if( pwrk_own->mancom == 0x01  ){	 
					man_act_set();				 
				}
				else{

					if( pwrk_own->Ypos != 0 ){
	







 
							if(	(pwrk_rival->comboflg == ON) && 
								((practice >= 0x08 ) &&
								(practice <= 0x0B ))){
								wanpan = ON;
							}
							if(( pwrk_rival->actsta == 0x0B  ) ||
 
							   ( pwrk_own->actsta == 0x0D  )){
								wanpan = OFF;
							}
							com_act_set();			 
						}
	






				}
			}




 
			for (i = 0; i < 2; i++) {
				if ((PlayerWrk[i].actsta == 0x0B ) &&
					((PlayerWrk[i].actcode - 1) 
								== PlayerWrk[i ^ 0x01].actcode)) {
					if ((PlayerWrk[i].Xpos > (CmnRingXsize>>1)) ||
						(PlayerWrk[i].Xpos < -(CmnRingXsize>>1)) ||
						(PlayerWrk[i].Zpos > (CmnRingZsize>>1)) ||
						(PlayerWrk[i].Zpos < -(CmnRingZsize>>1))) {
						throw_der_flg[i ^ 0x01] = OFF;
					}
				}
			}
			
			
			act_conc[plyr] = cmd_conc_num;	 

			if( (CmnPlaySta == 0x01 ) && (PlayerWrk[plyr].mancom == 0x00 ) ){



			}
		}

	 

			{
				UINT8 of_plyr, df_plyr;

				if ((PlayerWrk[0x00 ].actsta == 0x04 )
				 || (PlayerWrk[0x00 ].actsta == 0x06 )
				) {
					of_plyr = 0x00 ;
					df_plyr = 0x01 ;
				}
				else if ((PlayerWrk[0x01 ].actsta == 0x04 )
				 ||		 (PlayerWrk[0x01 ].actsta == 0x06 )
				) {
					of_plyr = 0x01 ;
					df_plyr = 0x00 ;
				}

				if (thr_dis_flg[0] != thr_dis_flg[1]) {	 
					if (thr_dis_flg[of_plyr] == ON) {	 
						thr_dis_time[df_plyr] = 0;
					}
					else {								 
						thr_dis_time[of_plyr] = 0;
						PlayerWrk[df_plyr].actreq = 0xFF ;
					}
				}

				thr_dis_flg[0] = OFF;
				thr_dis_flg[1] = OFF;
			}


	 
		for( plyr = 0; plyr < 2 ; plyr++ ){

	


			if( act_conc[plyr] != 0xFF  ){
				actreq_newest[plyr] = act_conc[plyr];
	
				actreq_exe_time[plyr] = 0;
		




	
			}
			actsta_bak[plyr]	= PlayerWrk[plyr].actsta;
			attacksta_bak[plyr]	= PlayerWrk[plyr].attacksta;
			actcode_bak[plyr]	= PlayerWrk[plyr].actcode;
			actreq_bak[plyr]	= PlayerWrk[plyr].actreq;
			act_hitp_bak[plyr]	= PlayerWrk[plyr].hitp;
			actcancel_bak[plyr]	= PlayerWrk[plyr].actcancel;
			animeflg_bak[plyr]	= PlayerWrk[plyr].animeflg;
			posestatus_bak[plyr]= PlayerWrk[plyr].posestatus;
			mountsta_bak[plyr]	= PlayerWrk[plyr].mountsta;
			cmd_chk_actsta_bak_bak[plyr]	= cmd_chk_actsta_bak[plyr];
			cmd_chk_actsta_bak[plyr]		= cmd_chk_actsta[plyr];
		}
		roundfin_bak		= CmnRoundFin;
		bak_playsta			= CmnPlaySta;			 
		
	 

		sw_buf_ix_bak_bak	= sw_buf_ix_bak;
		sw_buf_ix_bak		= sw_buf_ix;
		sw_buf_ix			= (sw_buf_ix + 1) & (0x80  - 1);


 
 
	}
}
 
 
 
 
 
 
void	actsel_start_init( void )
{
	int j;
 
	if( (CmnRoundFin != roundfin_bak) && (CmnRoundFin == ON) ){
		round_start_init_wait	= 10;	 
	}

	if( round_start_init_wait >= 0 ){		 
		round_start_init_wait--;
		if( round_start_init_wait < 0 ){	 

			for( plyr = 0; plyr < 2 ; plyr++ ){

				com_ctrl[plyr].combo_flg = OFF;






			}
			com_exp_up = 9;				 
		}
	}

 
	if((CmnPlaySta == 0x00 ) && (CmnPlaySta != bak_playsta)){
 
		set_start_init_wait	= 0;		 
	}

	if( set_start_init_wait >= 0 ){			 
		set_start_init_wait--;
		if( set_start_init_wait < 0 ){		 

			for( plyr = 0; plyr < 2 ; plyr++ ){
				actreq_buf_init();					 
				PlayerWrk[plyr].actreq	= 0xFF ;	 

				com_init(plyr);





			}
			sw_buf_init2_init();				 





		}
	}
# 988 "act/act.c"

}
 
 
 
 
 
 
 
 
UINT8	actreq_buf_chk( UINT8 chk_act)
{
# 1014 "act/act.c"

	int i;

	for (i = 0; i < 4 ; i++) {				 
		if (act_req[plyr][i] == chk_act) return ON;
	}

	if (pwrk_own->actreq == chk_act) return ON;		 

	return OFF;
}
 
 
 
 
 
 
 
 
void	plyr_ang_set( UINT8 plyr, ANGLE plyr_line_ang, 
					              ANGLE plyr_line_ang_body )
{
	ANGLE	line_drct_gap, line_drct_gap_body, gap, gap2;

	line_drct_gap = plyr_line_ang - CmnLineDrct;	 
	line_drct_gap_body = plyr_line_ang_body - CmnLineDrct;

	if( (PlayerWrk[plyr].actsta != 0x04 )		 
	 && (PlayerWrk[plyr].actsta != 0x06 ) ){	 
	 	if( (PlayerWrk[plyr].actcode >= 0x59 )		 
	 	 && (PlayerWrk[plyr].actcode <= 0x5E )
		){
			p_disp_drct[plyr] = plyr ^ CmnDispdrct;		 
		}
		else{
			if( ((line_drct_gap + 0x4000) & 0xFFFF) < 0x8000 ){
														 
				p_disp_drct[plyr] = plyr ^ CmnDispdrct;	 
			}
			else{
				p_disp_drct[plyr] = plyr ^ CmnDispdrct ^ 1; 
			}
		}
	}
	gap = line_drct_gap + ((long)((65536.0 * ( 240 )) / 360.0)) ;
	gap2= ((long)((65536.0 * ( 120 )) / 360.0)) ;
	if( (gap & 0xFFFF ) < (gap2 & 0xFFFF )){ 
	 	p_turn_drct[plyr] = 1 ;		 
	}
	else{
		p_turn_drct[plyr] = 0 ;			 
	}
 
	gap = line_drct_gap_body + 0x1555;
	if( (gap & 0xFFFF ) < ((long)((65536.0 * ( 30 * 2 )) / 360.0))  ){
		throw_drct[plyr] = 0x00 ;			 
	}
	else{
 
		gap = line_drct_gap_body + 0x8000 + 0x1555;
		if( (gap & 0xFFFF ) < ((long)((65536.0 * ( 30 * 2 )) / 360.0))   ){
		 	throw_drct[plyr] = 0x01 ;		 
		}
		else{
			throw_drct[plyr] = 0xFF ;		 
		}
	}
}

 
 
 
void	sw_buf_init2_init( void )
{
	sw_buf_init_flg = ON;
	sw_buf_init_cnt = 0;

}

 
 
 
void	man_act_set( void )
{

	int i;
	UINT32	*onsw_buf_wrk, *lonsw_buf_wrk;


	pre_flg = OFF;

	pwrk_own->guardsta = 0 ;				 

	if( (pwrk_own->actsta != actsta_bak[plyr])	 
	 && ( ((pwrk_own->actsta >= 0x07  ) && (pwrk_own->actsta <= 0x0C ))
	 	|| (pwrk_own->actsta == 0x0F )		 
	 	|| (pwrk_own->actsta == 0x00 ) )		 
	 ){
	 	actreq_buf_init();						 
		PlayerWrk[plyr].actreq  = 0xFF ;
	}

# 1132 "act/act.c"


 
	if (((act_req_ix[plyr] <= 0) && (pwrk_own->actreq == 0xFF ))
												 
	 || ((cmd_chk_actsta[plyr] == 0x00 ) && (pwrk_own->actsta != 0x00 ))
	){											 
	 	cmd_chk_actsta[plyr] = pwrk_own->actsta; 
	}
	if( ((cmd_chk_actsta[plyr] != cmd_chk_actsta_bak[plyr])
	   &&(cmd_chk_actsta[plyr] == 0x00 ))		 
	 || ( ( (cmd_chk_actsta[plyr] == 0x07  )	 
	 	  ||(cmd_chk_actsta[plyr] == 0x09 ) )	 
	   &&(actcancel_bak[plyr] != pwrk_own->actcancel)	 
	   &&(pwrk_own->actcancel == ON) 					)
	){
 			 
		actreq_newest[plyr]	= 0xFF ;

		precede_input_chk();				 

		buf_act_req();							 
		cmd_conc_num = 0xFF ;					 
		p_chk_flg = ON;							 
	}
	
	switch( cmd_chk_actsta[plyr] ){
		case 0x00 :			 
			man_act_set_norm();
			if( cmd_conc_num != 0xFF  ){
				cmd_chk_actsta[plyr] = ActcodeSta( cmd_conc_num, plyr );
			}
			break;

		case 0x03 :			 
		case 0x05 :			 
		case 0x02 :			 
			if( blow_der_flg[plyr] == ON ) {
			if( (cmd_chk_actsta[plyr] == cmd_chk_actsta_bak[plyr])
			 && (cmd_chk_actsta[plyr] == cmd_chk_actsta_bak_bak[plyr])
			){
												 
				if( (*(onsw_buf_adr + sw_buf_ix_bak) & 0x0F) != 0 ){
												 

					switch( input_sync( sw_buf_ix, 1  ) & 0x0F  ){
						case 0x0001 :		sta_cmd_chk( 0x19  );
										if( cmd_conc_num == 0xFF  ){
											derive_cut();
										}
										break;
						case 0x0002 :		sta_cmd_chk( 0x1A  );	break;
						case 0x0004 :		sta_cmd_chk( 0x1B  );	break;
						case (0x0001 | 0x0002 ) :		sta_cmd_chk( 0x1C  );	break;
						case (0x0001 | 0x0004 ) :		sta_cmd_chk( 0x1D  );	break;
						case (0x0002 | 0x0004 ) :		sta_cmd_chk( 0x1E  );	break;
						case (0x0001 | 0x0002 | 0x0004 ) :	sta_cmd_chk( 0x1F  );	break;
					}








				}
			}
			}

			buf_act_req();						 
			break;

		case 0x04 :
			if( (cmd_chk_actsta[plyr] == cmd_chk_actsta_bak[plyr])
			 && (cmd_chk_actsta[plyr] == cmd_chk_actsta_bak_bak[plyr])
			){
				if( (*(onsw_buf_adr + sw_buf_ix_bak) & 0x0F) != 0 ){

					if ((throw_der_flg[plyr] == ON)		 
					 && (pwrk_own->actreq == 0xFF )
					) {
						if (thr_dis_time[plyr] > 0) {	 
							thr_dis_time[plyr] = 30 ;
														 
							thr_dis_flg[plyr] = ON;		 
						}
						else {
							sta_cmd_chk(0x05 );	 
							if (cmd_conc_num == 0xFF ) {
								thr_dis_time[plyr] = 30 ;
							}			 
						}
					}
# 1239 "act/act.c"

				}
			}
			buf_act_req();
			break;

		case 0x06 :
			if( (cmd_chk_actsta[plyr] == cmd_chk_actsta_bak[plyr])
			 && (cmd_chk_actsta[plyr] == cmd_chk_actsta_bak_bak[plyr])
			){
				if( (*(onsw_buf_adr + sw_buf_ix_bak) & 0x0F) != 0 ){

					if ((throw_der_flg[plyr] == ON)		 
					 && (pwrk_own->actreq == 0xFF )
					) {
						if (thr_dis_time[plyr] > 0) {	 
							thr_dis_time[plyr] = 30 ;
														 
							thr_dis_flg[plyr] = ON;		 
						}
						else {
							sta_cmd_chk(0x06 );	 
							if (cmd_conc_num == 0xFF ) {
								thr_dis_time[plyr] = 30 ;
							}			 
						}
					}
# 1279 "act/act.c"

				}
			}
			buf_act_req();
			break;

		case 0x07 :			 
			if( pwrk_own->actcancel == ON ){
				man_act_set_norm();
			}
			else{
				man_guard_chk();					 
			}
			break;

		case 0x01 :			 
			if (pwrk_own->actreq == 0xFF ) {
				if( p_chk_flg == ON ){
					sta_cmd_chk(0x07 );
					buf_act_req();					 
				}
				else{
					man_act_set_jump();				 
				}
			}
			break;

		case 0x08 :			 
			man_stagger_recover();				 
			break;

		case 0x09 :			 
			if( pwrk_own->actcancel == ON ){
				man_act_set_norm();
			}
			else if( pwrk_own->mountsta == 1  ){
				ukemi_input_chk2();
			}
			break;

		case 0x0A :			 
		case 0x0B :			 

			if (pwrk_own->actcode == 0x4E ) {
				if( (*(onsw_buf_adr + sw_buf_ix_bak) & 0x0F) != 0 ){
					sta_cmd_chk_e(0x10 );	 
				}
			}
			else {
				if ((input_sync(sw_buf_ix, 1 ) & 0x0F ) == (0x0001 | 0x0002 | 0x0004 ) ){
					if ((throw_der_flg[plyr] == ON)		 
					 && (pwrk_own->actreq == 0xFF )
					) {
						if (thr_dis_time[plyr] > 0) {	 
							thr_dis_time[plyr] = 30 ;
														 
							sta_cmd_chk_e(0x10 );	 
							thr_dis_flg[plyr] = ON;		 
						}
						else {
							sta_cmd_chk_e(0x10 );	 
							if (cmd_conc_num == 0xFF ) {
								thr_dis_time[plyr] = 30 ;
							}			 
						}
					}
				}
			}
			buf_act_req();						 

# 1371 "act/act.c"

			if( pwrk_own->mountsta == 1  ){
 
				ukemi_input_chk2();
			}
			break;


		case 0x0C :			 
			man_act_set_down();						 
			break;

		case 0x0E :			 
			buf_act_req();						 
			break;

		case 0x0F :			 
			if( pwrk_own->actsta != actsta_bak[plyr ] ){
				hit_dwna[plyr] = pwrk_rival->actcode;
			}
			break;
		case 0x0D :			 
 
			if( blow_der_flg[plyr] == ON ){

			if( getup_code_chk( pwrk_own->actcode ) == ON ){
				man_act_set_getup_derive();
			}
			else{
				sta_cmd_chk( 0x11  );				 
				buf_act_req();						 
			}
 
			}
			break;

	}
	p_chk_flg = OFF;
}
 
 
 
void	ukemi_input_chk2( void )
{
	int		i;
	UINT8	uke_scs_time = ukemi_time[0];		 

	 
	if (act_exe_time[plyr] == 1) {
					 
					 
		if (uke_scs_time > (act_exe_time_old[plyr] + 1)) {
			uke_scs_time = (act_exe_time_old[plyr] + 1);
		}
	}
	else {
		if (uke_scs_time > act_exe_time[plyr]) {
			uke_scs_time = act_exe_time[plyr];
		}
	}

	pwrk_own->ukemi_flg = OFF;

	for (i = 0; i < uke_scs_time; i++) {
		if ((input_sync(((sw_buf_ix - i) & (0x80 -1)), 2) & 0x0F )
		 == (0x0001 | 0x0002 | 0x0004 )) {					 
			if (pwrk_own->ukemi_flg == ON) {	 
				pwrk_own->ukemi_flg = OFF;		 
				break;
			}
			pwrk_own->ukemi_flg = ON;			 
			i++;
		}
	}


# 1505 "act/act.c"

}

 
 
 
void	man_act_set_norm( void )
{
	if( p_turn_drct[plyr] == 0  ){		 
		if( (*(onsw_buf_adr + sw_buf_ix_bak) & 0x0F) == 0 ){
			sta_cmd_chk( 0x00  );		 
		}
		else{

			switch( input_sync( sw_buf_ix, 1  ) & 0x0F  ){
				case 0x0001 :		sta_cmd_chk( 0x12  );		break;
				case 0x0002 :		sta_cmd_chk( 0x13  );		break;
				case 0x0004 :		sta_cmd_chk( 0x14  );		break;
				case (0x0001 | 0x0002 ) :		sta_cmd_chk( 0x15  );	break;
				case (0x0001 | 0x0004 ) :		sta_cmd_chk( 0x16  );	break;
				case (0x0002 | 0x0004 ) :		sta_cmd_chk( 0x17  );	break;
				case (0x0001 | 0x0002 | 0x0004 ) :	sta_cmd_chk( 0x18  );	break;
			}



		}
	}
	else{
		if( (*(onsw_buf_adr + sw_buf_ix_bak) & 0x0F) == 0 ){
			sta_cmd_chk( 0x02  );			 
		}
		else{
			sta_cmd_chk( 0x03  );		 
		}
	}
	buf_act_req();						 
	man_guard_chk();					 
}
 
 
 
void	derive_cut( void )
{




	blow_der_flg[plyr]	= OFF;
	throw_der_flg[plyr]	= OFF;

}
 
 
 
 
 
 
 
void	actreq_buf_init( void )
{
	int i;

	for( i = 0; i < 4 ; i++ ){
		act_req[plyr][i] = 0xFF ;			 
	}
	act_req_ix[plyr] = 0;					 

}
# 1717 "act/act.c"

 
 
 
void	precede_input_chk( void )
{




	UINT8	sw_buf_ix_sub, sw_buf_ix_bak_sub, sw_buf_ix_bak_bak_sub;
	int		i;
	UINT8	key_chk;							 


	key_chk					= 0 ;		 
	pre_flg					= ON;				 

	sw_buf_ix_sub			= sw_buf_ix;		 
	sw_buf_ix_bak_sub		= sw_buf_ix_bak;
	sw_buf_ix_bak_bak_sub	= sw_buf_ix_bak_bak;

	cmd_chk_actsta_bak_bak[plyr]	= cmd_chk_actsta_bak[plyr];
	cmd_chk_actsta_bak[plyr]		= cmd_chk_actsta[plyr];
	cmd_chk_actsta[plyr]			= 0x00 ;		 

	 

	for( i = 1; i <= 12  ; i++ ) {				 
		if( (*(onsw_buf_adr + ((sw_buf_ix_bak - i) & (0x80  - 1))) 
													& 0x0F ) != 0 ){
			sw_buf_ix			= (sw_buf_ix		 - i ) & (0x80  - 1);
			sw_buf_ix_bak		= (sw_buf_ix_bak	 - i ) & (0x80  - 1);
			sw_buf_ix_bak_bak	= (sw_buf_ix_bak_bak - i ) & (0x80  - 1);
			key_chk = 2 ;

			if ((actsta_bak[plyr] == 0x07 )	 
			 && (i <= 5 )			 
			) {
				pre_flg	= OFF;					 
			}

			break;
		}
	}
	if (key_chk == 0 ) {						 
		for( i = 1; i <= 12  ; i++ ) {
			if( (*(onsw_buf_adr + ((sw_buf_ix_bak - i) & (0x80  - 1)))
														& 0xF0 ) != 0 ){
				sw_buf_ix			= (sw_buf_ix		 - i )
														 & (0x80  - 1);
				sw_buf_ix_bak		= (sw_buf_ix_bak	 - i )
														 & (0x80  - 1);
				sw_buf_ix_bak_bak	= (sw_buf_ix_bak_bak - i )
														 & (0x80  - 1);
				key_chk = 1 ;
				break;
			}
		}
	}

	cmd_conc_num = 0xFF ;

	if (key_chk != 0 ) {		 

 
		if (key_chk == 2 ) {			 
			if( p_turn_drct[plyr] == 0  ){	 

				switch(input_sync(sw_buf_ix, 1 ) & 0x0F  ){
					case 0x0001 :		sta_cmd_chk( 0x12  );		break;
					case 0x0002 :		sta_cmd_chk( 0x13  );		break;
					case 0x0004 :		sta_cmd_chk( 0x14  );		break;
					case (0x0001 | 0x0002 ) :		sta_cmd_chk( 0x15  );	break;
					case (0x0001 | 0x0004 ) :		sta_cmd_chk( 0x16  );	break;
					case (0x0002 | 0x0004 ) :		sta_cmd_chk( 0x17  );	break;
					case (0x0001 | 0x0002 | 0x0004 ) :	sta_cmd_chk( 0x18  );	break;
				}



			}
			else {
				sta_cmd_chk( 0x03  );		 
			}
		}
		else {									 
			if( p_turn_drct[plyr] == 0  ){	 
				sta_cmd_chk( 0x00  );		 
			}
			else {
				sta_cmd_chk( 0x02  );			 
			}
		}




		if( cmd_conc_num != 0xFF  ){
			actreq_newest[plyr] = cmd_conc_num;

			actreq_exe_time[plyr] = 0;

		}

		if( cmd_conc_num != 0xFF  ){
			cmd_chk_actsta[plyr]	= ActcodeSta( cmd_conc_num, plyr );
			if( (cmd_chk_actsta[plyr] == 0x00 )	 
		 	&& (cmd_conc_num != 0x03  	)	 
		 	&& (cmd_conc_num != 0x04 	)	 
		 	&& (cmd_conc_num != 0x10 	)	 
		 	&& (cmd_conc_num != 0x11 	)	 
			){										 
				cmd_conc_num = 0xFF ;				 
				if( act_req_ix[plyr] > 0 ){
					act_req_ix[plyr]--;
					act_req[plyr][act_req_ix[plyr]] = 0xFF ;
				}
			}
			else if (cmd_chk_actsta[plyr] == 0x03 ) {
				blow_der_flg[plyr] = ON;
			}
			
			actreq_newest[plyr]		= cmd_conc_num;

 
			actreq_exe_time[plyr]	= 0;

			
			cmd_chk_actsta_bak[plyr]	 = cmd_chk_actsta[plyr];
			if (back_time != 2) {
				cmd_chk_actsta_bak_bak[plyr] = cmd_chk_actsta[plyr];
			}
		}
	}

	sw_buf_ix			= sw_buf_ix_sub;
	sw_buf_ix_bak		= sw_buf_ix_bak_sub;
	sw_buf_ix_bak_bak	= sw_buf_ix_bak_bak_sub;
}



 
 
 
void	sta_cmd_chk( int plyr_sta )
{
	if( plyr_sta >= 0x19  ){
		der_chk_flg[plyr] = ON;
	}
	else{
		der_chk_flg[plyr] = OFF;
	}
	
	if (plyr == 0) {
		cmd_data_tbl	= cmd_data_chr_1[plyr_sta];
											 
	}
	else {
		cmd_data_tbl	= cmd_data_chr_2[plyr_sta];
											 
	}

 
	cmd_chk( plyr );							 
	std_flg[plyr] = OFF;
	
	if( cmd_conc_num == 0xFF  ){				 
	 
		der_chk_flg[plyr] = OFF;
		cmd_data_tbl = cmd_standard[plyr_sta];	 
		cmd_chk( plyr );						 
		std_flg[plyr] = ON;
	}

}
 
 
 
void	sta_cmd_chk_e( int plyr_sta )
{
	if ((plyr ^ 1) == 0) {
		cmd_data_tbl	= cmd_data_chr_1[plyr_sta];
											 
	}
	else {
		cmd_data_tbl	= cmd_data_chr_2[plyr_sta];
											 
	}

 
	cmd_chk( plyr^1 );						 

	if( cmd_conc_num == 0xFF  ){				 
	 
		cmd_data_tbl = cmd_standard[plyr_sta];	 
		cmd_chk( plyr^1 );					 
	}
}
 
 
 
void	cmd_chk( Uint8	ply_no )
{
	int		i,cmd_num;

	i 				= 0;					 
	cmd_data_adr	= *(cmd_data_tbl + i);
											 
	cmd_break_flg	= OFF;					 
	cmd_conc_flg	= OFF;					 
	cmd_time		= 0;					 
	cmd_chk_time	= 0;					 
	cmd_fst_flg		= ON;					 
	sw_buf_ix_wk	= sw_buf_ix;			 

 
 
 
	while( cmd_data_adr != 0x00  ){
											 
		cmd_num = *cmd_data_adr;			 
		cmd_data_adr--;						 

		switch( cmd_num ){
			case 0x00 :	prg_cmd_time();		 
								break;
			case 0x01 :	prg_cmd_wait();		 
								break;
			case 0x10 :	prg_cmd_key();		 
								break;
			case 0x11 :	prg_cmd_sync();		 
								break;
			case 0x12 :	prg_cmd_hold();		 
								break;
			case 0x13 :	prg_cmd_only();		 
								break;
			case 0x14 : prg_cmd_limit();	 
								break;
			case 0x15 :
								prg_cmd_sync_only(); 
								break;
			case 0x20 :prg_actreq_chk();	 
								break;
			case 0x2D :
								prg_actreq_chk2();	 
								break;
			case 0x21 :	prg_act_chk();		 
								break;
			case 0x28 :	prg_act_chk2();		 
								break;
			case 0x2E :	prg_act_chk3();		 
								break;
			case 0x29 :prg_nowact_chk();	 
								break;
			case 0x22 :	prg_e_act_chk();	 
								break;
			case 0x23 :	prg_throw_chk();	 
								break;
			case 0x24 :	prg_turn_chk();		 
								break;
			case 0x25 :	prg_sit_chk();		 
								break;
			case 0x2A :	prg_stand_chk();	 
								break;
			case 0x2B :	prg_der_chk();		 
								break;
			case 0x2C :
								prg_act_time_chk();	 
								break;
			case 0x26 :	prg_down_chk();		 
								break;
			case 0x31 :
								prg_cmdfst_kill();	 
								break;
			case 0x32 :
								prg_getup_side();	 
								break;

			 
			 
			 
			case 0x33 :		 
								thr_dis_blow_flg[plyr] = OFF;
								break;

			case 0xFFFF :	prg_act_set();		 
								break;
		}
		if( cmd_break_flg == ON ){				 
			i++;									 
			cmd_data_adr	= *(cmd_data_tbl + i);
													 
			cmd_break_flg	= OFF;					 
			cmd_time		= 0;					 
			cmd_chk_time	= 0;					 
			cmd_fst_flg		= ON;					 
			sw_buf_ix_wk	= sw_buf_ix;			 
		}
		else{
			if( cmd_conc_flg == ON ){				 




				if (act_req_ix[plyr] < 4 ) {

				 	act_req[plyr][act_req_ix[plyr]] = cmd_conc_num;	 
				 	act_req_ix[plyr]++;			 
				 }
				 break;								 
			}
		}
	}
}
 
 
 
void	cmd_time_chk( void )
{








	cmd_time--;							 
	sw_buf_ix_wk = (sw_buf_ix_wk - 1) & (0x80  - 1);	 
	if( cmd_time < 0 ){
		cmd_break_flg = ON;					 
	}
	
	cmd_chk_time++;

}
 
 
 
void	fst_cmd_chk( void )
{
	if( cmd_fst_flg == ON ){
		cmd_fst_flg = OFF;					 
	}
	if( (lev_chk == 0) || (lev_chk > 0x0F) ){		 
		sw_buf_ix_wk = (sw_buf_ix_wk - 1  ) & (0x80  - 1);
		cmd_chk_time++;
	}
}
 
 
 
void	lev_chk_flip( void )
{
	if( p_disp_drct[plyr] == 1  ){
		lev_chk = (lev_chk & 0xFF3F)			 
				| ((lev_chk & 0x0080) >> 1) | ((lev_chk & 0x0040) << 1);
	}
}

 
 
 
void	man_stagger_recover( void )
{
 

	if( actsta_bak[plyr] != 0x08  ){
		rcv_btn_cnt[plyr]	= 0;			 
	}

	if( (rcv_btn_cnt[plyr] < 10 )
	 && (ONSW[plyr] != 0)
	){
		pwrk_own->animespd = ((FIXED)(65536.0 * (  2.0  )))   ;		 
		rcv_btn_cnt[plyr]++;				 
	}
}
 
 
 
void	man_guard_chk( void )
{
	if( p_turn_drct[plyr] == 0  ){		 
		if( (plyr ^ CmnDispdrct ) == 0 ){		 
			if( ((NEWSW[plyr] & 0xF0) == 0x0080  ) ||	 
				((NEWSW[plyr] & 0xF0) == (0x0080 | 0x0020 )  )){	 
					pwrk_own->guardsta = 1 ;	 
			}
			if( (NEWSW[plyr] & 0xF0) == (0x0080 | 0x0010 )  ){	 
					pwrk_own->guardsta = 2 ;	 
			}
		}
		else{									 
			if( ((NEWSW[plyr] & 0xF0) == 0x0040  )	||	 
				((NEWSW[plyr] & 0xF0) == (0x0040 | 0x0020 )  )){	 
					pwrk_own->guardsta = 1 ;	 
			}
			if( (NEWSW[plyr] & 0xF0) == (0x0040 | 0x0010 )  ){	 
					pwrk_own->guardsta = 2 ;	 
			}
		}
	}
}
 
 
 
void	man_act_set_jump( void )
{
 
	switch( pwrk_own->jmpsta ){
		case 0 :					 
			sta_cmd_chk(0x07 );
			break;

		case 1 :					 
		case 2 :					 
			switch( pwrk_own->jmpdrct ){
				case 0 :					 
					sta_cmd_chk(0x09 );
					break;
				case 1 :						 
					sta_cmd_chk(0x08 );
					break;
				case 2 :					 
					sta_cmd_chk(0x0A );
					break;
			}
			break;

		case 3 :					 
			break;
	}
 

	buf_act_req();						 
}

 
 
 
void	man_act_set_down( void )
{
 
	if( pwrk_own->actsta != actsta_bak[plyr] ){
		down_time_calc();							 
	}

	switch( down_sta[plyr] ){
 
		case 0 :
 
 
			man_down_recover();					 
			if( down_time[plyr] <= 0 ){			 
				getup_time[plyr] = 20 ;	 
				down_sta[plyr]	 = 1 ;		 
			}
			break;

 
		case 1 :
			if( pwrk_own->downstatus == 0x00  ){
				if( pwrk_own->downdrct == 0x00  ){
					sta_cmd_chk(0x0B );	 
				}
				else{
					sta_cmd_chk(0x0C );	 
				}
			}
			else{
				if( pwrk_own->downdrct == 0x00  ){
					sta_cmd_chk(0x0D );	 
				}
				else{
					sta_cmd_chk(0x0E );	 
				}
			}
			if( act_req_ix[plyr] != 0 ){	 
				buf_act_req();					 
			}
			else{							 
				getup_time[plyr]--;				 
				if( getup_time[plyr] < 0 ){		 
					man_act_set_getup_norm();	 
				}
			}
			break;

	}
}
 
 
 
void	down_time_calc( void )
{
	struct	DOWNTIME	*dt_dat_adrs;
	UINT8	down_act;

	switch( actsta_bak[plyr] ){
		case 0x09 :						 
			down_time[plyr]			= pwrk_own->lastdamage + -14 ;
			break;

		case 0x0A :						 
		case 0x0B :						 
			down_time[plyr]			= pwrk_own->lastdamage;
			dt_dat_adrs = throw_down_time_rev_dat[plyr ^ 1];
			while (dt_dat_adrs->downact != 0xFF ) {	 
				if (dt_dat_adrs->downact == actcode_bak[plyr]) {
					down_time[plyr] += dt_dat_adrs->downtime;
 
					break;
				}
				dt_dat_adrs++;						 
			}
			break;

		case 0x0F :						 
			if (rival == 0) {
				dt_dat_adrs
					= dwna_down_time_dat_1;
			}
			else {
				dt_dat_adrs
					= dwna_down_time_dat_2;
			}
			down_time[plyr] = 0;
			while( dt_dat_adrs->downact != 0xFF  ){	 
				if( dt_dat_adrs->downact == hit_dwna[plyr] ){ 
					down_time[plyr] = dt_dat_adrs->downtime;
					break;
				}
				dt_dat_adrs++;						 
			}

			break;

		default:							 
			if (plyr == 0) {
				dt_dat_adrs = down_time_dat_1;
			}
			else {
				dt_dat_adrs = down_time_dat_2;
			}
			down_act	= actcode_bak[plyr];

			down_time[plyr] = 0;
			while( dt_dat_adrs->downact != 0xFF  ){	 
				if( dt_dat_adrs->downact == down_act ){	 
					down_time[plyr] = dt_dat_adrs->downtime;
					break;
				}
				dt_dat_adrs++;						 
			}

			break;
	}

	if( down_time[plyr] > 0 ){
		down_sta[plyr] = 0 ;				 
	}
	else{
		getup_time[plyr] = 20 ;		 
		down_sta[plyr]	 = 1 ;			 
	}

}
 
 
 
void	man_down_recover( void )
{
	UINT8 lev_wrk;

	down_time[plyr] -= 1 ;				 
	lev_wrk = ONSW[plyr];							 
	if( lev_wrk != 0 ){
		down_time[plyr] -= 4 ;		 
	}

	if( down_time[plyr] < 0 ){					 
		down_time[plyr] = 0;
	}
}
 
 
 
void	man_act_set_getup_norm( void )
{
	UINT8	getup_actcode_norm[2][2] = {				 
			{ 0x1A 		,0x1B 		},	 
			{ 0x1C 		,0x1D 		},	 
	};
	UINT8	getup_actcode_sit[2][2] = {					 
			{ 0x26 	,0x27 	},	 
			{ 0x28 	,0x29 	},	 
	};
	UINT8	getup_actcode_rear[2][2] = {				 
			{ 0x22 		,0x23 		},	 
			{ 0x24 	,0x25 		},	 
	};
	UINT8	getup_actcode_rearsit[2][2] = {				 
			{ 0x2E 	,0x2F 	},	 
			{ 0x30 ,0x31 	},	 
	};




	UINT8	lev_wrk = *(newsw_buf_adr + sw_buf_ix) & 0xF0 ;

	
		     											 
	if( ( ((CmnDispdrct ^ plyr) == 0 )					 
		     &&((*(newsw_buf_adr + sw_buf_ix) & (0x0080 | 0x0010 )  & 0xF0 ) == (0x0080 | 0x0010 ) ) )
		  || ( ((CmnDispdrct ^ plyr) == 1 )					 
		     &&((*(newsw_buf_adr + sw_buf_ix) & (0x0040 | 0x0010 )  & 0xF0 ) == (0x0040 | 0x0010 ) ) )
	){
		pwrk_own->actreq =
			getup_actcode_rearsit[pwrk_own->downstatus][ pwrk_own->downdrct ];
	}
	else if( (*(newsw_buf_adr + sw_buf_ix) & 0x0010 ) != 0 ){	 
		pwrk_own->actreq =
			getup_actcode_sit[ pwrk_own->downstatus ][ pwrk_own->downdrct ];
	}
	else if( ( ((CmnDispdrct ^ plyr) == 0 )					 
		     &&((*(newsw_buf_adr + sw_buf_ix) & 0x0080 ) != 0) )
		  || ( ((CmnDispdrct ^ plyr) == 1 )					 
		     &&((*(newsw_buf_adr + sw_buf_ix) & 0x0040 ) != 0) )
	){
		pwrk_own->actreq =
			getup_actcode_rear[ pwrk_own->downstatus ][ pwrk_own->downdrct ];
	}
	else{													 
		pwrk_own->actreq =
			getup_actcode_norm[ pwrk_own->downstatus ][ pwrk_own->downdrct ];
	}
}
 
 
 
void	man_act_set_getup_derive( void )
{
# 2380 "act/act.c"

	sta_cmd_chk( 0x0F  );

	buf_act_req();								 
}
 
 
 
UINT8	ringside_chk( UINT8 plyr, FIXED  chk_range, INT32 plyr_ang )
{
	FIXED 	chk_x_pos, chk_z_pos;
	UINT8	chk_flg;

 
	chk_x_pos = PlayerWrk[plyr].Xpos + slMulFX(slCos(plyr_ang), chk_range);
 
	chk_z_pos = PlayerWrk[plyr].Zpos + slMulFX(slSin(plyr_ang), chk_range);
	
	if( (chk_x_pos < (-CmnRingXsize >> 1)) || (chk_x_pos > (CmnRingXsize >> 1))
	 || (chk_z_pos < (-CmnRingZsize >> 1)) || (chk_z_pos > (CmnRingZsize >> 1))
	){
		chk_flg = ON;
	}
	else{
		chk_flg = OFF;
	}

	return( chk_flg );
}
 
 
 
UINT8	dangerzone_chk( FIXED  chk_x_pos, FIXED  chk_z_pos )
{
	UINT8	chk_flg;
# 2427 "act/act.c"

	if( (chk_x_pos < (-CmnDangerXsize >> 1))
	 || (chk_x_pos > ( CmnDangerXsize >> 1))
	 || (chk_z_pos < (-CmnDangerZsize >> 1))
	 || (chk_z_pos > ( CmnDangerZsize >> 1))
	){
		chk_flg = ON;
	}
	else{
		chk_flg = OFF;
	}

	return( chk_flg );
}
 
 
 
void	auto_guard( void )
{
	switch( pwrk_rival->atkheight ){
		case 1 :				 
			if( practice != 0x07  ){
			if( pwrk_own->posestatus == 0x00  ){
				pwrk_own->guardsta = 1 ;		 
			}
			else{
				pwrk_own->guardsta = 2 ;		 
			}
			}
			break;

		case 2 :				 
			if( practice != 0x07  ){
			pwrk_own->guardsta = 1 ;		 
			}
			break;

		case 3 :				 
			if( practice != 0x06  ){
			pwrk_own->guardsta = 2 ;		 
			}
			break;
	}
}
 
 
 
UINT16	rand_limit( UINT16 rand_max )
{
	UINT16	get_rand;

 
 
	get_rand = Mod(slRandom(), rand_max);
	
	return( get_rand );
}
 
 
 
UINT8	act_punch_chk( void )
{
	UINT8	chk_flg;

	if( ((pwrk_rival->actsta == 0x03 ) || (pwrk_rival->actsta == 0x02 ))
	 && ( (pwrk_rival->hitgrasp == 0x04 )			 
		||(pwrk_rival->hitgrasp == 0x06 )			 
		||(pwrk_rival->hitgrasp == 0x08 ) )		 
	){
		chk_flg = ON;
	}
	else{
		chk_flg = OFF;
	}

	return( chk_flg );
}
 
 
 
UINT8	act_kick_chk( void )
{
	UINT8	chk_flg;

	if( ((pwrk_rival->actsta == 0x03 ) || (pwrk_rival->actsta == 0x02 ))
	 && ( (pwrk_rival->hitgrasp == 0x05 )			 
		||(pwrk_rival->hitgrasp == 0x07 )			 
		||(pwrk_rival->hitgrasp == 0x09 ) )		 
	){
		chk_flg = ON;
	}
	else{
		chk_flg = OFF;
	}

	return( chk_flg );
}
 
 
 
UINT8	act_psbl_chk( void )
{
	UINT8	chk_flg;

	if( (pwrk_own->actsta == 0x00 )
	 || ((pwrk_own->actsta == 0x07  ) && (pwrk_own->actcancel == ON))
	 || ((pwrk_own->actsta == 0x09 ) && (pwrk_own->actcancel == ON))
	){
		chk_flg = ON;
	}
	else{
		chk_flg = OFF;
	}

	return( chk_flg );
}

 
 
 
void	prg_cmd_time( void )
{
	cmd_time = *cmd_data_adr;				 
	cmd_data_adr--;							 
}
 
 
 
void	prg_cmd_wait( void )
{
	UINT16	wait_time = *cmd_data_adr--;		 
	sw_buf_ix_wk = (sw_buf_ix_wk - wait_time) & (0x80  - 1);
												 
	cmd_chk_time += wait_time;
}
 
 
 
void	prg_cmd_sync_only( void )
{
	UINT16	sync_time,lev_wrk,lev_mask;
	UINT8	ix_wrk;
	int	i;

 







 	 
	lev_chk = *cmd_data_adr;			 
	cmd_data_adr--;						 
	lev_chk_flip();						 

	if( lev_chk > 0x0F ){
		sync_time	= 1 ;			 
		lev_mask	= 0xF0;				 
	}
	else{
		sync_time	= 1 ;			 
		lev_mask	= 0x0F;				 
	}

	lev_wrk = input_sync( sw_buf_ix_wk, sync_time );		 

	while( (cmd_break_flg != ON)					 
	 && ((lev_wrk & lev_mask) != lev_chk) ){

		if( (*(onsw_buf_adr + sw_buf_ix_wk) & lev_mask) != 0x0000  ){
			cmd_break_flg = ON;
		}
		else{
			cmd_time_chk();							 
			lev_wrk = input_sync( sw_buf_ix_wk, sync_time ); 
		}
	}

 
 				 
	fst_cmd_chk();							 
}
 
 
 
void	prg_cmd_key( void )
{
	UINT16	lev_mask;
	UINT8	*lev_buf;
	
	if( cmd_fst_flg == ON ){
		sw_buf_ix_wk = (sw_buf_ix_wk - 1  ) & (0x80  - 1);
											 
		cmd_chk_time++;
	}

	lev_chk = *cmd_data_adr;				 
	cmd_data_adr--;							 

	lev_chk_flip();

	if( (lev_chk & 0x0200 ) != 0 ){			 
		lev_buf = newsw_buf_adr;			 
	}
	else{
		lev_buf = lonsw_buf_adr;			 
	}

# 2654 "act/act.c"

	if( (lev_chk & 0x0100 ) != 0 ){			 
		while( (cmd_break_flg != ON)			 
		 && ((lev_buf[sw_buf_ix_wk] & (UINT8)lev_chk) == 0x00) ){
			cmd_time_chk();						 
		}
	}
	else{
		if( (lev_chk == 0) || (lev_chk > 0x0F) ){
			lev_mask = 0xF0;				 
		}
		else{
			lev_mask = 0x0F;				 
		}
		while( (cmd_break_flg != ON)			 
		 && ((lev_buf[sw_buf_ix_wk] & lev_mask) != (UINT8)lev_chk) ){
			cmd_time_chk();						 
		}
	}


	fst_cmd_chk();							 
}
 
 
 
void	prg_turn_chk( void )
{
	if( p_turn_drct[plyr] == 0  ){		 
		cmd_break_flg = ON;						 
	}
}
 
 
 
void	prg_e_act_chk( void )
{

	UINT16	act_chk;

	act_chk = *cmd_data_adr--;			 

	if ((actcode_newest[rival]	!= act_chk)	 
	 || (pwrk_rival->actcode	!= act_chk)	 
	 || (pwrk_own->actreq		!= 0xFF )	 
	 || (act_exe_time[rival] > (cmd_chk_time + cmd_time))
	 || (act_exe_time[rival] < cmd_chk_time)
											 
	) {
		cmd_break_flg = ON;					 
	}

# 2722 "act/act.c"

}

 
 
 
void	prg_cmd_sync( void )
{
	UINT16	sync_time,lev_wrk,lev_mask;
	UINT8	ix_wrk;
	int	i;

	lev_chk = *cmd_data_adr;			 
	cmd_data_adr--;						 
	lev_chk_flip();							 

	if( lev_chk > 0x0F ){
		sync_time	= 1 ;			 
		lev_mask	= 0xF0;				 
	}
	else{
		sync_time	= 1 ;			 
		lev_mask	= 0x0F;				 
	}

	lev_wrk = input_sync( sw_buf_ix_wk, sync_time );

	while( (cmd_break_flg != ON)			 
	 && ((lev_wrk & lev_mask) != lev_chk) ){
		cmd_time_chk();						 
		lev_wrk	= input_sync( sw_buf_ix_wk, sync_time );
	}

	fst_cmd_chk();							 
}
 
 
 
UINT8	input_sync( UINT8 buf_ix, UINT8 sync_cnt )
{
# 2774 "act/act.c"

 

	return ( *(onsw_buf_adr + buf_ix)
			| *(onsw_buf_adr + ((buf_ix - 1) & (0x80  - 1)))	);

}
 
 
 
void	prg_cmd_hold( void )
{
	UINT16	hold_time,lev_mask;
	UINT8	ix_wrk,chk_flg;

	if( cmd_fst_flg == ON ){
		sw_buf_ix_wk = (sw_buf_ix_wk - 1  ) & (0x80  - 1);
											 
		cmd_chk_time++;
	}

	lev_chk		= *cmd_data_adr;		 
	cmd_data_adr--;						 
	hold_time	= *cmd_data_adr;		 
	cmd_data_adr--;						 

	lev_chk_flip();							 

	if( (lev_chk & 0x0100 ) != 0 ){			 
		lev_mask = lev_chk;					 
	}
	else{
		if( lev_chk == 0 ){
			lev_mask = 0xFF;					 
		}
		else{
			if( lev_chk > 0x0F ){
				lev_mask = 0xF0;				 
			}
			else{
				lev_mask = 0x0F;				 
			}
		}
	}

	while( (cmd_break_flg != ON)			 
	 && (( *(newsw_buf_adr + sw_buf_ix_wk) & lev_mask) != lev_chk) ){
		cmd_time_chk();						 
	}
	if( cmd_break_flg != ON ){				 
		chk_flg = OFF;
		do{
			hold_time--;					 
			if( hold_time <= 0){
				chk_flg = ON;
				break;
			}
			sw_buf_ix_wk = (sw_buf_ix_wk - 1) & (0x80  - 1);
													 
			cmd_chk_time++;
		}while( (*(newsw_buf_adr + sw_buf_ix_wk) & lev_mask) == lev_chk );

		if( chk_flg == OFF ){
			cmd_break_flg = ON;				 
		}
	}

	fst_cmd_chk();							 
}

 
 
 
void	prg_cmd_only( void )
{
	UINT16	lev_mask;
	UINT8	*lev_buf;

	if( cmd_fst_flg == ON ){
		sw_buf_ix_wk = (sw_buf_ix_wk - 1  ) & (0x80  - 1);
											 
		cmd_chk_time++;
	}
	
	lev_chk = *cmd_data_adr;				 
	cmd_data_adr--;							 
	lev_chk_flip();							 

	if( (lev_chk & 0x0200 ) != 0 ){			 
		lev_buf = newsw_buf_adr;			 
	}
	else{
		lev_buf = lonsw_buf_adr;			 
	}

	if( (lev_chk & 0x0100 ) != 0 ){			 
		lev_mask = lev_chk;					 
	}
	else{
		if( (lev_chk == 0) || (lev_chk > 0x0F) ){
			lev_mask = 0xF0;				 
		}
		else{
			lev_mask = 0x0F;				 
		}
	}

	while( (cmd_break_flg != ON)			 
	 && ((lev_buf[sw_buf_ix_wk] & lev_mask) != (UINT8)lev_chk) ){

		if( (lev_buf[sw_buf_ix_wk] & lev_mask) != 0x0000  ){
			cmd_break_flg = ON;
		}
		else{
			cmd_time_chk();					 
		}
	}

	fst_cmd_chk();							 
}
 
 
 
void	prg_throw_chk( void )
{
	UINT16	throw_num;
	
	throw_num = *cmd_data_adr;
	cmd_data_adr--;

	if( pre_flg == ON ){
		cmd_break_flg = ON;
	}
	else{
		cmd_break_flg = throw_chk( throw_num ) ^ 1;		 
	}

	thr_dis_blow_flg[plyr] = cmd_break_flg;
									 
}
 
 
 
 
 
 
 
 
 
UINT8	throw_chk( UINT8 chk_num )
{



	UINT8			throw_succes_flg;
	FIXED			throw_range_add;
	int				i;
	UINT8			pose_wrk;
	struct TRWDAT*	tmp_throw;

	if( pwrk_rival->actsta == 0x05  ){		 
		if( pwrk_rival->actcode < (0x99 +1)  ){
			throw_range_add = act_range_rev_dat[0];	 
		}
		else {
			throw_range_add = act_range_rev_dat[1];	 
		}
	}
	else{
		throw_range_add = 0;						 
	}
	
	for( i = 0; i < 2; i++ ){					 
		if( p_turn_drct[i] == 0  ){				 
			if (i == 0) {
				throw_range_add += chr_range_rev_dat_1[0];
			}
			else {
				throw_range_add += chr_range_rev_dat_2[0];
			}
		}
		else{											 
			if (i == 0) {
				throw_range_add -= chr_range_rev_dat_1[0];
			}
			else {
				throw_range_add -= chr_range_rev_dat_2[0];
			}
		}
	}
	pose_wrk = pwrk_own->posestatus;		 
	if( (pose_wrk == 0x01 )					 



	 && ((newsw_buf[plyr][sw_buf_ix_bak] & 0x0010 ) == 0)

	){										 
		pose_wrk = 0x00 ;					 
	}

	if (plyr == 0) {
		tmp_throw	= &throw_1[chk_num];
	}
	else {
		tmp_throw	= &throw_2[chk_num];
	}

	if( ( throw_drct[plyr]  == 0x00  )			 
	 && ( throw_drct[rival] == tmp_throw->drct_type ) 
	 && ( (tmp_throw->range + throw_range_add) >= CmnPlayerRange )
	 && ((pose_wrk					== tmp_throw->my_pose)
	 	||(tmp_throw->my_pose	== 0xFF ))			 
	 && ((pwrk_rival->posestatus	== tmp_throw->en_pose)
	 	||(tmp_throw->en_pose	== 0xFF ) )		 
	 && ( pwrk_rival->mountsta	== 0  )		 
	 && ( pwrk_own->Ypos == pwrk_rival->Ypos )		 
	 												 
	 && ((pwrk_rival->actsta	== 0x00 )				 
	 	||((pwrk_rival->actsta	== 0x03 )				 
	 		&&(pwrk_rival->attacksta	== 0x02 )	 
 
	 		&&(der_chk_flg[plyr^0x01]	== OFF		))	 
	 	||((pwrk_rival->actsta	== 0x02 )				 
	 		&&(pwrk_rival->attacksta	== 0x02 )	 
 
	 		&&(der_chk_flg[plyr^0x01]	== OFF		))	 
	 	||(pwrk_rival->actsta	== 0x05 )				 
	 	||((pwrk_rival->actsta	== 0x01 )				 
	 		&&((pwrk_rival->jmpsta		== 0 )	 
	 			||(pwrk_rival->jmpsta	== 3 )))	 
	 	||(pwrk_rival->actsta	== 0x0E )				 
														 
	 	||((pwrk_rival->actsta	== 0x07 )				 
	 		&&(pwrk_rival->actcancel	== ON) )
	 	||((pwrk_rival->actsta	== 0x09 )
	 		&&(pwrk_rival->actcancel	== ON) )
	 	||((pwrk_rival->actsta	== 0x0B )
			&&(pwrk_own->chrnum			== 0x0C )	 
			&&(pwrk_rival->actcodeflg	== 0x01 )	 
			&&(pwrk_rival->actcode		== ((0x99 +1) +0x48) )
														 
	 		&&(throw_drct[rival]		== 0x01 ) )
	 	||((pwrk_rival->actsta	== 0x0D )
	 		&&((pwrk_rival->actcode != 0x12 )
	 		&& (pwrk_rival->actcode != 0x13 )
	 		&& (getup_code_chk( pwrk_rival->actcode ) == OFF)
	 		&& ((pwrk_rival->actcode < 0x34 )
	 			||(pwrk_rival->actcode > 0x3F )))
	 		)
	 	)
	 ){
	 	throw_succes_flg = ON;
	 }
	 else{
	 	throw_succes_flg = OFF;
	 }
	 
	 return( throw_succes_flg );
}
 
 
 
UINT8	getup_code_chk( UINT8 chk_actcode )
{
	UINT8	chk_flg;

	if( (0x1A  <= chk_actcode) && (chk_actcode <= 0x31 ) ){
		chk_flg = ON;
	}
	else{
		chk_flg = OFF;
	}

	return( chk_flg );
}
 
 
 
UINT8	getupa_code_chk(UINT8 chk_actcode)
{
	if ((0x73  <= chk_actcode) && (chk_actcode <= 0x8A )) {
		return ON;
	}

	return OFF;
}
 
 
 
UINT8	dh_code_chk(UINT8 chk_actcode)
{
	if ((0x40  <= chk_actcode) && (chk_actcode <= 0x44 )) {
		return ON;
	}

	return OFF;
}
 
 
 
void	prg_cmd_limit( void )
{
	UINT16	lev_mask, break_lev_mask;
	UINT8	*lev_buf, *break_lev_buf;
	UINT16	break_lev_chk;

	if( cmd_fst_flg == ON ){
		sw_buf_ix_wk = (sw_buf_ix_wk - 1  ) & (0x80  - 1);
											 
		cmd_chk_time++;
	}

	lev_chk 		= *cmd_data_adr;		 
	lev_chk_flip();
	cmd_data_adr--;							 
	break_lev_chk	= *cmd_data_adr;		 
	if( p_disp_drct[plyr] == 1  ){
		break_lev_chk = (break_lev_chk & 0xFF3F)
		| ((break_lev_chk & 0x0080) >> 1) | ((break_lev_chk & 0x0040) << 1);
	}
	cmd_data_adr--;							 
	
	if( (lev_chk & 0x0200 ) != 0 ){			 
		lev_buf = newsw_buf_adr;			 
	}
	else{
		lev_buf = lonsw_buf_adr;			 
	}

	if( (break_lev_chk & 0x0200 ) != 0 ){		 
		break_lev_buf = newsw_buf_adr;		 
	}
	else{
		break_lev_buf = lonsw_buf_adr;		 
	}

	if( (lev_chk & 0x0100 ) != 0 ){			 
		lev_mask = lev_chk;					 
	}
	else{
		if( (lev_chk == 0) || (lev_chk > 0x0F) ){
			lev_mask = 0xF0;				 
		}
		else{
			lev_mask = 0x0F;				 
		}
	}

	if( (break_lev_chk & 0x0100 ) != 0 ){		 
		break_lev_mask = break_lev_chk;		 
	}
	else{
		if( (break_lev_chk == 0) || (break_lev_chk > 0x0F) ){
			break_lev_mask = 0xF0;			 
		}
		else{
			break_lev_mask = 0x0F;			 
		}
	}

	while( (cmd_break_flg != ON)			 
	 && ((lev_buf[sw_buf_ix_wk] & lev_mask) != (UINT8)lev_chk) ){

		if( (break_lev_buf[sw_buf_ix_wk] & break_lev_mask)
		 == (UINT8)break_lev_chk
		){
			cmd_break_flg = ON;
		}
		else{
			cmd_time_chk();					 
		}
	}

	fst_cmd_chk();							 
}
 
 
 
void	prg_act_time_chk( void )
{
	UINT16	min_time, max_time;
	
	min_time = *cmd_data_adr;
	cmd_data_adr--;
	max_time = *cmd_data_adr;
	cmd_data_adr--;
	
	if( (act_exe_time[plyr] < min_time)
	 || (act_exe_time[plyr] > max_time)
	){
		cmd_break_flg = ON;
	}
}
 
 
 
void	prg_down_chk( void )
{
	if( pwrk_rival->dwnasta == OFF ){			 
		cmd_break_flg = ON;						 
	}
}

 
 
 
void	buf_act_req( void )
{
	int i;

	if( pwrk_own->actreq == 0xFF  ){	 
		if( act_req_ix[plyr] > 0 ){				 
			pwrk_own->actreq = act_req[plyr][0];	 

			for( i = 0; i < (4  - 1); i++ ){ 
				act_req[plyr][i] = act_req[plyr][i + 1];
			}
			act_req[plyr][i] = 0xFF ;		 

			act_req_ix[plyr]--;					 
		}
	}
}
 
 
 
void	prg_actreq_chk( void )
{

	UINT16	act_chk;

	if (cmd_fst_flg == ON) {
		sw_buf_ix_wk = (sw_buf_ix_wk - 1 ) & (0x80  - 1);
		cmd_chk_time++;					 
											 
	}

	act_chk = *cmd_data_adr--;			 

	if ((actreq_newest[plyr]	!= act_chk)	 
	 || (actreq_exe_time[plyr] > (cmd_chk_time + cmd_time))
	 || (actreq_exe_time[plyr] < cmd_chk_time)
											 
	) {
		cmd_break_flg = ON;					 
	}

	fst_cmd_chk();							 

# 3248 "act/act.c"

}

 
 
 
void	prg_actreq_chk2( void )
{
	UINT16	act_chk;
	
	act_chk = *cmd_data_adr;			 
	cmd_data_adr--;						 
	
	if( act_chk != actreq_newest[plyr] ){
		cmd_break_flg = ON;
	}
# 3273 "act/act.c"

}
 
 
 
void	prg_act_chk( void )
{

	UINT16	act_chk;

	if (cmd_fst_flg == ON) {
		sw_buf_ix_wk = (sw_buf_ix_wk - 1 ) & (0x80  - 1);
		cmd_chk_time++;					 
											 
	}

	act_chk = *cmd_data_adr--;			 

	if ((actcode_newest[plyr]	!= act_chk)	 
	 || (pwrk_own->actcode		!= act_chk)	 
	 || (pwrk_own->actreq		!= 0xFF )	 
	 || (act_exe_time[plyr] > (cmd_chk_time + cmd_time))
	 || (act_exe_time[plyr] < cmd_chk_time)
											 
	) {
		cmd_break_flg = ON;					 
	}

	fst_cmd_chk();							 

 






# 3333 "act/act.c"

}
 
 
 
void	prg_act_chk2( void )
{
	UINT16	act_chk, act_wrk;
	UINT8	ix_wrk;

	act_chk = *cmd_data_adr;			 
	cmd_data_adr--;						 
	
	if( act_chk != actreq_newest[plyr] ){
		cmd_break_flg = ON;
	}
	else{
		while( (cmd_break_flg != ON)				 
		 && ( *(actreq_buf_adr + sw_buf_ix_wk) != act_chk ) ){
		 	cmd_time_chk();						 
		}
	}
}
 
 
 
void	prg_act_chk3( void )
{
	UINT16	act_chk;
	
	act_chk = *cmd_data_adr;			 
	cmd_data_adr--;						 
	
 
 
 
 
		if( act_chk != PlayerWrk[plyr].actcode ){
			cmd_break_flg = ON;
		}
 
}

 
 
 
void	prg_nowact_chk( void )
{
	if( pwrk_own->actcode != *cmd_data_adr ){	 
		cmd_break_flg = ON;						 
	}
	cmd_data_adr--;							 
}
 
 
 
void	prg_sit_chk( void )
{

	if ((PlayerWrk[plyr].posestatus != 0x01 )
	 &&(pose_keep_time[plyr] > (cmd_chk_time + cmd_time))
	) {
		cmd_break_flg = ON;
	}






}
 
 
 
void	prg_stand_chk( void )
{

	if ((PlayerWrk[plyr].posestatus != 0x00 )
	 &&(pose_keep_time[plyr] > (cmd_chk_time + cmd_time))
	) {
		cmd_break_flg = ON;
	}






}
 
 
 
void	prg_der_chk( void )
{
	if( (pwrk_own->animeflg	!= 0x02 )		 
	 || (pwrk_own->actreq	!= 0xFF  )		 
	){
		cmd_break_flg = ON;					 
	}
}
 
 
 
void	prg_cmdfst_kill( void )
{
	cmd_fst_flg = OFF;						 
}
 
 
 
void	prg_getup_side( void )
{
	ANGLE	ang;
	
	switch( *cmd_data_adr ){
		case 0x00 :		 
			ang = pwrk_own->bodydrct - CmnCameraYang + ((long)((65536.0 * ( 90 )) / 360.0)) ;
			if( (ang & 0xFFFF )
	 		< ((long)((65536.0 * ( 180 )) / 360.0))  ){
				pwrk_own->sidespin = 1 ;	 
			}
			else{
				pwrk_own->sidespin = 0 ;	 
			}
			break;

		case 0x01 :		 
			ang = pwrk_own->bodydrct - CmnCameraYang + ((long)((65536.0 * ( 90 )) / 360.0)) ;
			if( (ang & 0xFFFF )
	 		< ((long)((65536.0 * ( 180 )) / 360.0))  ){
				pwrk_own->sidespin = 0 ;	 
			}
			else{
				pwrk_own->sidespin = 1 ;	 
			}
			break;

		case 0x02 :			 
			spin_center();						 
			break;
	}

	cmd_data_adr--;								 

}
 
 
 
void	spin_center( void )
{
	ANGLE	ang;
	
	ang = slAtan( -pwrk_own->Xpos, -pwrk_own->Zpos ) - pwrk_own->bodydrct;
	if( (ang & 0xFFFF  ) < ((long)((65536.0 * ( 180 )) / 360.0))  ){	 
		pwrk_own->sidespin = 0 ;			 
	}
	else{
		pwrk_own->sidespin = 1 ;			 
	}
}

 
 
 
void	prg_act_set( void )
{
	cmd_conc_flg	= ON;
	cmd_conc_num	= *cmd_data_adr;			 

}

# 3529 "act/act.c"

 
 
 
UINT8	key_int_change(UINT16	pad_shot)
{
	UINT16		S_SW;
	UINT8		A_SW;
	
	S_SW 	= pad_shot;
	A_SW	= 0x00;
	
	if(0x8000 <= S_SW){			 
		A_SW	+= *(key_tbl + 0);
		S_SW	-= 0x8000;
	}
	
	if(0x4000 <= S_SW){			 
		A_SW	+= *(key_tbl + 1);
		S_SW	-= 0x4000;
	}
	
	if(0x2000 <= S_SW){			 
		A_SW	+= *(key_tbl + 2);
		S_SW	-= 0x2000;
	}
	
	if(0x1000 <= S_SW){			 
		A_SW	+= *(key_tbl + 3);
		S_SW	-= 0x1000;
	}
	
	if(0x0800 <= S_SW){			 
		A_SW	+= *(key_tbl + 4);
		S_SW	-= 0x0800;
	}
	
	if(0x0400 <= S_SW){			 



		A_SW	+= CmnButton[plyr][0];

		S_SW	-= 0x0400;
	}
	
	if(0x0200 <= S_SW){			 



		A_SW	+= CmnButton[plyr][2];

		S_SW	-= 0x0200;
	}
	
	if(0x0100 <= S_SW){			 



		A_SW	+= CmnButton[plyr][1];

		S_SW	-= 0x0100;
	}
	
	if(0x0080 <= S_SW){			 



		A_SW	+= CmnButton[plyr][7];

		S_SW	-= 0x0080;
	}
	
	if(0x0040 <= S_SW){			 



		A_SW	+= CmnButton[plyr][3];

		S_SW	-= 0x0040;
	}
	
	if(0x0020 <= S_SW){			 



		A_SW	+= CmnButton[plyr][4];

		S_SW	-= 0x0020;
	}
	
	if(0x0010 <= S_SW){			 



		A_SW	+= CmnButton[plyr][5];

		S_SW	-= 0x0010;
	}

	if(0x0008 <= S_SW){			 



		A_SW	+= CmnButton[plyr][6];

		S_SW	-= 0x0008;
	}
	
	return (A_SW);
}

 
 
 
void	pointer_init(int ply_no, void **act_play_adr, int load)
{
	int	i, j, k, l;
	
	UINT16 		****ptr1, ***ptr2, **ptr3;
	ACT_TYPE	**ptr4;
	struct	COMBODAT	***ptr6, **ptr7;
	struct	COMACT		***ptr8, **ptr9;
	struct	COMLVL		**ptr10;
	ADRSINT				*ptr11, *ptr12, *ptr13, *ptr14, *ptr15;
	struct	RANGEJMP	*ptr20;
	struct	ATIMEJMP	*ptr30;
	struct	DERVACT		*ptr40;
	struct	DOWNTJMP	*ptr50;
	struct	HEIGHTJMP	*ptr60;
	
	act_play_adr[0] = (ACT_TYPE*)((Uint32)act_play_adr[0]+
						(Uint32)CmnLoadDat[load].DatDelta);

	act_play_adr[1] = (UINT16 ***)((Uint32)act_play_adr[1]+
						(Uint32)CmnLoadDat[load].DatDelta);

	ptr2	= act_play_adr[1];

	for( i=0; i<=31; i++) {
		ptr2[i]	= (UINT16 **)((Uint32)ptr2[i] + 
			(Uint32)CmnLoadDat[load].DatDelta);

		ptr3 = ptr2[i];

		j = 0;
		while( 0x00  != ptr3[j]){
			ptr3[j] = (UINT16 *)((Uint32)ptr3[j] +
				(Uint32)CmnLoadDat[load].DatDelta);
			j++;
		}
	}


	act_play_adr[2] = (struct DOWNTIME*)((Uint32)act_play_adr[2] +
						(Uint32)CmnLoadDat[load].DatDelta);

	act_play_adr[3] = (struct DOWNTIME*)((Uint32)act_play_adr[3] +
						(Uint32)CmnLoadDat[load].DatDelta);

	act_play_adr[4] = (FIXED*)((Uint32)act_play_adr[4] +
						(Uint32)CmnLoadDat[load].DatDelta);


	act_play_adr[5] = (struct TRWDAT*)((Uint32)act_play_adr[5] +
						(Uint32)CmnLoadDat[load].DatDelta);

 
# 4160 "act/act.c"


# 4171 "act/act.c"


	act_play_adr[18] = (struct COMTRW*)((Uint32)act_play_adr[18] +
							(Uint32)CmnLoadDat[load].DatDelta);

	act_play_adr[31] = (struct DOWNTIME*)((Uint32)act_play_adr[31] +
							(Uint32)CmnLoadDat[load].DatDelta);
}

 
 
 

void	pointer_init_tnk(int ply_no, void **com_think_adr, int load)
{
	int			i;
	COMDAT		*ptr_DAT1;
	ADRSINT		*ptr_ADRS1, *ptr_ADRS2;
	COMACT		**ptr_ACT1;
	COMBODAT	**ptr_COMBO1;
	COMPSNL		*ptr_PSNL1;
	
	com_think_adr[0] = (COMDAT*)((Uint32)com_think_adr[0] +
						(Uint32)CmnLoadDat[load].DatDelta);
	
	ptr_DAT1	= com_think_adr[0];
	
	ptr_DAT1->act_dat = (ADRSINT)((Uint32)ptr_DAT1->act_dat +
						(Uint32)CmnLoadDat[load].DatDelta);

	ptr_ADRS1	= (ADRSINT*)ptr_DAT1->act_dat;
	
	for (i = 0; i <= 31; i++ ) {
		ptr_ADRS1[i] = (ADRSINT)((Uint32)ptr_ADRS1[i] +
					(Uint32)CmnLoadDat[load].DatDelta);
	}
	if (((void *)0)  != ptr_DAT1->group_dat) {
	
	ptr_DAT1->group_dat = (COMACT**)((Uint32)ptr_DAT1->group_dat +
						(Uint32)CmnLoadDat[load].DatDelta);
	
	ptr_ACT1	= ptr_DAT1->group_dat;
	
	i = 0;
	while (0x00  != ptr_ACT1[i]) {
		ptr_ACT1[i] = (COMACT*)((Uint32)ptr_ACT1[i] +
					(Uint32)CmnLoadDat[load].DatDelta);
		i++;
	}
	
	}	 
	
	if (((void *)0)  != ptr_DAT1->combo_dat) {
	
	ptr_DAT1->combo_dat = (COMBODAT**)((Uint32)ptr_DAT1->combo_dat +
						(Uint32)CmnLoadDat[load].DatDelta);
	
	ptr_COMBO1	= ptr_DAT1->combo_dat;
	
	i = 0;
	while (0x00  != ptr_COMBO1[i]) {
		ptr_COMBO1[i] = (COMBODAT*)((Uint32)ptr_COMBO1[i] +
					(Uint32)CmnLoadDat[load].DatDelta);
		i++;
	}
	
	}	 
	
	ptr_DAT1->psnl_dat = (COMPSNL*)((Uint32)ptr_DAT1->psnl_dat +
						(Uint32)CmnLoadDat[load].DatDelta);
	

}
# 4729 "act/act.c"


 
 
 
void	pointer_move(int ply_no, void **act_play_adr, int load)
{
	int	i, j, k, l;
	
	UINT16 		****ptr1, ***ptr2, **ptr3;
	ACT_TYPE	**ptr4;
	struct	COMBODAT	***ptr6, **ptr7;
	struct	COMACT		***ptr8, **ptr9;
	struct	COMLVL		**ptr10;
	ADRSINT				*ptr11, *ptr12, *ptr13, *ptr14, *ptr15;
	struct	RANGEJMP	*ptr20;
	struct	ATIMEJMP	*ptr30;
	struct	DERVACT		*ptr40;
	struct	DOWNTJMP	*ptr50;
	struct	HEIGHTJMP	*ptr60;
	
	act_play_adr[0] = (ACT_TYPE*)((Uint32)act_play_adr[0]-
						(Uint32)CmnLoadDat[load].MovDelta);

	act_play_adr[1] = (UINT16 ***)((Uint32)act_play_adr[1]-
						(Uint32)CmnLoadDat[load].MovDelta);

	ptr2	= act_play_adr[1];

	for( i=0; i<=31; i++) {
		ptr2[i]	= (UINT16 **)((Uint32)ptr2[i] -
			(Uint32)CmnLoadDat[load].MovDelta);

		ptr3 = ptr2[i];

		j = 0;
		while( 0x00  != ptr3[j]){
			ptr3[j] = (UINT16 *)((Uint32)ptr3[j] -
				(Uint32)CmnLoadDat[load].MovDelta);
			j++;
		}
	}


	act_play_adr[2] = (struct DOWNTIME*)((Uint32)act_play_adr[2] -
						(Uint32)CmnLoadDat[load].MovDelta);

	act_play_adr[3] = (struct DOWNTIME*)((Uint32)act_play_adr[3] -
						(Uint32)CmnLoadDat[load].MovDelta);

	act_play_adr[4] = (FIXED*)((Uint32)act_play_adr[4] -
						(Uint32)CmnLoadDat[load].MovDelta);


	act_play_adr[5] = (struct TRWDAT*)((Uint32)act_play_adr[5] -
						(Uint32)CmnLoadDat[load].MovDelta);

 
# 5253 "act/act.c"


# 5264 "act/act.c"


	act_play_adr[18] = (struct COMTRW*)((Uint32)act_play_adr[18] -
							(Uint32)CmnLoadDat[load].MovDelta);

	act_play_adr[31] = (struct DOWNTIME*)((Uint32)act_play_adr[31] -
							(Uint32)CmnLoadDat[load].MovDelta);
}


 
 
 

void	pointer_move_tnk(int ply_no, void **com_think_adr, int load)
{
	int			i;
	COMDAT		*ptr_DAT1;
	ADRSINT		*ptr_ADRS1, *ptr_ADRS2;
	COMACT		**ptr_ACT1;
	COMBODAT	**ptr_COMBO1;
	COMPSNL		*ptr_PSNL1;
	
	com_think_adr[0] = (COMDAT*)((Uint32)com_think_adr[0] -
						(Uint32)CmnLoadDat[load].MovDelta);
	
	ptr_DAT1	= com_think_adr[0];
	
	ptr_DAT1->act_dat = (ADRSINT)((Uint32)ptr_DAT1->act_dat -
						(Uint32)CmnLoadDat[load].MovDelta);

	ptr_ADRS1	= (ADRSINT*)ptr_DAT1->act_dat;
	
	for (i = 0; i <= 31; i++ ) {
		ptr_ADRS1[i] = (ADRSINT)((Uint32)ptr_ADRS1[i] -
					(Uint32)CmnLoadDat[load].MovDelta);
	}
	
	if (((void *)0)  != ptr_DAT1->group_dat) {
	
	ptr_DAT1->group_dat = (COMACT**)((Uint32)ptr_DAT1->group_dat -
						(Uint32)CmnLoadDat[load].MovDelta);
	
	ptr_ACT1	= ptr_DAT1->group_dat;
	
	i = 0;
	while (0x00  != ptr_ACT1[i]) {
		ptr_ACT1[i] = (COMACT*)((Uint32)ptr_ACT1[i] -
					(Uint32)CmnLoadDat[load].MovDelta);
		i++;
	}
	
	}	 
	
	if (((void *)0)  != ptr_DAT1->combo_dat) {

	ptr_DAT1->combo_dat = (COMBODAT**)((Uint32)ptr_DAT1->combo_dat -
						(Uint32)CmnLoadDat[load].MovDelta);
	
	ptr_COMBO1	= ptr_DAT1->combo_dat;
	
	i = 0;
	while (0x00  != ptr_COMBO1[i]) {
		ptr_COMBO1[i] = (COMBODAT*)((Uint32)ptr_COMBO1[i] -
					(Uint32)CmnLoadDat[load].MovDelta);
		i++;
	}

	}	 

	ptr_DAT1->psnl_dat = (COMPSNL*)((Uint32)ptr_DAT1->psnl_dat -
						(Uint32)CmnLoadDat[load].MovDelta);
	

}
# 5828 "act/act.c"


	
	}	 
	
	if (((void *)0)  != ptr_DAT1->combo_dat) {

	ptr_DAT1->combo_dat = (COMBODAT**)((Uint32)ptr_DAT1->combo_dat -
						(Uint32)CmnLoadDat[load].MovDelta);
	
	ptr_COMBO1	= ptr_DAT1->combo_dat;
	
	i = 0;
	while (0x00  != ptr_COMBO1[i]) {
		ptr_COMBO1	.file	"act.c"
	.data

! Hitachi SH cc1 (cygnus-2.7-96q3 SOA-960904) arguments: -O -g -fdefer-pop
! -fcse-follow-jumps -fcse-skip-blocks -fexpensive-optimizations
! -fthread-jumps -fstrength-reduce -fpeephole -fforce-mem -ffunction-cse
! -finline-functions -finline -fkeep-static-consts -fcaller-saves
! -freg-struct-return -fdelayed-branch -frerun-cse-after-loop
! -fschedule-insns2 -fcommon -fgnu-linker -m2

gcc2_compiled.:
___gnu_compiled_c:
	.text
	.def	_Uint8;	.scl	13;	.type	014;	.endef
	.def	_Sint8;	.scl	13;	.type	02;	.endef
	.def	_Uint16;	.scl	13;	.type	015;	.endef
	.def	_Sint16;	.scl	13;	.type	03;	.endef
	.def	_Uint32;	.scl	13;	.type	017;	.endef
	.def	_Sint32;	.scl	13;	.type	05;	.endef
	.def	_Float32;	.scl	13;	.type	06;	.endef
	.def	_Float64;	.scl	13;	.type	07;	.endef
	.def	_Int;	.scl	13;	.type	04;	.endef
	.def	_Bool;	.scl	13;	.type	04;	.endef
	.def	_BooleanLogic;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_FALSE;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_TRUE;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_BooleanLogic;	.size	4;	.endef
	.def	_BooleanSwitch;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_OFF;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_ON;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_BooleanSwitch;	.size	4;	.endef
	.def	_Judgement;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_OK;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_NG;	.val	-1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_Judgement;	.size	4;	.endef
	.def	_ANGLE;	.scl	13;	.type	03;	.endef
	.def	_FIXED;	.scl	13;	.type	05;	.endef
	.def	_ps;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_X;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_Y;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_Z;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_XYZ;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_XYZS;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_XYZSS;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_XY;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_S;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_Sh;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_Sv;	.val	4;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_ps;	.size	4;	.endef
	.def	_work;	.scl	10;	.type	010;	.size	64;	.endef
	.def	_next;	.val	0;	.scl	8;	.tag	_work;	.size	64;	.type	030;	.endef
	.def	_user;	.val	4;	.scl	8;	.dim	60;	.size	60;	.type	074;	.endef
	.def	.eos;	.val	64;	.scl	102;	.tag	_work;	.size	64;	.endef
	.def	_WORK;	.scl	13;	.tag	_work;	.size	64;	.type	010;	.endef
	.def	_evnt;	.scl	10;	.type	010;	.size	128;	.endef
	.def	_work;	.val	0;	.scl	8;	.tag	_work;	.size	64;	.type	030;	.endef
	.def	_next;	.val	4;	.scl	8;	.tag	_evnt;	.size	128;	.type	030;	.endef
	.def	_before;	.val	8;	.scl	8;	.tag	_evnt;	.size	128;	.type	030;	.endef
	.def	_exad;	.val	12;	.scl	8;	.type	0221;	.endef
	.def	_user;	.val	16;	.scl	8;	.dim	112;	.size	112;	.type	074;	.endef
	.def	.eos;	.val	128;	.scl	102;	.tag	_evnt;	.size	128;	.endef
	.def	_EVENT;	.scl	13;	.tag	_evnt;	.size	128;	.type	010;	.endef
	.def	_MATRIX;	.scl	13;	.dim	4,3;	.size	48;	.type	0365;	.endef
	.def	_VECTOR;	.scl	13;	.dim	3;	.size	12;	.type	065;	.endef
	.def	_POINT;	.scl	13;	.dim	3;	.size	12;	.type	065;	.endef
	.def	_mtrx;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_M00;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_M01;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_M02;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_M10;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_M11;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_M12;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_M20;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_M21;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_M22;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_M30;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_M31;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_M32;	.val	11;	.scl	16;	.type	013;	.endef
	.def	_MTRX;	.val	12;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_mtrx;	.size	4;	.endef
	.def	_tvsz;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_TV_320x224;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_TV_320x240;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_TV_320x256;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy1;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_TV_352x224;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_TV_352x240;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_TV_352x256;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy2;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_TV_640x224;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_TV_640x240;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_TV_640x256;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy3;	.val	11;	.scl	16;	.type	013;	.endef
	.def	_TV_704x224;	.val	12;	.scl	16;	.type	013;	.endef
	.def	_TV_704x240;	.val	13;	.scl	16;	.type	013;	.endef
	.def	_TV_704x256;	.val	14;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy4;	.val	15;	.scl	16;	.type	013;	.endef
	.def	_TV_320x448;	.val	16;	.scl	16;	.type	013;	.endef
	.def	_TV_320x480;	.val	17;	.scl	16;	.type	013;	.endef
	.def	_TV_320x512;	.val	18;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy5;	.val	19;	.scl	16;	.type	013;	.endef
	.def	_TV_352x448;	.val	20;	.scl	16;	.type	013;	.endef
	.def	_TV_352x480;	.val	21;	.scl	16;	.type	013;	.endef
	.def	_TV_352x512;	.val	22;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy6;	.val	23;	.scl	16;	.type	013;	.endef
	.def	_TV_640x448;	.val	24;	.scl	16;	.type	013;	.endef
	.def	_TV_640x480;	.val	25;	.scl	16;	.type	013;	.endef
	.def	_TV_640x512;	.val	26;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy7;	.val	27;	.scl	16;	.type	013;	.endef
	.def	_TV_704x448;	.val	28;	.scl	16;	.type	013;	.endef
	.def	_TV_704x480;	.val	29;	.scl	16;	.type	013;	.endef
	.def	_TV_704x512;	.val	30;	.scl	16;	.type	013;	.endef
	.def	_TV_dummy8;	.val	31;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_tvsz;	.size	4;	.endef
	.def	_.0fake;	.scl	10;	.type	010;	.size	20;	.endef
	.def	_norm;	.val	0;	.scl	8;	.dim	3;	.size	12;	.type	065;	.endef
	.def	_Vertices;	.val	12;	.scl	8;	.dim	4;	.size	8;	.type	075;	.endef
	.def	.eos;	.val	20;	.scl	102;	.tag	_.0fake;	.size	20;	.endef
	.def	_POLYGON;	.scl	13;	.tag	_.0fake;	.size	20;	.type	010;	.endef
	.def	_.1fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_flag;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_sort;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_texno;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_atrb;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_colno;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_gstb;	.val	8;	.scl	8;	.type	015;	.endef
	.def	_dir;	.val	10;	.scl	8;	.type	015;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.1fake;	.size	12;	.endef
	.def	_ATTR;	.scl	13;	.tag	_.1fake;	.size	12;	.type	010;	.endef
	.def	_.2fake;	.scl	10;	.type	010;	.size	10;	.endef
	.def	_texno;	.val	0;	.scl	8;	.type	015;	.endef
	.def	_atrb;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_colno;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_gstb;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_dir;	.val	8;	.scl	8;	.type	015;	.endef
	.def	.eos;	.val	10;	.scl	102;	.tag	_.2fake;	.size	10;	.endef
	.def	_SPR_ATTR;	.scl	13;	.tag	_.2fake;	.size	10;	.type	010;	.endef
	.def	_.3fake;	.scl	10;	.type	010;	.size	20;	.endef
	.def	_pntbl;	.val	0;	.scl	8;	.dim	3;	.size	4;	.type	0325;	.endef
	.def	_nbPoint;	.val	4;	.scl	8;	.type	017;	.endef
	.def	_pltbl;	.val	8;	.scl	8;	.tag	_.0fake;	.size	20;	.type	030;	.endef
	.def	_nbPolygon;	.val	12;	.scl	8;	.type	017;	.endef
	.def	_attbl;	.val	16;	.scl	8;	.tag	_.1fake;	.size	12;	.type	030;	.endef
	.def	.eos;	.val	20;	.scl	102;	.tag	_.3fake;	.size	20;	.endef
	.def	_PDATA;	.scl	13;	.tag	_.3fake;	.size	20;	.type	010;	.endef
	.def	_.4fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_pntbl;	.val	0;	.scl	8;	.dim	3;	.size	4;	.type	0325;	.endef
	.def	_nbPoint;	.val	4;	.scl	8;	.type	017;	.endef
	.def	_pltbl;	.val	8;	.scl	8;	.tag	_.0fake;	.size	20;	.type	030;	.endef
	.def	_nbPolygon;	.val	12;	.scl	8;	.type	017;	.endef
	.def	_attbl;	.val	16;	.scl	8;	.tag	_.1fake;	.size	12;	.type	030;	.endef
	.def	_vntbl;	.val	20;	.scl	8;	.dim	3;	.size	4;	.type	0325;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.4fake;	.size	24;	.endef
	.def	_XPDATA;	.scl	13;	.tag	_.4fake;	.size	24;	.type	010;	.endef
	.def	_obj;	.scl	10;	.type	010;	.size	44;	.endef
	.def	_pat;	.val	0;	.scl	8;	.tag	_.3fake;	.size	20;	.type	030;	.endef
	.def	_pos;	.val	4;	.scl	8;	.dim	3;	.size	12;	.type	065;	.endef
	.def	_ang;	.val	16;	.scl	8;	.dim	3;	.size	6;	.type	063;	.endef
	.def	_scl;	.val	24;	.scl	8;	.dim	3;	.size	12;	.type	065;	.endef
	.def	_child;	.val	36;	.scl	8;	.tag	_obj;	.size	44;	.type	030;	.endef
	.def	_sibling;	.val	40;	.scl	8;	.tag	_obj;	.size	44;	.type	030;	.endef
	.def	.eos;	.val	44;	.scl	102;	.tag	_obj;	.size	44;	.endef
	.def	_OBJECT;	.scl	13;	.tag	_obj;	.size	44;	.type	010;	.endef
	.def	_.5fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_Hsize;	.val	0;	.scl	8;	.type	015;	.endef
	.def	_Vsize;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_CGadr;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_HVsize;	.val	6;	.scl	8;	.type	015;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.5fake;	.size	8;	.endef
	.def	_TEXTURE;	.scl	13;	.tag	_.5fake;	.size	8;	.type	010;	.endef
	.def	_.6fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_texno;	.val	0;	.scl	8;	.type	015;	.endef
	.def	_cmode;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_pcsrc;	.val	4;	.scl	8;	.type	021;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.6fake;	.size	8;	.endef
	.def	_PICTURE;	.scl	13;	.tag	_.6fake;	.size	8;	.type	010;	.endef
	.def	_base;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SORT_BFR;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SORT_MIN;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_SORT_MAX;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_SORT_CEN;	.val	3;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_base;	.size	4;	.endef
	.def	_pln;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_Single_Plane;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_Dual_Plane;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_pln;	.size	4;	.endef
	.def	_.7fake;	.scl	10;	.type	010;	.size	32;	.endef
	.def	_CTRL;	.val	0;	.scl	8;	.type	015;	.endef
	.def	_LINK;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_PMOD;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_COLR;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_SRCA;	.val	8;	.scl	8;	.type	015;	.endef
	.def	_SIZE;	.val	10;	.scl	8;	.type	015;	.endef
	.def	_XA;	.val	12;	.scl	8;	.type	03;	.endef
	.def	_YA;	.val	14;	.scl	8;	.type	03;	.endef
	.def	_XB;	.val	16;	.scl	8;	.type	03;	.endef
	.def	_YB;	.val	18;	.scl	8;	.type	03;	.endef
	.def	_XC;	.val	20;	.scl	8;	.type	03;	.endef
	.def	_YC;	.val	22;	.scl	8;	.type	03;	.endef
	.def	_XD;	.val	24;	.scl	8;	.type	03;	.endef
	.def	_YD;	.val	26;	.scl	8;	.type	03;	.endef
	.def	_GRDA;	.val	28;	.scl	8;	.type	015;	.endef
	.def	_DMMY;	.val	30;	.scl	8;	.type	015;	.endef
	.def	.eos;	.val	32;	.scl	102;	.tag	_.7fake;	.size	32;	.endef
	.def	_SPRITE;	.scl	13;	.tag	_.7fake;	.size	32;	.type	010;	.endef
	.def	_CELL;	.scl	13;	.type	015;	.endef
	.def	_rdat;	.scl	10;	.type	010;	.size	96;	.endef
	.def	_XST;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_YST;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_ZST;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_DXST;	.val	12;	.scl	8;	.type	05;	.endef
	.def	_DYST;	.val	16;	.scl	8;	.type	05;	.endef
	.def	_DX;	.val	20;	.scl	8;	.type	05;	.endef
	.def	_DY;	.val	24;	.scl	8;	.type	05;	.endef
	.def	_MATA;	.val	28;	.scl	8;	.type	05;	.endef
	.def	_MATB;	.val	32;	.scl	8;	.type	05;	.endef
	.def	_MATC;	.val	36;	.scl	8;	.type	05;	.endef
	.def	_MATD;	.val	40;	.scl	8;	.type	05;	.endef
	.def	_MATE;	.val	44;	.scl	8;	.type	05;	.endef
	.def	_MATF;	.val	48;	.scl	8;	.type	05;	.endef
	.def	_PX;	.val	52;	.scl	8;	.type	03;	.endef
	.def	_PY;	.val	54;	.scl	8;	.type	03;	.endef
	.def	_PZ;	.val	56;	.scl	8;	.type	03;	.endef
	.def	_dummy0;	.val	58;	.scl	8;	.type	03;	.endef
	.def	_CX;	.val	60;	.scl	8;	.type	03;	.endef
	.def	_CY;	.val	62;	.scl	8;	.type	03;	.endef
	.def	_CZ;	.val	64;	.scl	8;	.type	03;	.endef
	.def	_dummy1;	.val	66;	.scl	8;	.type	03;	.endef
	.def	_MX;	.val	68;	.scl	8;	.type	05;	.endef
	.def	_MY;	.val	72;	.scl	8;	.type	05;	.endef
	.def	_KX;	.val	76;	.scl	8;	.type	05;	.endef
	.def	_KY;	.val	80;	.scl	8;	.type	05;	.endef
	.def	_KAST;	.val	84;	.scl	8;	.type	017;	.endef
	.def	_DKAST;	.val	88;	.scl	8;	.type	05;	.endef
	.def	_DKA;	.val	92;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	96;	.scl	102;	.tag	_rdat;	.size	96;	.endef
	.def	_ROTSCROLL;	.scl	13;	.tag	_rdat;	.size	96;	.type	010;	.endef
	.def	_color_rate;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CLRate31_1;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CLRate30_2;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CLRate29_3;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_CLRate28_4;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_CLRate27_5;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_CLRate26_6;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_CLRate25_7;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_CLRate24_8;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_CLRate23_9;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_CLRate22_10;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_CLRate21_11;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_CLRate20_12;	.val	11;	.scl	16;	.type	013;	.endef
	.def	_CLRate19_13;	.val	12;	.scl	16;	.type	013;	.endef
	.def	_CLRate18_14;	.val	13;	.scl	16;	.type	013;	.endef
	.def	_CLRate17_15;	.val	14;	.scl	16;	.type	013;	.endef
	.def	_CLRate16_16;	.val	15;	.scl	16;	.type	013;	.endef
	.def	_CLRate15_17;	.val	16;	.scl	16;	.type	013;	.endef
	.def	_CLRate14_18;	.val	17;	.scl	16;	.type	013;	.endef
	.def	_CLRate13_19;	.val	18;	.scl	16;	.type	013;	.endef
	.def	_CLRate12_20;	.val	19;	.scl	16;	.type	013;	.endef
	.def	_CLRate11_21;	.val	20;	.scl	16;	.type	013;	.endef
	.def	_CLRate10_22;	.val	21;	.scl	16;	.type	013;	.endef
	.def	_CLRate9_23;	.val	22;	.scl	16;	.type	013;	.endef
	.def	_CLRate8_24;	.val	23;	.scl	16;	.type	013;	.endef
	.def	_CLRate7_25;	.val	24;	.scl	16;	.type	013;	.endef
	.def	_CLRate6_26;	.val	25;	.scl	16;	.type	013;	.endef
	.def	_CLRate5_27;	.val	26;	.scl	16;	.type	013;	.endef
	.def	_CLRate4_28;	.val	27;	.scl	16;	.type	013;	.endef
	.def	_CLRate3_29;	.val	28;	.scl	16;	.type	013;	.endef
	.def	_CLRate2_30;	.val	29;	.scl	16;	.type	013;	.endef
	.def	_CLRate1_31;	.val	30;	.scl	16;	.type	013;	.endef
	.def	_CLRate0_32;	.val	31;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_color_rate;	.size	4;	.endef
	.def	_.8fake;	.scl	10;	.type	010;	.size	10;	.endef
	.def	_mode;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_channel;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_level;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_pan;	.val	3;	.scl	8;	.type	02;	.endef
	.def	_pitch;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_eflevelR;	.val	6;	.scl	8;	.type	014;	.endef
	.def	_efselectR;	.val	7;	.scl	8;	.type	014;	.endef
	.def	_eflevelL;	.val	8;	.scl	8;	.type	014;	.endef
	.def	_efselectL;	.val	9;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	10;	.scl	102;	.tag	_.8fake;	.size	10;	.endef
	.def	_PCM;	.scl	13;	.tag	_.8fake;	.size	10;	.type	010;	.endef
	.def	_.9fake;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_winFar;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_winNear;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.9fake;	.size	4;	.endef
	.def	_SmpcSelect;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_SH2_DIRECT;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_CONTROL;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcSelect;	.size	4;	.endef
	.def	_SmpcExtLatch;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_EXL_ENA;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_EXL_DIS;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcExtLatch;	.size	4;	.endef
	.def	_SmpcResetButton;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_RES_ON;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_RES_OFF;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcResetButton;	.size	4;	.endef
	.def	_SmpcAreaCode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_AREA_RSV_0;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_JP;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_AJ_NTSC;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_3;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_NA;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_SA_NTSC;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_KO;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_7;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_8;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_9;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_AJ_PAL;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_B;	.val	11;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_EU_PAL;	.val	12;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_SA_PAL;	.val	13;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_E;	.val	14;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AREA_RSV_F;	.val	15;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcAreaCode;	.size	4;	.endef
	.def	_SmpcOptimize;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_OPT_DIS;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_OPT_ENA;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcOptimize;	.size	4;	.endef
	.def	_SmpcPortMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_PORT_15;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_PORT_255;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_SMPC_PORT_RSV;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_SMPC_PORT_ZERO;	.val	3;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcPortMode;	.size	4;	.endef
	.def	_SmpcLanguage;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_ENGLISH;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_DEUTSCH;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_SMPC_FRANCAIS;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_SMPC_ESPANOL;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_SMPC_ITALIANO;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_SMPC_JAPAN;	.val	5;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcLanguage;	.size	4;	.endef
	.def	_SmpcSoundEffect;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_EFFECT_OFF;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_EFFECT_ON;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcSoundEffect;	.size	4;	.endef
	.def	_SmpcSoundOutput;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_SOUND_MONO;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SOUND_STEREO;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcSoundOutput;	.size	4;	.endef
	.def	_SmpcHelpWindow;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_HELP_DIS;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_HELP_ENA;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcHelpWindow;	.size	4;	.endef
	.def	_SmpcMonth;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_DMY;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_JAN;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_SMPC_FEB;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_SMPC_MAR;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_SMPC_APR;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_SMPC_MAY;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_SMPC_JUN;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_SMPC_JUL;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_SMPC_AUG;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SEP;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_SMPC_OCT;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_SMPC_NOV;	.val	11;	.scl	16;	.type	013;	.endef
	.def	_SMPC_DEC;	.val	12;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcMonth;	.size	4;	.endef
	.def	_SmpcCommand;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_MSHON;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SSHON;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SSHOFF;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SNDON;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SNDOFF;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_SMPC_CDON;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_SMPC_CDOFF;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SYSRES;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_SMPC_CKC352;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_SMPC_CKC320;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_SMPC_NMIREQ;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_SMPC_RESENA;	.val	11;	.scl	16;	.type	013;	.endef
	.def	_SMPC_RESDIS;	.val	12;	.scl	16;	.type	013;	.endef
	.def	_SMPC_GETSTS;	.val	13;	.scl	16;	.type	013;	.endef
	.def	_SMPC_GETPER;	.val	14;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SETMEM;	.val	15;	.scl	16;	.type	013;	.endef
	.def	_SMPC_SETTIM;	.val	16;	.scl	16;	.type	013;	.endef
	.def	_SMPC_CMDMAX;	.val	17;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcCommand;	.size	4;	.endef
	.def	_SmpcWaitMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_SMPC_NO_WAIT;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_SMPC_WAIT;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_SmpcWaitMode;	.size	4;	.endef
	.def	_.10fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_year;	.val	0;	.scl	8;	.type	015;	.endef
	.def	_month;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_date;	.val	3;	.scl	8;	.type	014;	.endef
	.def	_hour;	.val	4;	.scl	8;	.type	014;	.endef
	.def	_minute;	.val	5;	.scl	8;	.type	014;	.endef
	.def	_second;	.val	6;	.scl	8;	.type	014;	.endef
	.def	_dummy;	.val	7;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.10fake;	.size	8;	.endef
	.def	_SmpcDateTime;	.scl	13;	.tag	_.10fake;	.size	8;	.type	010;	.endef
	.def	_.11fake;	.scl	10;	.type	010;	.size	20;	.endef
	.def	_cond;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_dummy1;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_dummy2;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_rtc;	.val	4;	.scl	8;	.tag	_.10fake;	.size	8;	.type	010;	.endef
	.def	_ctg;	.val	12;	.scl	8;	.type	014;	.endef
	.def	_area;	.val	13;	.scl	8;	.type	014;	.endef
	.def	_system;	.val	14;	.scl	8;	.type	015;	.endef
	.def	_smem;	.val	16;	.scl	8;	.type	017;	.endef
	.def	.eos;	.val	20;	.scl	102;	.tag	_.11fake;	.size	20;	.endef
	.def	_SmpcStatus;	.scl	13;	.tag	_.11fake;	.size	20;	.type	010;	.endef
	.def	_.12fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_id;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_ext;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_data;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_push;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_pull;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_dummy2;	.val	8;	.scl	8;	.dim	4;	.size	16;	.type	077;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.12fake;	.size	24;	.endef
	.def	_PerDigital;	.scl	13;	.tag	_.12fake;	.size	24;	.type	010;	.endef
	.def	_.13fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_id;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_ext;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_data;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_push;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_pull;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_x;	.val	8;	.scl	8;	.type	014;	.endef
	.def	_y;	.val	9;	.scl	8;	.type	014;	.endef
	.def	_z;	.val	10;	.scl	8;	.type	014;	.endef
	.def	_dummy1;	.val	11;	.scl	8;	.type	014;	.endef
	.def	_dummy2;	.val	12;	.scl	8;	.dim	3;	.size	12;	.type	077;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.13fake;	.size	24;	.endef
	.def	_PerAnalog;	.scl	13;	.tag	_.13fake;	.size	24;	.type	010;	.endef
	.def	_.14fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_id;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_ext;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_data;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_push;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_pull;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_x;	.val	8;	.scl	8;	.type	015;	.endef
	.def	_y;	.val	10;	.scl	8;	.type	015;	.endef
	.def	_dummy2;	.val	12;	.scl	8;	.dim	3;	.size	12;	.type	077;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.14fake;	.size	24;	.endef
	.def	_PerPoint;	.scl	13;	.tag	_.14fake;	.size	24;	.type	010;	.endef
	.def	_.15fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_id;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_ext;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_data;	.val	2;	.scl	8;	.type	015;	.endef
	.def	_push;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_pull;	.val	6;	.scl	8;	.type	015;	.endef
	.def	_cond;	.val	8;	.scl	8;	.type	014;	.endef
	.def	_code;	.val	9;	.scl	8;	.type	014;	.endef
	.def	_dummy1;	.val	10;	.scl	8;	.type	015;	.endef
	.def	_dummy2;	.val	12;	.scl	8;	.dim	3;	.size	12;	.type	077;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.15fake;	.size	24;	.endef
	.def	_PerKeyBoard;	.scl	13;	.tag	_.15fake;	.size	24;	.type	010;	.endef
	.def	_.16fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_pr;	.val	0;	.scl	8;	.type	017;	.endef
	.def	_dme;	.val	4;	.scl	8;	.type	017;	.endef
	.def	_msk;	.val	8;	.scl	8;	.type	017;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.16fake;	.size	12;	.endef
	.def	_DmaCpuComPrm;	.scl	13;	.tag	_.16fake;	.size	12;	.type	010;	.endef
	.def	_.17fake;	.scl	10;	.type	010;	.size	40;	.endef
	.def	_sar;	.val	0;	.scl	8;	.type	017;	.endef
	.def	_dar;	.val	4;	.scl	8;	.type	017;	.endef
	.def	_tcr;	.val	8;	.scl	8;	.type	017;	.endef
	.def	_dm;	.val	12;	.scl	8;	.type	017;	.endef
	.def	_sm;	.val	16;	.scl	8;	.type	017;	.endef
	.def	_ts;	.val	20;	.scl	8;	.type	017;	.endef
	.def	_ar;	.val	24;	.scl	8;	.type	017;	.endef
	.def	_ie;	.val	28;	.scl	8;	.type	017;	.endef
	.def	_drcr;	.val	32;	.scl	8;	.type	017;	.endef
	.def	_msk;	.val	36;	.scl	8;	.type	017;	.endef
	.def	.eos;	.val	40;	.scl	102;	.tag	_.17fake;	.size	40;	.endef
	.def	_DmaCpuPrm;	.scl	13;	.tag	_.17fake;	.size	40;	.type	010;	.endef
	.def	_.18fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_ae;	.val	0;	.scl	8;	.type	017;	.endef
	.def	_nmif;	.val	4;	.scl	8;	.type	017;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.18fake;	.size	8;	.endef
	.def	_DmaCpuComStatus;	.scl	13;	.tag	_.18fake;	.size	8;	.type	010;	.endef
	.def	_DmaCpuStatus;	.scl	13;	.type	017;	.endef
	.def	_.19fake;	.scl	10;	.type	010;	.size	40;	.endef
	.def	_dxr;	.val	0;	.scl	8;	.type	017;	.endef
	.def	_dxw;	.val	4;	.scl	8;	.type	017;	.endef
	.def	_dxc;	.val	8;	.scl	8;	.type	017;	.endef
	.def	_dxad_r;	.val	12;	.scl	8;	.type	017;	.endef
	.def	_dxad_w;	.val	16;	.scl	8;	.type	017;	.endef
	.def	_dxmod;	.val	20;	.scl	8;	.type	017;	.endef
	.def	_dxrup;	.val	24;	.scl	8;	.type	017;	.endef
	.def	_dxwup;	.val	28;	.scl	8;	.type	017;	.endef
	.def	_dxft;	.val	32;	.scl	8;	.type	017;	.endef
	.def	_msk;	.val	36;	.scl	8;	.type	017;	.endef
	.def	.eos;	.val	40;	.scl	102;	.tag	_.19fake;	.size	40;	.endef
	.def	_DmaScuPrm;	.scl	13;	.tag	_.19fake;	.size	40;	.type	010;	.endef
	.def	_.20fake;	.scl	10;	.type	010;	.size	4;	.endef
	.def	_dxmv;	.val	0;	.scl	8;	.type	017;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.20fake;	.size	4;	.endef
	.def	_DmaScuStatus;	.scl	13;	.tag	_.20fake;	.size	4;	.type	010;	.endef
	.def	_GOURAUDTBL;	.scl	13;	.dim	4;	.size	8;	.type	075;	.endef
	.def	_TEXDAT;	.scl	13;	.type	015;	.endef
	.def	_.21fake;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_P1;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_P2;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_MIX;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.21fake;	.size	4;	.endef
	.def	_.22fake;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_NO;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_YES;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.22fake;	.size	4;	.endef
	.def	_YES_NO;	.scl	13;	.tag	_.22fake;	.size	4;	.type	012;	.endef
	.def	_CHAR;	.scl	13;	.type	02;	.endef
	.def	_INT;	.scl	13;	.type	04;	.endef
	.def	_SHORT;	.scl	13;	.type	03;	.endef
	.def	_LONG;	.scl	13;	.type	05;	.endef
	.def	_FLOAT;	.scl	13;	.type	05;	.endef
	.def	_DOUBLE;	.scl	13;	.type	07;	.endef
	.def	_INT8;	.scl	13;	.type	02;	.endef
	.def	_INT16;	.scl	13;	.type	03;	.endef
	.def	_INT32;	.scl	13;	.type	04;	.endef
	.def	_SINT8;	.scl	13;	.type	02;	.endef
	.def	_SINT16;	.scl	13;	.type	03;	.endef
	.def	_SINT32;	.scl	13;	.type	04;	.endef
	.def	_SINT;	.scl	13;	.type	04;	.endef
	.def	_UINT8;	.scl	13;	.type	014;	.endef
	.def	_UINT16;	.scl	13;	.type	015;	.endef
	.def	_UINT32;	.scl	13;	.type	016;	.endef
	.def	_UINT;	.scl	13;	.type	016;	.endef
	.def	_FLOAT32;	.scl	13;	.type	05;	.endef
	.def	_FLOAT64;	.scl	13;	.type	07;	.endef
	.def	_Boolean;	.scl	13;	.tag	_.22fake;	.size	4;	.type	012;	.endef
	.def	_.23fake;	.scl	10;	.type	010;	.size	4;	.endef
	.def	_h;	.val	0;	.scl	8;	.type	03;	.endef
	.def	_v;	.val	2;	.scl	8;	.type	03;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.23fake;	.size	4;	.endef
	.def	_HVPoint;	.scl	13;	.tag	_.23fake;	.size	4;	.type	010;	.endef
	.def	_.24fake;	.scl	12;	.type	011;	.size	4;	.endef
	.def	_i;	.val	0;	.scl	11;	.type	04;	.endef
	.def	_f;	.val	0;	.scl	11;	.type	05;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.24fake;	.size	4;	.endef
	.def	_B32;	.scl	13;	.tag	_.24fake;	.size	4;	.type	011;	.endef
	.def	_.25fake;	.scl	15;	.type	012;	.size	4;	.endef
	.def	__BIT_0;	.val	0;	.scl	16;	.type	013;	.endef
	.def	__BIT_1;	.val	1;	.scl	16;	.type	013;	.endef
	.def	__BIT_2;	.val	2;	.scl	16;	.type	013;	.endef
	.def	__BIT_3;	.val	3;	.scl	16;	.type	013;	.endef
	.def	__BIT_4;	.val	4;	.scl	16;	.type	013;	.endef
	.def	__BIT_5;	.val	5;	.scl	16;	.type	013;	.endef
	.def	__BIT_6;	.val	6;	.scl	16;	.type	013;	.endef
	.def	__BIT_7;	.val	7;	.scl	16;	.type	013;	.endef
	.def	__BIT_8;	.val	8;	.scl	16;	.type	013;	.endef
	.def	__BIT_9;	.val	9;	.scl	16;	.type	013;	.endef
	.def	__BIT_10;	.val	10;	.scl	16;	.type	013;	.endef
	.def	__BIT_11;	.val	11;	.scl	16;	.type	013;	.endef
	.def	__BIT_12;	.val	12;	.scl	16;	.type	013;	.endef
	.def	__BIT_13;	.val	13;	.scl	16;	.type	013;	.endef
	.def	__BIT_14;	.val	14;	.scl	16;	.type	013;	.endef
	.def	__BIT_15;	.val	15;	.scl	16;	.type	013;	.endef
	.def	__BIT_16;	.val	16;	.scl	16;	.type	013;	.endef
	.def	__BIT_17;	.val	17;	.scl	16;	.type	013;	.endef
	.def	__BIT_18;	.val	18;	.scl	16;	.type	013;	.endef
	.def	__BIT_19;	.val	19;	.scl	16;	.type	013;	.endef
	.def	__BIT_20;	.val	20;	.scl	16;	.type	013;	.endef
	.def	__BIT_21;	.val	21;	.scl	16;	.type	013;	.endef
	.def	__BIT_22;	.val	22;	.scl	16;	.type	013;	.endef
	.def	__BIT_23;	.val	23;	.scl	16;	.type	013;	.endef
	.def	__BIT_24;	.val	24;	.scl	16;	.type	013;	.endef
	.def	__BIT_25;	.val	25;	.scl	16;	.type	013;	.endef
	.def	__BIT_26;	.val	26;	.scl	16;	.type	013;	.endef
	.def	__BIT_27;	.val	27;	.scl	16;	.type	013;	.endef
	.def	__BIT_28;	.val	28;	.scl	16;	.type	013;	.endef
	.def	__BIT_29;	.val	29;	.scl	16;	.type	013;	.endef
	.def	__BIT_30;	.val	30;	.scl	16;	.type	013;	.endef
	.def	__BIT_31;	.val	31;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.25fake;	.size	4;	.endef
	.def	_u_char;	.scl	13;	.type	014;	.endef
	.def	_u_short;	.scl	13;	.type	015;	.endef
	.def	_u_int;	.scl	13;	.type	016;	.endef
	.def	_u_long;	.scl	13;	.type	017;	.endef
	.def	_uchar;	.scl	13;	.type	014;	.endef
	.def	_ushort;	.scl	13;	.type	015;	.endef
	.def	_uint;	.scl	13;	.type	016;	.endef
	.def	_ulong;	.scl	13;	.type	017;	.endef
	.def	_CdcErrCode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_ERR_OK;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_CMDBUSY;	.val	-1;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_CMDNG;	.val	-2;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_TMOUT;	.val	-3;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_PUT;	.val	-4;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_REJECT;	.val	-5;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_WAIT;	.val	-6;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_TRNS;	.val	-7;	.scl	16;	.type	013;	.endef
	.def	_CDC_ERR_PERI;	.val	-8;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcErrCode;	.size	4;	.endef
	.def	_CdcStatus;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_ST_BUSY;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_PAUSE;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_STANDBY;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_PLAY;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_SEEK;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_SCAN;	.val	5;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_OPEN;	.val	6;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_NODISC;	.val	7;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_RETRY;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_ERROR;	.val	9;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_FATAL;	.val	10;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_PERI;	.val	32;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_TRNS;	.val	64;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_WAIT;	.val	128;	.scl	16;	.type	013;	.endef
	.def	_CDC_ST_REJECT;	.val	255;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcStatus;	.size	4;	.endef
	.def	_CdcPosType;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_PTYPE_DFL;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_PTYPE_FAD;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_PTYPE_TNO;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_CDC_PTYPE_NOCHG;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_CDC_PTYPE_END;	.val	4;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcPosType;	.size	4;	.endef
	.def	_CdcDrdyType;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_DRDY_GET;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_DRDY_PUT;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_DRDY_END;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcDrdyType;	.size	4;	.endef
	.def	_CdcScanDir;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_SCAN_FWD;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_SCAN_RVS;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcScanDir;	.size	4;	.endef
	.def	_CdcSctLen;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_SLEN_2048;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_SLEN_2336;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_SLEN_2340;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_CDC_SLEN_2352;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_CDC_SLEN_NOCHG;	.val	-1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcSctLen;	.size	4;	.endef
	.def	_CdcCopyErr;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_COPY_OK;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_COPY_NG;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_COPY_BUSY;	.val	255;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcCopyErr;	.size	4;	.endef
	.def	_.26fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_flgrep;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_ctladr;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_tno;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_idx;	.val	3;	.scl	8;	.type	014;	.endef
	.def	_fad;	.val	4;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.26fake;	.size	8;	.endef
	.def	_.27fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_status;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_report;	.val	4;	.scl	8;	.tag	_.26fake;	.size	8;	.type	010;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.27fake;	.size	12;	.endef
	.def	_CdcStat;	.scl	13;	.tag	_.27fake;	.size	12;	.type	010;	.endef
	.def	_.28fake;	.scl	10;	.type	010;	.size	5;	.endef
	.def	_hflag;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_ver;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_mpver;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_drv;	.val	3;	.scl	8;	.type	014;	.endef
	.def	_rev;	.val	4;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	5;	.scl	102;	.tag	_.28fake;	.size	5;	.endef
	.def	_CdcHw;	.scl	13;	.tag	_.28fake;	.size	5;	.type	010;	.endef
	.def	_.29fake;	.scl	10;	.type	010;	.size	2;	.endef
	.def	_tno;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_idx;	.val	1;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	2;	.scl	102;	.tag	_.29fake;	.size	2;	.endef
	.def	_.30fake;	.scl	12;	.type	011;	.size	4;	.endef
	.def	_fad;	.val	0;	.scl	11;	.type	05;	.endef
	.def	_trkidx;	.val	0;	.scl	11;	.tag	_.29fake;	.size	2;	.type	010;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.30fake;	.size	4;	.endef
	.def	_.31fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_ptype;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_pbody;	.val	4;	.scl	8;	.tag	_.30fake;	.size	4;	.type	011;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.31fake;	.size	8;	.endef
	.def	_CdcPos;	.scl	13;	.tag	_.31fake;	.size	8;	.type	010;	.endef
	.def	_.32fake;	.scl	10;	.type	010;	.size	20;	.endef
	.def	_start;	.val	0;	.scl	8;	.tag	_.31fake;	.size	8;	.type	010;	.endef
	.def	_end;	.val	8;	.scl	8;	.tag	_.31fake;	.size	8;	.type	010;	.endef
	.def	_pmode;	.val	16;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	20;	.scl	102;	.tag	_.32fake;	.size	20;	.endef
	.def	_CdcPly;	.scl	13;	.tag	_.32fake;	.size	20;	.type	010;	.endef
	.def	_.33fake;	.scl	10;	.type	010;	.size	6;	.endef
	.def	_fn;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_cn;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_smmsk;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_smval;	.val	3;	.scl	8;	.type	014;	.endef
	.def	_cimsk;	.val	4;	.scl	8;	.type	014;	.endef
	.def	_cival;	.val	5;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	6;	.scl	102;	.tag	_.33fake;	.size	6;	.endef
	.def	_CdcSubh;	.scl	13;	.tag	_.33fake;	.size	6;	.type	010;	.endef
	.def	_.34fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_fad;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_fn;	.val	4;	.scl	8;	.type	014;	.endef
	.def	_cn;	.val	5;	.scl	8;	.type	014;	.endef
	.def	_sm;	.val	6;	.scl	8;	.type	014;	.endef
	.def	_ci;	.val	7;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.34fake;	.size	8;	.endef
	.def	_CdcSct;	.scl	13;	.tag	_.34fake;	.size	8;	.type	010;	.endef
	.def	_.35fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_fad;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_size;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_unit;	.val	8;	.scl	8;	.type	014;	.endef
	.def	_gap;	.val	9;	.scl	8;	.type	014;	.endef
	.def	_fn;	.val	10;	.scl	8;	.type	014;	.endef
	.def	_atr;	.val	11;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.35fake;	.size	12;	.endef
	.def	_CdcFile;	.scl	13;	.tag	_.35fake;	.size	12;	.type	010;	.endef
	.def	_CdcMpErrCode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_ERR_MP_COMU;	.val	-20;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpErrCode;	.size	4;	.endef
	.def	_CdcMpStf;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPSTF_CUR;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPSTF_NEXT;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpStf;	.size	4;	.endef
	.def	_CdcMpPict;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPPICT_I;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPPICT_P;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPPICT_B;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPPICT_D;	.val	4;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpPict;	.size	4;	.endef
	.def	_CdcMpAct;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPACT_NMOV;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPACT_NSTL;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPACT_HMOV;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPACT_HSTL;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPACT_SBUF;	.val	4;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpAct;	.size	4;	.endef
	.def	_CdcMpDec;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPDEC_VSYNC;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPDEC_HOST;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpDec;	.size	4;	.endef
	.def	_CdcMpOut;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPOUT_VDP2;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPOUT_HOST;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpOut;	.size	4;	.endef
	.def	_CdcMpPly;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPPLY_SYNC;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPPLY_INDP;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpPly;	.size	4;	.endef
	.def	_CdcMpTrn;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPTRN_AUTO;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPTRN_FORCE;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpTrn;	.size	4;	.endef
	.def	_CdcMpCof;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPCOF_ABT;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPCOF_CHG;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpCof;	.size	4;	.endef
	.def	_CdcMpCla;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPCLA_OFF;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPCLA_ON;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpCla;	.size	4;	.endef
	.def	_CdcMpClv;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDC_MPCLV_FRM;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDC_MPCLV_VBV;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_CdcMpClv;	.size	4;	.endef
	.def	_.36fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_actst;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_pict;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_stat_a;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_stat_v;	.val	4;	.scl	8;	.type	015;	.endef
	.def	_vcnt;	.val	6;	.scl	8;	.type	015;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.36fake;	.size	8;	.endef
	.def	_.37fake;	.scl	10;	.type	010;	.size	10;	.endef
	.def	_status;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_report;	.val	2;	.scl	8;	.tag	_.36fake;	.size	8;	.type	010;	.endef
	.def	.eos;	.val	10;	.scl	102;	.tag	_.37fake;	.size	10;	.endef
	.def	_CdcMpStat;	.scl	13;	.tag	_.37fake;	.size	10;	.type	010;	.endef
	.def	_.38fake;	.scl	10;	.type	010;	.size	4;	.endef
	.def	_hour;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_min;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_sec;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_pic;	.val	3;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.38fake;	.size	4;	.endef
	.def	_CdcMpTc;	.scl	13;	.tag	_.38fake;	.size	4;	.type	010;	.endef
	.def	_.39fake;	.scl	10;	.type	010;	.size	3;	.endef
	.def	_cmod;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_lay;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_bn;	.val	2;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	3;	.scl	102;	.tag	_.39fake;	.size	3;	.endef
	.def	_CdcMpCon;	.scl	13;	.tag	_.39fake;	.size	3;	.type	010;	.endef
	.def	_.40fake;	.scl	10;	.type	010;	.size	3;	.endef
	.def	_smod;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_id;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_cn;	.val	2;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	3;	.scl	102;	.tag	_.40fake;	.size	3;	.endef
	.def	_CdcMpStm;	.scl	13;	.tag	_.40fake;	.size	3;	.type	010;	.endef
	.def	_.41fake;	.scl	10;	.type	010;	.size	6;	.endef
	.def	_itp;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_trp;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_moz_h;	.val	2;	.scl	8;	.type	014;	.endef
	.def	_moz_v;	.val	3;	.scl	8;	.type	014;	.endef
	.def	_soft_h;	.val	4;	.scl	8;	.type	014;	.endef
	.def	_soft_v;	.val	5;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	6;	.scl	102;	.tag	_.41fake;	.size	6;	.endef
	.def	_CdcMpVef;	.scl	13;	.tag	_.41fake;	.size	6;	.type	010;	.endef
	.def	_GfsAccessMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_GFS_NWSTAT_NOACT;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_GFS_NWSTAT_FREAD;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_GFS_NWSTAT_CDREAD;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_GfsAccessMode;	.size	4;	.endef
	.def	_GfsSeekMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_GFS_SEEK_SET;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_GFS_SEEK_CUR;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_GFS_SEEK_END;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_GfsSeekMode;	.size	4;	.endef
	.def	_GfsGetMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_GFS_GMODE_ERASE;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_GFS_GMODE_RESIDENT;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_GfsGetMode;	.size	4;	.endef
	.def	_GfsTransMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_GFS_TMODE_SCU;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_GFS_TMODE_SDMA0;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_GFS_TMODE_SDMA1;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_GFS_TMODE_CPU;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_GFS_TMODE_STM;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_GFS_TMODE_END;	.val	5;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_GfsTransMode;	.size	4;	.endef
	.def	_GfsServerStatus;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_GFS_SVR_COMPLETED;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_GFS_SVR_BUSY;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_GFS_SVR_CDPAUSE;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_GFS_SVR_ERROR;	.val	3;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_GfsServerStatus;	.size	4;	.endef
	.def	_GfsDirType;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_GFS_DIR_ID;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_GFS_DIR_NAME;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_GfsDirType;	.size	4;	.endef
	.def	_GfsTransFunc;	.scl	13;	.type	0225;	.endef
	.def	_.42fake;	.scl	10;	.type	010;	.size	28;	.endef
	.def	_fid;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_finfo;	.val	4;	.scl	8;	.tag	_.35fake;	.size	12;	.type	010;	.endef
	.def	_sctsz;	.val	16;	.scl	8;	.type	05;	.endef
	.def	_nsct;	.val	20;	.scl	8;	.type	05;	.endef
	.def	_lstrm;	.val	24;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	28;	.scl	102;	.tag	_.42fake;	.size	28;	.endef
	.def	_GfsFinfo;	.scl	13;	.tag	_.42fake;	.size	28;	.type	010;	.endef
	.def	_.43fake;	.scl	10;	.type	010;	.size	44;	.endef
	.def	_bufno;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_sctsz;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_flt;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_subh;	.val	12;	.scl	8;	.tag	_.33fake;	.size	6;	.type	010;	.endef
	.def	_fmode;	.val	20;	.scl	8;	.type	05;	.endef
	.def	_puid;	.val	24;	.scl	8;	.type	05;	.endef
	.def	_filepos;	.val	28;	.scl	8;	.type	05;	.endef
	.def	_sctpos;	.val	32;	.scl	8;	.type	05;	.endef
	.def	_sfad;	.val	36;	.scl	8;	.type	05;	.endef
	.def	_efad;	.val	40;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	44;	.scl	102;	.tag	_.43fake;	.size	44;	.endef
	.def	_GfsCdRsrc;	.scl	13;	.tag	_.43fake;	.size	44;	.type	010;	.endef
	.def	_.44fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_fid;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_filepos;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_sctpos;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_sctnum;	.val	12;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.44fake;	.size	16;	.endef
	.def	_GfsScsiRsrc;	.scl	13;	.tag	_.44fake;	.size	16;	.type	010;	.endef
	.def	_.45fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_data;	.val	0;	.scl	8;	.type	021;	.endef
	.def	_filepos;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_sctpos;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_sctnum;	.val	12;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.45fake;	.size	16;	.endef
	.def	_GfsMemRsrc;	.scl	13;	.tag	_.45fake;	.size	16;	.type	010;	.endef
	.def	_.46fake;	.scl	12;	.type	011;	.size	44;	.endef
	.def	_cd;	.val	0;	.scl	11;	.tag	_.43fake;	.size	44;	.type	010;	.endef
	.def	_scsi;	.val	0;	.scl	11;	.tag	_.44fake;	.size	16;	.type	010;	.endef
	.def	_mem;	.val	0;	.scl	11;	.tag	_.45fake;	.size	16;	.type	010;	.endef
	.def	.eos;	.val	44;	.scl	102;	.tag	_.46fake;	.size	44;	.endef
	.def	_.47fake;	.scl	10;	.type	010;	.size	48;	.endef
	.def	_ftype;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_rsrc;	.val	4;	.scl	8;	.tag	_.46fake;	.size	44;	.type	011;	.endef
	.def	.eos;	.val	48;	.scl	102;	.tag	_.47fake;	.size	48;	.endef
	.def	_GfsDtsrc;	.scl	13;	.tag	_.47fake;	.size	48;	.type	010;	.endef
	.def	_.48fake;	.scl	10;	.type	010;	.size	96;	.endef
	.def	_finfo;	.val	0;	.scl	8;	.tag	_.42fake;	.size	28;	.type	010;	.endef
	.def	_dtsrc;	.val	28;	.scl	8;	.tag	_.47fake;	.size	48;	.type	010;	.endef
	.def	_gmode;	.val	76;	.scl	8;	.type	05;	.endef
	.def	_stat;	.val	80;	.scl	8;	.type	05;	.endef
	.def	_sct;	.val	84;	.scl	8;	.type	05;	.endef
	.def	_sctcnt;	.val	88;	.scl	8;	.type	05;	.endef
	.def	_sctmax;	.val	92;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	96;	.scl	102;	.tag	_.48fake;	.size	96;	.endef
	.def	_GfsFlow;	.scl	13;	.tag	_.48fake;	.size	96;	.type	010;	.endef
	.def	_.49fake;	.scl	10;	.type	010;	.size	20;	.endef
	.def	_data;	.val	0;	.scl	8;	.type	021;	.endef
	.def	_adlt;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_len;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_nsct;	.val	12;	.scl	8;	.type	05;	.endef
	.def	_use;	.val	16;	.scl	8;	.type	04;	.endef
	.def	.eos;	.val	20;	.scl	102;	.tag	_.49fake;	.size	20;	.endef
	.def	_GfsDataPack;	.scl	13;	.tag	_.49fake;	.size	20;	.type	010;	.endef
	.def	_GfdpHn;	.scl	13;	.tag	_.49fake;	.size	20;	.type	030;	.endef
	.def	_.50fake;	.scl	10;	.type	010;	.size	60;	.endef
	.def	_buf;	.val	0;	.scl	8;	.type	021;	.endef
	.def	_size;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_wp;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_dps;	.val	12;	.scl	8;	.tag	_.49fake;	.size	20;	.type	030;	.endef
	.def	_dpd;	.val	16;	.scl	8;	.tag	_.49fake;	.size	20;	.type	030;	.endef
	.def	_tsctmax;	.val	20;	.scl	8;	.type	05;	.endef
	.def	_tsct;	.val	24;	.scl	8;	.type	05;	.endef
	.def	_tsctcnt;	.val	28;	.scl	8;	.type	05;	.endef
	.def	_tbytcnt;	.val	32;	.scl	8;	.type	05;	.endef
	.def	_obj;	.val	36;	.scl	8;	.type	021;	.endef
	.def	_tfunc;	.val	40;	.scl	8;	.type	0225;	.endef
	.def	_unit;	.val	44;	.scl	8;	.type	05;	.endef
	.def	_active;	.val	48;	.scl	8;	.type	04;	.endef
	.def	_stat;	.val	52;	.scl	8;	.type	05;	.endef
	.def	_mode;	.val	56;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	60;	.scl	102;	.tag	_.50fake;	.size	60;	.endef
	.def	_GfsTrans;	.scl	13;	.tag	_.50fake;	.size	60;	.type	010;	.endef
	.def	_GftrHn;	.scl	13;	.tag	_.50fake;	.size	60;	.type	030;	.endef
	.def	_.51fake;	.scl	10;	.type	010;	.size	168;	.endef
	.def	_used;	.val	0;	.scl	8;	.type	04;	.endef
	.def	_amode;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_astat;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_flow;	.val	12;	.scl	8;	.tag	_.48fake;	.size	96;	.type	010;	.endef
	.def	_trans;	.val	108;	.scl	8;	.tag	_.50fake;	.size	60;	.type	010;	.endef
	.def	.eos;	.val	168;	.scl	102;	.tag	_.51fake;	.size	168;	.endef
	.def	_GfsFile;	.scl	13;	.tag	_.51fake;	.size	168;	.type	010;	.endef
	.def	_GfsHn;	.scl	13;	.tag	_.51fake;	.size	168;	.type	030;	.endef
	.def	_GfsTrFunc;	.scl	13;	.type	0225;	.endef
	.def	_.52fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_dirrec;	.val	0;	.scl	8;	.tag	_.35fake;	.size	12;	.type	010;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.52fake;	.size	12;	.endef
	.def	_GfsDirId;	.scl	13;	.tag	_.52fake;	.size	12;	.type	010;	.endef
	.def	_.53fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_dirrec;	.val	0;	.scl	8;	.tag	_.35fake;	.size	12;	.type	010;	.endef
	.def	_fname;	.val	12;	.scl	8;	.dim	12;	.size	12;	.type	062;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.53fake;	.size	24;	.endef
	.def	_GfsDirName;	.scl	13;	.tag	_.53fake;	.size	24;	.type	010;	.endef
	.def	_.54fake;	.scl	12;	.type	011;	.size	4;	.endef
	.def	_dir_i;	.val	0;	.scl	11;	.tag	_.52fake;	.size	12;	.type	030;	.endef
	.def	_dir_n;	.val	0;	.scl	11;	.tag	_.53fake;	.size	24;	.type	030;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_.54fake;	.size	4;	.endef
	.def	_.55fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_type;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_ndir;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_dir;	.val	8;	.scl	8;	.tag	_.54fake;	.size	4;	.type	011;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.55fake;	.size	12;	.endef
	.def	_GfsDirTbl;	.scl	13;	.tag	_.55fake;	.size	12;	.type	010;	.endef
	.def	_GfsErrFunc;	.scl	13;	.type	0221;	.endef
	.def	_.56fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_func;	.val	0;	.scl	8;	.type	0221;	.endef
	.def	_obj;	.val	4;	.scl	8;	.type	021;	.endef
	.def	_code;	.val	8;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.56fake;	.size	12;	.endef
	.def	_GfsErrStat;	.scl	13;	.tag	_.56fake;	.size	12;	.type	010;	.endef
	.def	_.57fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_flowin;	.val	0;	.scl	8;	.type	0225;	.endef
	.def	_stopin;	.val	4;	.scl	8;	.type	0221;	.endef
	.def	_seek;	.val	8;	.scl	8;	.type	0225;	.endef
	.def	_tell;	.val	12;	.scl	8;	.type	0225;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.57fake;	.size	16;	.endef
	.def	_GfsFileFunc;	.scl	13;	.tag	_.57fake;	.size	16;	.type	010;	.endef
	.def	_.58fake;	.scl	10;	.type	010;	.size	100;	.endef
	.def	_access_file;	.val	0;	.scl	8;	.tag	_.51fake;	.dim	24;	.size	96;	.type	0170;	.endef
	.def	_nfile;	.val	96;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	100;	.scl	102;	.tag	_.58fake;	.size	100;	.endef
	.def	_GfsSvr;	.scl	13;	.tag	_.58fake;	.size	100;	.type	010;	.endef
	.def	_.59fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_dirtbl;	.val	0;	.scl	8;	.tag	_.55fake;	.size	12;	.type	010;	.endef
	.def	_nfile;	.val	12;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.59fake;	.size	16;	.endef
	.def	_GfsDirMng;	.scl	13;	.tag	_.59fake;	.size	16;	.type	010;	.endef
	.def	_.60fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_flt;	.val	0;	.scl	8;	.type	014;	.endef
	.def	_fmode;	.val	1;	.scl	8;	.type	014;	.endef
	.def	_subh;	.val	2;	.scl	8;	.tag	_.33fake;	.size	6;	.type	010;	.endef
	.def	_fad;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_snum;	.val	12;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.60fake;	.size	16;	.endef
	.def	_GfcdSelQu;	.scl	13;	.tag	_.60fake;	.size	16;	.type	010;	.endef
	.def	_.61fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_flt;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_buf;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_flnout;	.val	8;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.61fake;	.size	12;	.endef
	.def	_GfcdFconQu;	.scl	13;	.tag	_.61fake;	.size	12;	.type	010;	.endef
	.def	_.62fake;	.scl	10;	.type	010;	.size	392;	.endef
	.def	_len;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_stat;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_selq;	.val	8;	.scl	8;	.tag	_.60fake;	.dim	24;	.size	384;	.type	070;	.endef
	.def	.eos;	.val	392;	.scl	102;	.tag	_.62fake;	.size	392;	.endef
	.def	_.63fake;	.scl	10;	.type	010;	.size	296;	.endef
	.def	_len;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_stat;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_fconq;	.val	8;	.scl	8;	.tag	_.61fake;	.dim	24;	.size	288;	.type	070;	.endef
	.def	.eos;	.val	296;	.scl	102;	.tag	_.63fake;	.size	296;	.endef
	.def	_.64fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_stat;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_flt;	.val	4;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.64fake;	.size	8;	.endef
	.def	_.65fake;	.scl	10;	.type	010;	.size	28;	.endef
	.def	_stat;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_bufno;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_spos;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_usct;	.val	12;	.scl	8;	.type	05;	.endef
	.def	_cnt;	.val	16;	.scl	8;	.type	05;	.endef
	.def	_nsct;	.val	20;	.scl	8;	.type	025;	.endef
	.def	_nbyte;	.val	24;	.scl	8;	.type	025;	.endef
	.def	.eos;	.val	28;	.scl	102;	.tag	_.65fake;	.size	28;	.endef
	.def	_.66fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_stat;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_bufno;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_sctpos;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_nsct;	.val	12;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.66fake;	.size	16;	.endef
	.def	_.67fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_stat;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_bufno;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_sctpos;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_nsct;	.val	12;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.67fake;	.size	16;	.endef
	.def	_.68fake;	.scl	10;	.type	010;	.size	24;	.endef
	.def	_stat;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_dst;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_src;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_spos;	.val	12;	.scl	8;	.type	05;	.endef
	.def	_snum;	.val	16;	.scl	8;	.type	05;	.endef
	.def	_fmode;	.val	20;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	24;	.scl	102;	.tag	_.68fake;	.size	24;	.endef
	.def	_.69fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_stat;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_fid;	.val	4;	.scl	8;	.type	03;	.endef
	.def	_work;	.val	6;	.scl	8;	.type	03;	.endef
	.def	_ndir;	.val	8;	.scl	8;	.type	025;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.69fake;	.size	12;	.endef
	.def	_.70fake;	.scl	10;	.type	010;	.size	876;	.endef
	.def	_use_buf;	.val	0;	.scl	8;	.dim	24;	.size	24;	.type	062;	.endef
	.def	_use_filt;	.val	24;	.scl	8;	.dim	24;	.size	24;	.type	062;	.endef
	.def	_use_pu;	.val	48;	.scl	8;	.type	04;	.endef
	.def	_tr_bufno;	.val	52;	.scl	8;	.type	05;	.endef
	.def	_puid;	.val	56;	.scl	8;	.type	05;	.endef
	.def	_timer;	.val	60;	.scl	8;	.type	05;	.endef
	.def	_stat;	.val	64;	.scl	8;	.tag	_.27fake;	.size	12;	.type	010;	.endef
	.def	_func;	.val	76;	.scl	8;	.type	0221;	.endef
	.def	_obj;	.val	80;	.scl	8;	.type	021;	.endef
	.def	_tsk_setflt;	.val	84;	.scl	8;	.tag	_.62fake;	.size	392;	.type	010;	.endef
	.def	_tsk_fltcon;	.val	476;	.scl	8;	.tag	_.63fake;	.size	296;	.type	010;	.endef
	.def	_tsk_setcon;	.val	772;	.scl	8;	.tag	_.64fake;	.size	8;	.type	010;	.endef
	.def	_tsk_getlen;	.val	780;	.scl	8;	.tag	_.65fake;	.size	28;	.type	010;	.endef
	.def	_tsk_reqdat;	.val	808;	.scl	8;	.tag	_.66fake;	.size	16;	.type	010;	.endef
	.def	_tsk_delsct;	.val	824;	.scl	8;	.tag	_.67fake;	.size	16;	.type	010;	.endef
	.def	_tsk_movsct;	.val	840;	.scl	8;	.tag	_.68fake;	.size	24;	.type	010;	.endef
	.def	_tsk_chgdir;	.val	864;	.scl	8;	.tag	_.69fake;	.size	12;	.type	010;	.endef
	.def	.eos;	.val	876;	.scl	102;	.tag	_.70fake;	.size	876;	.endef
	.def	_GfsCdbMng;	.scl	13;	.tag	_.70fake;	.size	876;	.type	010;	.endef
	.def	_.71fake;	.scl	10;	.type	010;	.size	3336;	.endef
	.def	_openmax;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_functbl;	.val	4;	.scl	8;	.tag	_.57fake;	.dim	3;	.size	48;	.type	070;	.endef
	.def	_svr;	.val	52;	.scl	8;	.tag	_.58fake;	.size	100;	.type	010;	.endef
	.def	_curdir;	.val	152;	.scl	8;	.tag	_.59fake;	.size	16;	.type	010;	.endef
	.def	_pickup;	.val	168;	.scl	8;	.tag	_.51fake;	.size	168;	.type	030;	.endef
	.def	_sfad;	.val	172;	.scl	8;	.type	05;	.endef
	.def	_efad;	.val	176;	.scl	8;	.type	05;	.endef
	.def	_trans;	.val	180;	.scl	8;	.tag	_.51fake;	.size	168;	.type	030;	.endef
	.def	_error;	.val	184;	.scl	8;	.tag	_.56fake;	.size	12;	.type	010;	.endef
	.def	_flags;	.val	196;	.scl	8;	.type	017;	.endef
	.def	_timer;	.val	200;	.scl	8;	.type	05;	.endef
	.def	_cdb;	.val	204;	.scl	8;	.tag	_.70fake;	.size	876;	.type	010;	.endef
	.def	_srcpk;	.val	1080;	.scl	8;	.tag	_.49fake;	.size	20;	.type	010;	.endef
	.def	_dstpk;	.val	1100;	.scl	8;	.tag	_.49fake;	.size	20;	.type	010;	.endef
	.def	_sect_buf;	.val	1120;	.scl	8;	.dim	2048;	.size	2048;	.type	074;	.endef
	.def	_file;	.val	3168;	.scl	8;	.tag	_.51fake;	.dim	1;	.size	168;	.type	070;	.endef
	.def	.eos;	.val	3336;	.scl	102;	.tag	_.71fake;	.size	3336;	.endef
	.def	_GfsMng;	.scl	13;	.tag	_.71fake;	.size	3336;	.type	010;	.endef
	.def	_StmLoopRead;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_LOOP_READ;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_STM_LOOP_NOREAD;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_STM_LOOP_END;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmLoopRead;	.size	4;	.endef
	.def	_StmAcStat;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_EXEC_COMPLETED;	.val	256;	.scl	16;	.type	013;	.endef
	.def	_STM_EXEC_PAUSE;	.val	257;	.scl	16;	.type	013;	.endef
	.def	_STM_EXEC_DOING;	.val	258;	.scl	16;	.type	013;	.endef
	.def	_STM_EXEC_WAIT;	.val	259;	.scl	16;	.type	013;	.endef
	.def	_STM_EXEC_TSKEND;	.val	260;	.scl	16;	.type	013;	.endef
	.def	_STM_EXEC_END;	.val	261;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmAcStat;	.size	4;	.endef
	.def	_StmUnitSize;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_UNIT_FORM1;	.val	2048;	.scl	16;	.type	013;	.endef
	.def	_STM_UNIT_FORM2;	.val	2324;	.scl	16;	.type	013;	.endef
	.def	_STM_UNIT_WORD;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_STM_UNIT_BYTE;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_STM_UNIT_END;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmUnitSize;	.size	4;	.endef
	.def	_StmFad;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_FAD_CDTOP;	.val	150;	.scl	16;	.type	013;	.endef
	.def	_STM_FAD_CDEND;	.val	2147483647;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmFad;	.size	4;	.endef
	.def	_StmSctPos;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_CDBUF_TOP;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_STM_CDBUF_END;	.val	65535;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmSctPos;	.size	4;	.endef
	.def	_StmSctType;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_SM_EOR;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_VIDEO;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_AUDIO;	.val	4;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_DATA;	.val	8;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_TRIG;	.val	16;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_FORM;	.val	32;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_RT;	.val	64;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_EOF;	.val	128;	.scl	16;	.type	013;	.endef
	.def	_STM_SM_END;	.val	129;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmSctType;	.size	4;	.endef
	.def	_StmGate;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_GATE_OPEN;	.val	768;	.scl	16;	.type	013;	.endef
	.def	_STM_GATE_CLOSE;	.val	769;	.scl	16;	.type	013;	.endef
	.def	_STM_GATE_END;	.val	770;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmGate;	.size	4;	.endef
	.def	_StmTrMode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_TR_SCU;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_STM_TR_SDMA0;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_STM_TR_SDMA1;	.val	2;	.scl	16;	.type	013;	.endef
	.def	_STM_TR_CPU;	.val	3;	.scl	16;	.type	013;	.endef
	.def	_STM_TR_END;	.val	4;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmTrMode;	.size	4;	.endef
	.def	_StmFuncId;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_INIT;	.val	768;	.scl	16;	.type	013;	.endef
	.def	_STM_OPENGRP;	.val	769;	.scl	16;	.type	013;	.endef
	.def	_STM_CLOSEGRP;	.val	770;	.scl	16;	.type	013;	.endef
	.def	_STM_GETSTMNUM;	.val	771;	.scl	16;	.type	013;	.endef
	.def	_STM_GETSTMHNDL;	.val	772;	.scl	16;	.type	013;	.endef
	.def	_STM_SETCDBUFFUNC;	.val	773;	.scl	16;	.type	013;	.endef
	.def	_STM_OPENFID;	.val	774;	.scl	16;	.type	013;	.endef
	.def	_STM_OPENFRANGE;	.val	775;	.scl	16;	.type	013;	.endef
	.def	_STM_OPENRESI;	.val	776;	.scl	16;	.type	013;	.endef
	.def	_STM_CLOSE;	.val	777;	.scl	16;	.type	013;	.endef
	.def	_STM_SETKEY;	.val	784;	.scl	16;	.type	013;	.endef
	.def	_STM_GETINFO;	.val	785;	.scl	16;	.type	013;	.endef
	.def	_STM_SCTTOWORD;	.val	786;	.scl	16;	.type	013;	.endef
	.def	_STM_WORDTOSCT;	.val	787;	.scl	16;	.type	013;	.endef
	.def	_STM_SETALIAS;	.val	788;	.scl	16;	.type	013;	.endef
	.def	_STM_UNSETALIAS;	.val	789;	.scl	16;	.type	013;	.endef
	.def	_STM_SETTRBUF;	.val	790;	.scl	16;	.type	013;	.endef
	.def	_STM_SETTRFUNC;	.val	791;	.scl	16;	.type	013;	.endef
	.def	_STM_STARTTRANS;	.val	792;	.scl	16;	.type	013;	.endef
	.def	_STM_SETTRGATE;	.val	793;	.scl	16;	.type	013;	.endef
	.def	_STM_SETTRPARA;	.val	800;	.scl	16;	.type	013;	.endef
	.def	_STM_SETTRFAD;	.val	801;	.scl	16;	.type	013;	.endef
	.def	_STM_SETTRMODE;	.val	802;	.scl	16;	.type	013;	.endef
	.def	_STM_RESETTRBUF;	.val	803;	.scl	16;	.type	013;	.endef
	.def	_STM_GETNUMCDBUF;	.val	804;	.scl	16;	.type	013;	.endef
	.def	_STM_GETSCTINFO;	.val	805;	.scl	16;	.type	013;	.endef
	.def	_STM_GETLENTRBUF;	.val	806;	.scl	16;	.type	013;	.endef
	.def	_STM_ISTRBUFFULL;	.val	807;	.scl	16;	.type	013;	.endef
	.def	_STM_ISTRANS;	.val	808;	.scl	16;	.type	013;	.endef
	.def	_STM_SETEXECGRP;	.val	809;	.scl	16;	.type	013;	.endef
	.def	_STM_EXECSERVER;	.val	816;	.scl	16;	.type	013;	.endef
	.def	_STM_MOVEPICKUP;	.val	817;	.scl	16;	.type	013;	.endef
	.def	_STM_SETLOOP;	.val	818;	.scl	16;	.type	013;	.endef
	.def	_STM_GETLOOPCNT;	.val	819;	.scl	16;	.type	013;	.endef
	.def	_STM_GETEXECSTAT;	.val	820;	.scl	16;	.type	013;	.endef
	.def	_STM_ISCOMPLETE;	.val	821;	.scl	16;	.type	013;	.endef
	.def	_STM_EXECTRANS;	.val	822;	.scl	16;	.type	013;	.endef
	.def	_STM_CONNECTCDBUF;	.val	823;	.scl	16;	.type	013;	.endef
	.def	_STM_MOVECDBUF;	.val	824;	.scl	16;	.type	013;	.endef
	.def	_STM_ERASECDBUF;	.val	825;	.scl	16;	.type	013;	.endef
	.def	_STM_SETERRFUNC;	.val	832;	.scl	16;	.type	013;	.endef
	.def	_STM_GETERRSTAT;	.val	833;	.scl	16;	.type	013;	.endef
	.def	_STM_FUNC_END;	.val	834;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmFuncId;	.size	4;	.endef
	.def	_StmErrCode;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_STM_ERR_OK;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_CDRD;	.val	-1;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_CDNODISC;	.val	-2;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_FID;	.val	-10;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_HNDL;	.val	-11;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_NUM;	.val	-14;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_PARA;	.val	-17;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_NOHNDL;	.val	-19;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_PUINUSE;	.val	-20;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_TMOUT;	.val	-22;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_CDOPEN;	.val	-23;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_FATAL;	.val	-25;	.scl	16;	.type	013;	.endef
	.def	_STM_ERR_END;	.val	-24;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_StmErrCode;	.size	4;	.endef
	.def	_stmobj;	.scl	10;	.type	010;	.size	48;	.endef
	.def	_grp;	.val	0;	.scl	8;	.type	021;	.endef
	.def	_alias;	.val	4;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_sfadlst;	.val	8;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_fltlst;	.val	12;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_gfs;	.val	16;	.scl	8;	.tag	_.51fake;	.size	168;	.type	030;	.endef
	.def	_flow;	.val	20;	.scl	8;	.tag	_.48fake;	.size	96;	.type	030;	.endef
	.def	_trfunc;	.val	24;	.scl	8;	.type	0225;	.endef
	.def	_obj;	.val	28;	.scl	8;	.type	021;	.endef
	.def	_trsrc;	.val	32;	.scl	8;	.type	037;	.endef
	.def	_adlt;	.val	36;	.scl	8;	.type	05;	.endef
	.def	_trfad;	.val	40;	.scl	8;	.type	05;	.endef
	.def	_atr;	.val	44;	.scl	8;	.type	014;	.endef
	.def	_svrstat;	.val	45;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	48;	.scl	102;	.tag	_stmobj;	.size	48;	.endef
	.def	_StmObj;	.scl	13;	.tag	_stmobj;	.size	48;	.type	010;	.endef
	.def	_StmHn;	.scl	13;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_StmTrFunc;	.scl	13;	.type	0225;	.endef
	.def	_StmErrFunc;	.scl	13;	.type	0221;	.endef
	.def	_StmCdbufFunc;	.scl	13;	.type	0221;	.endef
	.def	_.72fake;	.scl	10;	.type	010;	.size	60;	.endef
	.def	_sfadlst;	.val	0;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_fltlst;	.val	4;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_loopstm;	.val	8;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_lststm;	.val	12;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_nexttrns;	.val	16;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_fad;	.val	20;	.scl	8;	.type	05;	.endef
	.def	_acstat;	.val	24;	.scl	8;	.type	05;	.endef
	.def	_chkstm;	.val	28;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_chksctnum;	.val	32;	.scl	8;	.type	05;	.endef
	.def	_chkfunc;	.val	36;	.scl	8;	.type	0221;	.endef
	.def	_chkobj;	.val	40;	.scl	8;	.type	021;	.endef
	.def	_loopmax;	.val	44;	.scl	8;	.type	05;	.endef
	.def	_loopcnt;	.val	48;	.scl	8;	.type	05;	.endef
	.def	_puid;	.val	52;	.scl	8;	.type	05;	.endef
	.def	_atr;	.val	56;	.scl	8;	.type	015;	.endef
	.def	_svrstat;	.val	58;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	60;	.scl	102;	.tag	_.72fake;	.size	60;	.endef
	.def	_StmGrp;	.scl	13;	.tag	_.72fake;	.size	60;	.type	010;	.endef
	.def	_StmGrpHn;	.scl	13;	.tag	_.72fake;	.size	60;	.type	030;	.endef
	.def	_.73fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_fn;	.val	0;	.scl	8;	.type	03;	.endef
	.def	_cn;	.val	2;	.scl	8;	.type	03;	.endef
	.def	_smmsk;	.val	4;	.scl	8;	.type	03;	.endef
	.def	_smval;	.val	6;	.scl	8;	.type	03;	.endef
	.def	_cimsk;	.val	8;	.scl	8;	.type	03;	.endef
	.def	_cival;	.val	10;	.scl	8;	.type	03;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.73fake;	.size	12;	.endef
	.def	_StmKey;	.scl	13;	.tag	_.73fake;	.size	12;	.type	010;	.endef
	.def	_.74fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_sfad;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_fasnum;	.val	4;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.74fake;	.size	8;	.endef
	.def	_StmFrange;	.scl	13;	.tag	_.74fake;	.size	8;	.type	010;	.endef
	.def	_.75fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_fad;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_fn;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_cn;	.val	8;	.scl	8;	.type	05;	.endef
	.def	_sm;	.val	12;	.scl	8;	.type	014;	.endef
	.def	_ci;	.val	13;	.scl	8;	.type	014;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.75fake;	.size	16;	.endef
	.def	_StmSct;	.scl	13;	.tag	_.75fake;	.size	16;	.type	010;	.endef
	.def	_.76fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_code;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_where;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_func;	.val	8;	.scl	8;	.type	0221;	.endef
	.def	_obj;	.val	12;	.scl	8;	.type	021;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.76fake;	.size	16;	.endef
	.def	_StmErrStat;	.scl	13;	.tag	_.76fake;	.size	16;	.type	010;	.endef
	.def	_.77fake;	.scl	10;	.type	010;	.size	48;	.endef
	.def	_stmgrptbl;	.val	0;	.scl	8;	.tag	_.72fake;	.size	60;	.type	030;	.endef
	.def	_stmgrpmax;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_stmtbl;	.val	8;	.scl	8;	.tag	_stmobj;	.size	48;	.type	030;	.endef
	.def	_stmmax;	.val	12;	.scl	8;	.type	05;	.endef
	.def	_curgrp;	.val	16;	.scl	8;	.tag	_.72fake;	.size	60;	.type	030;	.endef
	.def	_sfad;	.val	20;	.scl	8;	.type	05;	.endef
	.def	_efad;	.val	24;	.scl	8;	.type	05;	.endef
	.def	_err;	.val	28;	.scl	8;	.tag	_.76fake;	.size	16;	.type	010;	.endef
	.def	_svrexec;	.val	44;	.scl	8;	.type	04;	.endef
	.def	.eos;	.val	48;	.scl	102;	.tag	_.77fake;	.size	48;	.endef
	.def	_StmMng;	.scl	13;	.tag	_.77fake;	.size	48;	.type	010;	.endef
	.def	_CDHN;	.scl	13;	.tag	_.72fake;	.size	60;	.type	030;	.endef
	.def	_.78fake;	.scl	10;	.type	010;	.size	6;	.endef
	.def	_cn;	.val	0;	.scl	8;	.type	03;	.endef
	.def	_sm;	.val	2;	.scl	8;	.type	03;	.endef
	.def	_ci;	.val	4;	.scl	8;	.type	03;	.endef
	.def	.eos;	.val	6;	.scl	102;	.tag	_.78fake;	.size	6;	.endef
	.def	_CDKEY;	.scl	13;	.tag	_.78fake;	.size	6;	.type	010;	.endef
	.def	_.79fake;	.scl	10;	.type	010;	.size	12;	.endef
	.def	_addr;	.val	0;	.scl	8;	.type	021;	.endef
	.def	_unit;	.val	4;	.scl	8;	.type	05;	.endef
	.def	_size;	.val	8;	.scl	8;	.type	05;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.79fake;	.size	12;	.endef
	.def	_TRANS_COPY;	.scl	13;	.tag	_.79fake;	.size	12;	.type	010;	.endef
	.def	_.80fake;	.scl	10;	.type	010;	.size	8;	.endef
	.def	_func;	.val	0;	.scl	8;	.type	0225;	.endef
	.def	_obj;	.val	4;	.scl	8;	.type	021;	.endef
	.def	.eos;	.val	8;	.scl	102;	.tag	_.80fake;	.size	8;	.endef
	.def	_TRANS_FUNC;	.scl	13;	.tag	_.80fake;	.size	8;	.type	010;	.endef
	.def	_.81fake;	.scl	12;	.type	011;	.size	12;	.endef
	.def	_copy;	.val	0;	.scl	11;	.tag	_.79fake;	.size	12;	.type	010;	.endef
	.def	_func;	.val	0;	.scl	11;	.tag	_.80fake;	.size	8;	.type	010;	.endef
	.def	.eos;	.val	12;	.scl	102;	.tag	_.81fake;	.size	12;	.endef
	.def	_.82fake;	.scl	10;	.type	010;	.size	16;	.endef
	.def	_type;	.val	0;	.scl	8;	.type	05;	.endef
	.def	_trans;	.val	4;	.scl	8;	.tag	_.81fake;	.size	12;	.type	011;	.endef
	.def	.eos;	.val	16;	.scl	102;	.tag	_.82fake;	.size	16;	.endef
	.def	_CDBUF;	.scl	13;	.tag	_.82fake;	.size	16;	.type	010;	.endef
	.def	_TRANS_TYPE;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDBUF_COPY;	.val	0;	.scl	16;	.type	013;	.endef
	.def	_CDBUF_FUNC;	.val	1;	.scl	16;	.type	013;	.endef
	.def	_CDBUF_TERM;	.val	2;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_TRANS_TYPE;	.size	4;	.endef
	.def	_TRANS_UNIT;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDBUF_FORM1;	.val	2048;	.scl	16;	.type	013;	.endef
	.def	_CDBUF_FORM2;	.val	2324;	.scl	16;	.type	013;	.endef
	.def	_CDBUF_BYTE;	.val	1;	.scl	16;	.type	013;	.endef
	.def	.eos;	.val	4;	.scl	102;	.tag	_TRANS_UNIT;	.size	4;	.endef
	.def	_CDDRV;	.scl	15;	.type	012;	.size	4;	.endef
	.def	_CDDRV_
