/*
*	New C++ File starts here.
*	This file should be named echo_types.cc
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  generate_for_all_langs=true HHFile=echo_types.hh
*
*	.gen script :
*		0:load echo_types.hh
*		1:clear
*		2:select_from_file echo_types.hh
*		3:generate C protos>echo_types_c_n.h
*		4:generate C format>echo_types_c_n.c
*		5:generate C update>echo_types_c_n.c
*		6:generate C++ protos>echo_types_n_codegen_protos.hh
*		7:generate C++ format>echo_types_n.cc
*		8:generate C++ update>echo_types_n.cc
*		9:generate C++ constructor>echo_types_n.cc
*		10:generate Java dict>echo_types_MsgDict.java
*		11:generate Java classes >*
*		12:generate Ada spec>echo_types_n_ada.ads
*		13:generate Ada body>echo_types_n_ada.adb
*		14:exit
*
*/

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "echo_types.hh"

// Include externally supplied prototypes
#include "echo_types_n_codegen_protos.hh"



#ifndef ECHO_NAME_LIST_LENGTH
#define ECHO_NAME_LIST_LENGTH 3
#endif

const NMLTYPE ECHO_id_list[ECHO_NAME_LIST_LENGTH]= {
	ECHO_QUERY_TYPE, /* 0,101 */
	ECHO_REPLY_TYPE, /* 1,102 */
	-1};
const size_t ECHO_size_list[ECHO_NAME_LIST_LENGTH]= {
	sizeof(ECHO_QUERY),
	sizeof(ECHO_REPLY),
	0};


// Enumerated Type Constants

/*
Estimated_size	ECHO_QUERY	112
Estimated_size	ECHO_REPLY	128
Estimated_size	MAXIMUM	128
*/
/*
*	NML/CMS Format function : ECHO_format
*/
int ECHO_format(NMLTYPE type, void *buffer, CMS *cms)
{

	type = cms->check_type_info(type,buffer,"ECHO",
		(cms_symbol_lookup_function_t) 0,
		(const char **) 0,
		ECHO_id_list,ECHO_size_list,
		ECHO_NAME_LIST_LENGTH,
		0);

	cms->set_header_file("/home/shackle/rcslib/src/test/echo_types.hh");
	switch(type)
	{
	case ECHO_QUERY_TYPE:
		((ECHO_QUERY *) buffer)->update(cms);
		break;
	case ECHO_REPLY_TYPE:
		((ECHO_REPLY *) buffer)->update(cms);
		break;

	default:
		return(0);
	}
	return 1;
}

/*
*	NML/CMS Update function for ECHO_QUERY
*	from echo_types.hh:0
*/
void ECHO_QUERY::update(CMS *cms)
{

	cms->beginClass("ECHO_QUERY","NML_QUERY_MSG");

	cms->beginBaseClass("NML_QUERY_MSG");
	NML_QUERY_MSG::update(cms);
	cms->endBaseClass("NML_QUERY_MSG");

	cms->update_dla_length_with_name("line_length",line_length);
	cms->update_dla_with_name("line",line,line_length,80);

	cms->endClass("ECHO_QUERY","NML_QUERY_MSG");

}


/*
*	NML/CMS Update function for ECHO_REPLY
*	from echo_types.hh:39
*/
void ECHO_REPLY::update(CMS *cms)
{

	cms->beginClass("ECHO_REPLY","NMLmsg");
	cms->update_dla_length_with_name("line_length",line_length);
	cms->update_dla_with_name("line",line,line_length,80);
	cms->update_with_name("reply_num",reply_num);
	cms->update_with_name("client_num",client_num);

	cms->endClass("ECHO_REPLY","NMLmsg");

}

/*
*	Constructor for ECHO_QUERY
*	from echo_types.hh:0
*/
ECHO_QUERY::ECHO_QUERY()
	: NML_QUERY_MSG(ECHO_QUERY_TYPE,sizeof(ECHO_QUERY))
{
	line_length = (int) 0;
	for(int i_line=0; i_line< 80; i_line++)
	{
		((char*)line)[i_line]  = (char) 0;
	}

}

/*
*	Constructor for ECHO_REPLY
*	from echo_types.hh:39
*/
ECHO_REPLY::ECHO_REPLY()
	: NMLmsg(ECHO_REPLY_TYPE,sizeof(ECHO_REPLY))
{
	line_length = (int) 0;
	for(int i_line=0; i_line< 80; i_line++)
	{
		((char*)line)[i_line]  = (char) 0;
	}
	reply_num = (int) 0;
	client_num = (int) 0;

}
