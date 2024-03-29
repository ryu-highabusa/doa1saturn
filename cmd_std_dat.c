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
