/*
*	New C++ File starts here.
*	This file should be named wmn_c_n.c
*/

/* Include all C language NML and CMS function prototypes. */
#include "nmlcms_c.h"

/* Include externally supplied prototypes. */
#include "wmn_c_n.h"

/* Forward Function Prototypes */
#ifdef __cplusplus
extern "C" {
#endif

void cms_WM_CONFIG_update(struct cms_c_struct *cms, nml_WM_CONFIG_c_t *x);
void cms_WM_HALT_update(struct cms_c_struct *cms, nml_WM_HALT_c_t *x);
void cms_WM_INIT_update(struct cms_c_struct *cms, nml_WM_INIT_c_t *x);
void cms_WM_STATUS_update(struct cms_c_struct *cms, nml_WM_STATUS_c_t *x);

#ifdef __cplusplus
}
#endif
long nml_wm_open(const char *buf, const char *proc, const char *cfg)
{
	return (long) nml_new(wm_c_format, buf,proc,cfg);
}

int  nml_wm_valid(long nml_id)
{
	return (int) nml_valid( (nml_c_t) nml_id);
}

void nml_wm_close(long nml_id)
{
	nml_free( (nml_c_t) nml_id);
}

int nml_wm_read(long nml_id)
{
	return (long) nml_read( (nml_c_t) nml_id);
}

int nml_wm_WM_CONFIG_write(long nml_id, const nml_WM_CONFIG_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 3001,sizeof(nml_WM_CONFIG_c_t));
}

