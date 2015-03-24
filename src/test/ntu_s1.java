/*
*	New Java File starts here.
*	This file should be named ntu_s1.java
*	Automatically generated by NML CodeGen Java Applet.
*	from nml_test_unbounded_format.hh:0
*	with command line arguments :  generate_for_all_langs=true HHFile=nml_test_unbounded_format.hh
*	RCS_VERSION=@(#) RCS_LIBRARY_VERSION: 2009.01.21_1322:1328 Compiled on Thu Jan 22 08:08:48 EST 2009 for the java platform.
*	$Id: CodeGenCommon.java 1325 2009-01-21 17:59:02Z shackle $
*
*	.gen script :
*		0:load nml_test_unbounded_format.hh
*		1:clear
*		2:select_from_file nml_test_unbounded_format.hh
*		3:generate C protos>nml_test_unbounded_format_c_n.h
*		4:generate C format>nml_test_unbounded_format_c_n.c
*		5:generate C update>nml_test_unbounded_format_c_n.c
*		6:generate C++ protos>nml_test_unbounded_format_n_codegen_protos.hh
*		7:generate C++ format>nml_test_unbounded_format_n.cc
*		8:generate C++ update>nml_test_unbounded_format_n.cc
*		9:generate C++ constructor>nml_test_unbounded_format_n.cc
*		10:generate Java dict>nml_test_unbounded_format_MsgDict.java
*		11:generate Java classes >*
*
*/

// Import all NML and posemath interfaces
import rcs.nml.*;
import rcs.posemath.*;

/*
*	Class definition for ntu_s1
*	Automatically generated by NML CodeGen Java Applet.
*/
public class ntu_s1 implements Cloneable
{
	public int i = 0;
	public byte name_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public byte ntu_s1_char_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public byte ntu_s1_u_char_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public short ntu_s1_short_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public short ntu_s1_u_short_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public int ntu_s1_int_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public int ntu_s1_u_int_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public long ntu_s1_long_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public long ntu_s1_u_long_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public float ntu_s1_float_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public double ntu_s1_double_ua[] = null; /* NML_UNBOUNDED_LENGTH_ARRAY */
	public int end_i = 0;


	// Constructor 
	public ntu_s1()
	{

	}


	public void update(NMLFormatConverter nml_fc)
	{

		nml_fc.beginClass("ntu_s1",null);
		i = nml_fc.update_with_name("i",i);
		nml_fc.next_update_default("National");
		name_ua = nml_fc.update_unbounded_with_name("name_ua",name_ua);
		ntu_s1_char_ua = nml_fc.update_unbounded_with_name("ntu_s1_char_ua",ntu_s1_char_ua);
		ntu_s1_u_char_ua = nml_fc.update_unbounded_unsigned_with_name("ntu_s1_u_char_ua",ntu_s1_u_char_ua);
		ntu_s1_short_ua = nml_fc.update_unbounded_with_name("ntu_s1_short_ua",ntu_s1_short_ua);
		ntu_s1_u_short_ua = nml_fc.update_unbounded_unsigned_with_name("ntu_s1_u_short_ua",ntu_s1_u_short_ua);
		ntu_s1_int_ua = nml_fc.update_unbounded_with_name("ntu_s1_int_ua",ntu_s1_int_ua);
		ntu_s1_u_int_ua = nml_fc.update_unbounded_unsigned_with_name("ntu_s1_u_int_ua",ntu_s1_u_int_ua);
		ntu_s1_long_ua = nml_fc.update_unbounded_with_name("ntu_s1_long_ua",ntu_s1_long_ua);
		ntu_s1_u_long_ua = nml_fc.update_unbounded_unsigned_with_name("ntu_s1_u_long_ua",ntu_s1_u_long_ua);
		ntu_s1_float_ua = nml_fc.update_unbounded_with_name("ntu_s1_float_ua",ntu_s1_float_ua);
		ntu_s1_double_ua = nml_fc.update_unbounded_with_name("ntu_s1_double_ua",ntu_s1_double_ua);
		end_i = nml_fc.update_with_name("end_i",end_i);

		nml_fc.endClass("ntu_s1",null);

	}


	public Object clone() throws CloneNotSupportedException
	{
		ntu_s1 cloned_object = (ntu_s1) super.clone();
		if(this.name_ua != null) {
			cloned_object.name_ua = (byte[]) this.name_ua.clone();
		}
		if(this.ntu_s1_char_ua != null) {
			cloned_object.ntu_s1_char_ua = (byte[]) this.ntu_s1_char_ua.clone();
		}
		if(this.ntu_s1_u_char_ua != null) {
			cloned_object.ntu_s1_u_char_ua = (byte[]) this.ntu_s1_u_char_ua.clone();
		}
		if(this.ntu_s1_short_ua != null) {
			cloned_object.ntu_s1_short_ua = (short[]) this.ntu_s1_short_ua.clone();
		}
		if(this.ntu_s1_u_short_ua != null) {
			cloned_object.ntu_s1_u_short_ua = (short[]) this.ntu_s1_u_short_ua.clone();
		}
		if(this.ntu_s1_int_ua != null) {
			cloned_object.ntu_s1_int_ua = (int[]) this.ntu_s1_int_ua.clone();
		}
		if(this.ntu_s1_u_int_ua != null) {
			cloned_object.ntu_s1_u_int_ua = (int[]) this.ntu_s1_u_int_ua.clone();
		}
		if(this.ntu_s1_long_ua != null) {
			cloned_object.ntu_s1_long_ua = (long[]) this.ntu_s1_long_ua.clone();
		}
		if(this.ntu_s1_u_long_ua != null) {
			cloned_object.ntu_s1_u_long_ua = (long[]) this.ntu_s1_u_long_ua.clone();
		}
		if(this.ntu_s1_float_ua != null) {
			cloned_object.ntu_s1_float_ua = (float[]) this.ntu_s1_float_ua.clone();
		}
		if(this.ntu_s1_double_ua != null) {
			cloned_object.ntu_s1_double_ua = (double[]) this.ntu_s1_double_ua.clone();
		}
		return cloned_object;

	}
}
