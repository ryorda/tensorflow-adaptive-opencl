/* ###### AutoGenerated File. Generated Data:Tue Aug 04 19:04:34 CST 2015 ###### */

#ifndef __OPENCL_CL_FILES_H__
#define __OPENCL_CL_FILES_H__

const char *CLCL_HELLO =
        "#pragma OPENCL EXTENSION cl_khr_byte_addressable_store : enable\n"
                "\n"
                "__kernel void hello(__global char* string)\n"
                "{\n"
                "   string[0] = 'H';\n"
                "   string[1] = 'e';\n"
                "   string[2] = 'l';\n"
                "   string[3] = 'l';\n"
                "   string[4] = 'o';\n"
                "   string[5] = '\\0';\n"
                "}\n"
                "";


#endif

/* ###### End AutoGenerated File. ###### */