nml_WM_CONFIG_c_t * nml_wm_WM_CONFIG_get_msg(long nml_id){
	return (nml_WM_CONFIG_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_wm_WM_HALT_write(long nml_id, const nml_WM_HALT_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 3002,sizeof(nml_WM_HALT_c_t));
}

nml_WM_HALT_c_t * nml_wm_WM_HALT_get_msg(long nml_id){
	return (nml_WM_HALT_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_wm_WM_INIT_write(long nml_id, const nml_WM_INIT_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 3003,sizeof(nml_WM_INIT_c_t));
}

nml_WM_INIT_c_t * nml_wm_WM_INIT_get_msg(long nml_id){
	return (nml_WM_INIT_c_t *) nml_get_address( (nml_c_t) nml_id);
}

int nml_wm_WM_STATUS_write(long nml_id, const nml_WM_STATUS_c_t *msg){
	return (int) nml_write( (nml_c_t) nml_id,(void *) msg, (nmltype_c_t) 3000,sizeof(nml_WM_STATUS_c_t));
}

nml_WM_STATUS_c_t * nml_wm_WM_STATUS_get_msg(long nml_id){
	return (nml_WM_STATUS_c_t *) nml_get_address( (nml_c_t) nml_id);
}




#ifndef MAX_WM_C_NAME_LENGTH
#define MAX_WM_C_NAME_LENGTH 10
#endif
#ifndef WM_C_NAME_LIST_LENGTH
#define WM_C_NAME_LIST_LENGTH 5
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
const char wm_c_name_list[WM_C_NAME_LIST_LENGTH][MAX_WM_C_NAME_LENGTH]= {
	"WM_CONFIG", /* 0,3001 */
	"WM_HALT", /* 1,3002 */
	"WM_INIT", /* 2,3003 */
	"WM_STATUS", /* 3,3000 */
	""};
const NMLTYPE wm_c_id_list[WM_C_NAME_LIST_LENGTH]= {
	WM_CONFIG_TYPE, /* 0,3001 */
	WM_HALT_TYPE, /* 1,3002 */
	WM_INIT_TYPE, /* 2,3003 */
	WM_STATUS_TYPE, /* 3,3000 */
	-1};
const size_t wm_c_size_list[WM_C_NAME_LIST_LENGTH]= {
	sizeof(nml_WM_CONFIG_c_t),
	sizeof(nml_WM_HALT_c_t),
	sizeof(nml_WM_INIT_c_t),
	sizeof(nml_WM_STATUS_c_t),
	0};
const char *wm_c_symbol_lookup(long type);


/* Enumerated Type Constants */

/*  RCS_STATUS */
#ifndef MAX_ENUM_RCS_STATUS_STRING_LENGTH
#define MAX_ENUM_RCS_STATUS_STRING_LENGTH 21
#endif
#ifndef ENUM_RCS_STATUS_LENGTH
#define ENUM_RCS_STATUS_LENGTH 5
#endif

const char enum_RCS_STATUS_string_list[ENUM_RCS_STATUS_LENGTH][MAX_ENUM_RCS_STATUS_STRING_LENGTH]= {
	"RCS_DONE", /* 0,1 */
	"RCS_ERROR", /* 1,3 */
	"RCS_EXEC", /* 2,2 */
	"UNINITIALIZED_STATUS", /* 3,-1 */
	""};

const int enum_RCS_STATUS_int_list[ENUM_RCS_STATUS_LENGTH]= {
	RCS_DONE, /* 0,1 */
	RCS_ERROR, /* 1,3 */
	RCS_EXEC, /* 2,2 */
	UNINITIALIZED_STATUS, /* 3,-1 */
	};

const char *wm_c_enum_RCS_STATUS_symbol_lookup(long v)
{
	switch(v)
	{
		case RCS_DONE: return("RCS_DONE"); /* 1 */
		case RCS_ERROR: return("RCS_ERROR"); /* 3 */
		case RCS_EXEC: return("RCS_EXEC"); /* 2 */
		case UNINITIALIZED_STATUS: return("UNINITIALIZED_STATUS"); /* -1 */
		default:break;
	}
	return(NULL);
}

const struct cms_enum_info enum_RCS_STATUS_info_struct={
	"RCS_STATUS",
	(const char **)enum_RCS_STATUS_string_list,
	enum_RCS_STATUS_int_list,
	MAX_ENUM_RCS_STATUS_STRING_LENGTH,
	ENUM_RCS_STATUS_LENGTH,
	(cms_symbol_lookup_function_t)wm_c_enum_RCS_STATUS_symbol_lookup
	};

/*
*	NML/CMS Format function : wm_c_format
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:20 EST 2006
*/
int wm_c_format(long type, void *buffer, struct cms_c_struct *cms)
{

	type = cms_check_type_info(cms,type,buffer,"wm_c",
		(cms_symbol_lookup_function_t) wm_c_symbol_lookup,
		(const char **)wm_c_name_list,
		wm_c_id_list,wm_c_size_list,
		WM_C_NAME_LIST_LENGTH,
		MAX_WM_C_NAME_LENGTH);

	switch(type)
	{
	case WM_CONFIG_TYPE:
		cms_WM_CONFIG_update(cms,(nml_WM_CONFIG_c_t *) buffer);
		break;
	case WM_HALT_TYPE:
		cms_WM_HALT_update(cms,(nml_WM_HALT_c_t *) buffer);
		break;
	case WM_INIT_TYPE:
		cms_WM_INIT_update(cms,(nml_WM_INIT_c_t *) buffer);
		break;
	case WM_STATUS_TYPE:
		cms_WM_STATUS_update(cms,(nml_WM_STATUS_c_t *) buffer);
		break;

	default:
		return(0);
	}
	return 1;
}


/* NML Symbol Lookup Function */
const char *wm_c_symbol_lookup(long type)
{
	switch(type)
	{
	case WM_CONFIG_TYPE:
		return "WM_CONFIG";
	case WM_HALT_TYPE:
		return "WM_HALT";
	case WM_INIT_TYPE:
		return "WM_INIT";
	case WM_STATUS_TYPE:
		return "WM_STATUS";
	default:
		return"UNKNOWN";
		break;
	}
	return(NULL);
}

/*
*	NML/CMS Update function for WM_HALT
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:20 EST 2006
*/
void cms_WM_HALT_update(struct cms_c_struct *cms, nml_WM_HALT_c_t *x)
{

	cms_begin_class(cms,"WM_HALT","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);

	cms_end_class(cms,"WM_HALT","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for WM_INIT
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:20 EST 2006
*/
void cms_WM_INIT_update(struct cms_c_struct *cms, nml_WM_INIT_c_t *x)
{

	cms_begin_class(cms,"WM_INIT","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);

	cms_end_class(cms,"WM_INIT","RCS_CMD_MSG");

}


/*
*	NML/CMS Update function for WM_STATUS
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:20 EST 2006
*/
void cms_WM_STATUS_update(struct cms_c_struct *cms, nml_WM_STATUS_c_t *x)
{

	cms_begin_class(cms,"WM_STATUS","RCS_STAT_MSG");
	cms_begin_update_stat_msg_base(cms,(void*)x);
	cms_update_long(cms,"command_type",&(x->command_type));
	cms_update_int(cms,"echo_serial_number",&(x->echo_serial_number));
	cms_update_int(cms,"status",&(x->status));
	cms_update_int(cms,"state",&(x->state));
	cms_update_int(cms,"source_line",&(x->source_line));
	cms_update_char_array(cms,"source_file",(x->source_file),64);
	cms_end_update_stat_msg_base(cms,(void*)x);

	cms_end_class(cms,"WM_STATUS","RCS_STAT_MSG");

}


/*
*	NML/CMS Update function for WM_CONFIG
*	Automatically generated by NML CodeGen Java Applet.
*	on Sat Feb 25 10:10:20 EST 2006
*/
void cms_WM_CONFIG_update(struct cms_c_struct *cms, nml_WM_CONFIG_c_t *x)
{

	cms_begin_class(cms,"WM_CONFIG","RCS_CMD_MSG");
	cms_begin_update_cmd_msg_base(cms,(void*)x);
	cms_update_int(cms,"serial_number",&(x->serial_number));	cms_end_update_cmd_msg_base(cms,(void*)x);
	cms_update_double(cms,"min_obstacle_height",&(x->min_obstacle_height));
	cms_update_double(cms,"max_obstacle_height",&(x->max_obstacle_height));

	cms_end_class(cms,"WM_CONFIG","RCS_CMD_MSG");

}
