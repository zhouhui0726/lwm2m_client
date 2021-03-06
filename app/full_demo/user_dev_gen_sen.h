/*! \file 
  \brief      Header implementing neccessary declarations for user specific IPSO generic sensor object 
   
   Contains macros, structures and declarations for the user specific implemtation of the IPSO generic sensor object implementation
*/

#ifndef USER_DEV_GEN_SEN_H
#define USER_DEV_GEN_SEN_H

#include <lwm2m_client.h>

#define LWM2M_USER_DEV_GEN_SEN_RES_MAX    1

#define LWM2M_USER_DEV_FLOAT_MAX_SIZE    30

extern LWM2M_OBJECT_RES_INFO user_dev_gen_sen_res_info [LWM2M_USER_DEV_GEN_SEN_RES_MAX]; 

#endif