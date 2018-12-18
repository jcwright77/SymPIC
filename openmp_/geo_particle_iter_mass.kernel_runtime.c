#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include "local_header.h"
#include "openmp_pscmc_inc.h"
#include "geo_particle_iter_mass.kernel_inc.h"
int  openmp_relng_1st_sg2_small_grids_init (openmp_pscmc_env *  pe ,openmp_relng_1st_sg2_small_grids_struct *  kerstr ){
	return  0 ;}
void  openmp_relng_1st_sg2_small_grids_get_struct_len (size_t *  len ){
((len)[0] = sizeof(openmp_relng_1st_sg2_small_grids_struct ));
}
int  openmp_relng_1st_sg2_small_grids_get_num_compute_units (openmp_relng_1st_sg2_small_grids_struct *  kerstr ){
	return  	omp_get_max_threads (  ) ;}
int  openmp_relng_1st_sg2_small_grids_get_xlen (){
	return  1 ;}
int  openmp_relng_1st_sg2_small_grids_exec (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){

#pragma omp parallel
{
	int  xid ;
	int  yid ;
	int  numt = 	omp_get_num_threads (  ) ;
	int  tid = 	omp_get_thread_num (  ) ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = tid) ; 	(  yid < scmc_internal_g_ylen ) ; (yid = 	(  yid + numt )))
	{
	for ((xid = 0) ; 	(  xid < scmc_internal_g_xlen ) ; (xid = 	(  xid + 1 )))
	{
	openmp_relng_1st_sg2_small_grids_scmc_kernel ( 	( kerstr )->inoutput , 	( kerstr )->xyzw , 	( kerstr )->cu_cache , 	( kerstr )->cu_xyzw , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , 	( kerstr )->fieldE , 	( kerstr )->fieldB , 	( kerstr )->fieldB1 , 	( kerstr )->LFoutJ , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->grid_cache_len)[0] , (	( kerstr )->cu_cache_length)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->Mass0)[0] , (	( kerstr )->Charge0)[0] , (	( kerstr )->Deltat)[0] , (	( kerstr )->Tori_X0)[0] , (	( kerstr )->Solve_Err)[0] , yid , scmc_internal_g_ylen );
}}}	return  0 ;}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_inoutput (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->inoutput = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_xyzw (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xyzw = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_cu_cache (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_cu_xyzw (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_xyzw = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_xoffset (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_yoffset (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_zoffset (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_fieldE (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldE = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_fieldB (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_fieldB1 (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB1 = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_LFoutJ (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->LFoutJ = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_XLEN (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_YLEN (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_ZLEN (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_ovlp (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_numvec (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_num_ele (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_grid_cache_len (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->grid_cache_len = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_cu_cache_length (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache_length = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_DELTA_X (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_DELTA_Y (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_DELTA_Z (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_Mass0 (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Mass0 = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_Charge0 (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Charge0 = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_Deltat (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Deltat = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_Tori_X0 (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Tori_X0 = pm->d_data);
}
int  openmp_relng_1st_sg2_small_grids_scmc_set_parameter_Solve_Err (openmp_relng_1st_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Solve_Err = pm->d_data);
}
int  openmp_relng_1st_small_grids_init (openmp_pscmc_env *  pe ,openmp_relng_1st_small_grids_struct *  kerstr ){
	return  0 ;}
void  openmp_relng_1st_small_grids_get_struct_len (size_t *  len ){
((len)[0] = sizeof(openmp_relng_1st_small_grids_struct ));
}
int  openmp_relng_1st_small_grids_get_num_compute_units (openmp_relng_1st_small_grids_struct *  kerstr ){
	return  	omp_get_max_threads (  ) ;}
int  openmp_relng_1st_small_grids_get_xlen (){
	return  1 ;}
int  openmp_relng_1st_small_grids_exec (openmp_relng_1st_small_grids_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){

#pragma omp parallel
{
	int  xid ;
	int  yid ;
	int  numt = 	omp_get_num_threads (  ) ;
	int  tid = 	omp_get_thread_num (  ) ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = tid) ; 	(  yid < scmc_internal_g_ylen ) ; (yid = 	(  yid + numt )))
	{
	for ((xid = 0) ; 	(  xid < scmc_internal_g_xlen ) ; (xid = 	(  xid + 1 )))
	{
	openmp_relng_1st_small_grids_scmc_kernel ( 	( kerstr )->inoutput , 	( kerstr )->xyzw , 	( kerstr )->cu_cache , 	( kerstr )->cu_xyzw , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , 	( kerstr )->fieldE , 	( kerstr )->fieldB , 	( kerstr )->fieldB1 , 	( kerstr )->LFoutJ , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->grid_cache_len)[0] , (	( kerstr )->cu_cache_length)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->Mass0)[0] , (	( kerstr )->Charge0)[0] , (	( kerstr )->Deltat)[0] , (	( kerstr )->Tori_X0)[0] , (	( kerstr )->Solve_Err)[0] , yid , scmc_internal_g_ylen );
}}}	return  0 ;}
int  openmp_relng_1st_small_grids_scmc_set_parameter_inoutput (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->inoutput = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_xyzw (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xyzw = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_cu_cache (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_cu_xyzw (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_xyzw = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_xoffset (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_yoffset (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_zoffset (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_fieldE (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldE = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_fieldB (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_fieldB1 (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB1 = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_LFoutJ (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->LFoutJ = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_XLEN (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_YLEN (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_ZLEN (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_ovlp (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_numvec (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_num_ele (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_grid_cache_len (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->grid_cache_len = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_cu_cache_length (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache_length = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_DELTA_X (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_DELTA_Y (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_DELTA_Z (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_Mass0 (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Mass0 = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_Charge0 (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Charge0 = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_Deltat (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Deltat = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_Tori_X0 (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Tori_X0 = pm->d_data);
}
int  openmp_relng_1st_small_grids_scmc_set_parameter_Solve_Err (openmp_relng_1st_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Solve_Err = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_init (openmp_pscmc_env *  pe ,openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ){
	return  0 ;}
void  openmp_geo_rel_1st_bwd_sg2_small_grids_get_struct_len (size_t *  len ){
((len)[0] = sizeof(openmp_geo_rel_1st_bwd_sg2_small_grids_struct ));
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_get_num_compute_units (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ){
	return  	omp_get_max_threads (  ) ;}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_get_xlen (){
	return  1 ;}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_exec (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){

#pragma omp parallel
{
	int  xid ;
	int  yid ;
	int  numt = 	omp_get_num_threads (  ) ;
	int  tid = 	omp_get_thread_num (  ) ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = tid) ; 	(  yid < scmc_internal_g_ylen ) ; (yid = 	(  yid + numt )))
	{
	for ((xid = 0) ; 	(  xid < scmc_internal_g_xlen ) ; (xid = 	(  xid + 1 )))
	{
	openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_kernel ( 	( kerstr )->inoutput , 	( kerstr )->xyzw , 	( kerstr )->cu_cache , 	( kerstr )->cu_xyzw , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , 	( kerstr )->fieldE , 	( kerstr )->fieldB , 	( kerstr )->fieldB1 , 	( kerstr )->LFoutJ , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->grid_cache_len)[0] , (	( kerstr )->cu_cache_length)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->Mass0)[0] , (	( kerstr )->Charge0)[0] , (	( kerstr )->Deltat)[0] , (	( kerstr )->Tori_X0)[0] , (	( kerstr )->Solve_Err)[0] , yid , scmc_internal_g_ylen );
}}}	return  0 ;}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_inoutput (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->inoutput = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_xyzw (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_cu_cache (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_cu_xyzw (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_xoffset (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_yoffset (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_zoffset (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_fieldE (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldE = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_fieldB (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_fieldB1 (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB1 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_LFoutJ (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->LFoutJ = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_XLEN (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_YLEN (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_ZLEN (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_ovlp (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_numvec (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_num_ele (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_grid_cache_len (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->grid_cache_len = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_cu_cache_length (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache_length = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_DELTA_X (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_DELTA_Y (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_DELTA_Z (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_Mass0 (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Mass0 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_Charge0 (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Charge0 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_Deltat (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Deltat = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_Tori_X0 (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Tori_X0 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_sg2_small_grids_scmc_set_parameter_Solve_Err (openmp_geo_rel_1st_bwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Solve_Err = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_init (openmp_pscmc_env *  pe ,openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ){
	return  0 ;}
void  openmp_geo_rel_1st_bwd_small_grids_get_struct_len (size_t *  len ){
((len)[0] = sizeof(openmp_geo_rel_1st_bwd_small_grids_struct ));
}
int  openmp_geo_rel_1st_bwd_small_grids_get_num_compute_units (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ){
	return  	omp_get_max_threads (  ) ;}
int  openmp_geo_rel_1st_bwd_small_grids_get_xlen (){
	return  1 ;}
int  openmp_geo_rel_1st_bwd_small_grids_exec (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){

#pragma omp parallel
{
	int  xid ;
	int  yid ;
	int  numt = 	omp_get_num_threads (  ) ;
	int  tid = 	omp_get_thread_num (  ) ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = tid) ; 	(  yid < scmc_internal_g_ylen ) ; (yid = 	(  yid + numt )))
	{
	for ((xid = 0) ; 	(  xid < scmc_internal_g_xlen ) ; (xid = 	(  xid + 1 )))
	{
	openmp_geo_rel_1st_bwd_small_grids_scmc_kernel ( 	( kerstr )->inoutput , 	( kerstr )->xyzw , 	( kerstr )->cu_cache , 	( kerstr )->cu_xyzw , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , 	( kerstr )->fieldE , 	( kerstr )->fieldB , 	( kerstr )->fieldB1 , 	( kerstr )->LFoutJ , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->grid_cache_len)[0] , (	( kerstr )->cu_cache_length)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->Mass0)[0] , (	( kerstr )->Charge0)[0] , (	( kerstr )->Deltat)[0] , (	( kerstr )->Tori_X0)[0] , (	( kerstr )->Solve_Err)[0] , yid , scmc_internal_g_ylen );
}}}	return  0 ;}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_inoutput (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->inoutput = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_xyzw (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_cu_cache (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_cu_xyzw (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_xoffset (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_yoffset (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_zoffset (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_fieldE (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldE = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_fieldB (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_fieldB1 (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB1 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_LFoutJ (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->LFoutJ = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_XLEN (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_YLEN (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_ZLEN (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_ovlp (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_numvec (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_num_ele (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_grid_cache_len (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->grid_cache_len = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_cu_cache_length (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache_length = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_DELTA_X (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_DELTA_Y (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_DELTA_Z (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_Mass0 (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Mass0 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_Charge0 (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Charge0 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_Deltat (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Deltat = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_Tori_X0 (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Tori_X0 = pm->d_data);
}
int  openmp_geo_rel_1st_bwd_small_grids_scmc_set_parameter_Solve_Err (openmp_geo_rel_1st_bwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Solve_Err = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_init (openmp_pscmc_env *  pe ,openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ){
	return  0 ;}
void  openmp_geo_rel_1st_fwd_sg2_small_grids_get_struct_len (size_t *  len ){
((len)[0] = sizeof(openmp_geo_rel_1st_fwd_sg2_small_grids_struct ));
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_get_num_compute_units (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ){
	return  	omp_get_max_threads (  ) ;}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_get_xlen (){
	return  1 ;}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_exec (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){

#pragma omp parallel
{
	int  xid ;
	int  yid ;
	int  numt = 	omp_get_num_threads (  ) ;
	int  tid = 	omp_get_thread_num (  ) ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = tid) ; 	(  yid < scmc_internal_g_ylen ) ; (yid = 	(  yid + numt )))
	{
	for ((xid = 0) ; 	(  xid < scmc_internal_g_xlen ) ; (xid = 	(  xid + 1 )))
	{
	openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_kernel ( 	( kerstr )->inoutput , 	( kerstr )->xyzw , 	( kerstr )->cu_cache , 	( kerstr )->cu_xyzw , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , 	( kerstr )->fieldE , 	( kerstr )->fieldB , 	( kerstr )->fieldB1 , 	( kerstr )->LFoutJ , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->grid_cache_len)[0] , (	( kerstr )->cu_cache_length)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->Mass0)[0] , (	( kerstr )->Charge0)[0] , (	( kerstr )->Deltat)[0] , (	( kerstr )->Tori_X0)[0] , (	( kerstr )->Solve_Err)[0] , yid , scmc_internal_g_ylen );
}}}	return  0 ;}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_inoutput (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->inoutput = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_xyzw (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_cu_cache (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_cu_xyzw (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_xoffset (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_yoffset (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_zoffset (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_fieldE (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldE = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_fieldB (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_fieldB1 (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB1 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_LFoutJ (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->LFoutJ = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_XLEN (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_YLEN (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_ZLEN (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_ovlp (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_numvec (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_num_ele (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_grid_cache_len (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->grid_cache_len = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_cu_cache_length (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache_length = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_DELTA_X (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_DELTA_Y (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_DELTA_Z (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_Mass0 (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Mass0 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_Charge0 (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Charge0 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_Deltat (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Deltat = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_Tori_X0 (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Tori_X0 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_sg2_small_grids_scmc_set_parameter_Solve_Err (openmp_geo_rel_1st_fwd_sg2_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Solve_Err = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_init (openmp_pscmc_env *  pe ,openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ){
	return  0 ;}
void  openmp_geo_rel_1st_fwd_small_grids_get_struct_len (size_t *  len ){
((len)[0] = sizeof(openmp_geo_rel_1st_fwd_small_grids_struct ));
}
int  openmp_geo_rel_1st_fwd_small_grids_get_num_compute_units (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ){
	return  	omp_get_max_threads (  ) ;}
int  openmp_geo_rel_1st_fwd_small_grids_get_xlen (){
	return  1 ;}
int  openmp_geo_rel_1st_fwd_small_grids_exec (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,long  scmc_internal_g_xlen ,long  scmc_internal_g_ylen ){

#pragma omp parallel
{
	int  xid ;
	int  yid ;
	int  numt = 	omp_get_num_threads (  ) ;
	int  tid = 	omp_get_thread_num (  ) ;
	int  ysingle = 	(  	(  scmc_internal_g_ylen + 	(  numt - 1 ) ) / numt ) ;
	int  ymin = 	(  tid * ysingle ) ;
	int  ymax = 	(  	(  1 + tid ) * ysingle ) ;
	for ((yid = tid) ; 	(  yid < scmc_internal_g_ylen ) ; (yid = 	(  yid + numt )))
	{
	for ((xid = 0) ; 	(  xid < scmc_internal_g_xlen ) ; (xid = 	(  xid + 1 )))
	{
	openmp_geo_rel_1st_fwd_small_grids_scmc_kernel ( 	( kerstr )->inoutput , 	( kerstr )->xyzw , 	( kerstr )->cu_cache , 	( kerstr )->cu_xyzw , 	( kerstr )->xoffset , 	( kerstr )->yoffset , 	( kerstr )->zoffset , 	( kerstr )->fieldE , 	( kerstr )->fieldB , 	( kerstr )->fieldB1 , 	( kerstr )->LFoutJ , (	( kerstr )->XLEN)[0] , (	( kerstr )->YLEN)[0] , (	( kerstr )->ZLEN)[0] , (	( kerstr )->ovlp)[0] , (	( kerstr )->numvec)[0] , (	( kerstr )->num_ele)[0] , (	( kerstr )->grid_cache_len)[0] , (	( kerstr )->cu_cache_length)[0] , (	( kerstr )->DELTA_X)[0] , (	( kerstr )->DELTA_Y)[0] , (	( kerstr )->DELTA_Z)[0] , (	( kerstr )->Mass0)[0] , (	( kerstr )->Charge0)[0] , (	( kerstr )->Deltat)[0] , (	( kerstr )->Tori_X0)[0] , (	( kerstr )->Solve_Err)[0] , yid , scmc_internal_g_ylen );
}}}	return  0 ;}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_inoutput (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->inoutput = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_xyzw (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_cu_cache (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_cu_xyzw (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_xyzw = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_xoffset (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->xoffset = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_yoffset (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->yoffset = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_zoffset (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->zoffset = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_fieldE (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldE = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_fieldB (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_fieldB1 (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->fieldB1 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_LFoutJ (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->LFoutJ = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_XLEN (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->XLEN = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_YLEN (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->YLEN = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_ZLEN (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ZLEN = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_ovlp (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->ovlp = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_numvec (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->numvec = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_num_ele (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->num_ele = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_grid_cache_len (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->grid_cache_len = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_cu_cache_length (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->cu_cache_length = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_DELTA_X (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_X = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_DELTA_Y (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Y = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_DELTA_Z (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->DELTA_Z = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_Mass0 (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Mass0 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_Charge0 (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Charge0 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_Deltat (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Deltat = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_Tori_X0 (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Tori_X0 = pm->d_data);
}
int  openmp_geo_rel_1st_fwd_small_grids_scmc_set_parameter_Solve_Err (openmp_geo_rel_1st_fwd_small_grids_struct *  kerstr ,openmp_pscmc_mem *  pm ){
(	( kerstr )->Solve_Err = pm->d_data);
}
