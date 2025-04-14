#include "ne_ds.h"
#include "Enhanced_BMS_7ded21a_1_ds_zc.h"
#include "Enhanced_BMS_7ded21a_1_ds_tdxy_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_y.h"
#include "Enhanced_BMS_7ded21a_1_ds_nldv.h"
#include "Enhanced_BMS_7ded21a_1_ds_eq_tol.h"
#include "Enhanced_BMS_7ded21a_1_ds_qx_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_sclv.h"
#include "Enhanced_BMS_7ded21a_1_ds_obs_all.h"
#include "Enhanced_BMS_7ded21a_1_ds_obs_exp.h"
#include "Enhanced_BMS_7ded21a_1_ds_var_tol.h"
#include "Enhanced_BMS_7ded21a_1_ds_mode.h"
#include "Enhanced_BMS_7ded21a_1_ds_vmm.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxm_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_m.h"
#include "Enhanced_BMS_7ded21a_1_ds_log.h"
#include "Enhanced_BMS_7ded21a_1_ds_obs_act.h"
#include "Enhanced_BMS_7ded21a_1_ds_imax.h"
#include "Enhanced_BMS_7ded21a_1_ds_imin.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxicrm_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_obs_il.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxicr_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_vpf.h"
#include "Enhanced_BMS_7ded21a_1_ds_m_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_slf0.h"
#include "Enhanced_BMS_7ded21a_1_ds_slf.h"
#include "Enhanced_BMS_7ded21a_1_ds_tdxf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_a_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_duf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_ic.h"
#include "Enhanced_BMS_7ded21a_1_ds_slv.h"
#include "Enhanced_BMS_7ded21a_1_ds_vmf.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxf.h"
#include "Enhanced_BMS_7ded21a_1_ds_f.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxy.h"
#include "Enhanced_BMS_7ded21a_1_ds_tduf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_vsf.h"
#include "Enhanced_BMS_7ded21a_1_ds_a.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxdelt_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxm.h"
#include "Enhanced_BMS_7ded21a_1_ds_lv.h"
#include "Enhanced_BMS_7ded21a_1_ds_dnf_v_x.h"
#include "Enhanced_BMS_7ded21a_1_ds_dnf_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_mdxy_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxy_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_dxcer_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_icrm_p.h"
#include "Enhanced_BMS_7ded21a_1_ds_duf.h"
#include "Enhanced_BMS_7ded21a_1_ds_assert.h"
#include "Enhanced_BMS_7ded21a_1_ds.h"
#include "ssc_ml_fun.h"
#include "Enhanced_BMS_7ded21a_1_ds_external_struct.h"
#include "Enhanced_BMS_7ded21a_1_ds_externals.h"
#include "Enhanced_BMS_7ded21a_1_ds_sys_struct.h"
static int32_T ds_ddm_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_ddm
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dum ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_b_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_b ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_ddf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpdxf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dpdxf ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dwf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dwf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dnf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cer ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddcer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr_im ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_id ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_il ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxicrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddicrm_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_freqs ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_solverhits ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_mduy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_cache_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_cache_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_t ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qx ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimin ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimax ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dwf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxcer_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_solverhits ( const NeDynamicSystem * ds , PmAllocator * allocator )
; static NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dty_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_zc ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cache_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_r
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_init_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_log ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_assert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_passert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_iassert (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_del_t ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v0 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_tmax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_act ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_all (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_il ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_l ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_j ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qu_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_var_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_eq_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_slv ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_nldv ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sclv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imin ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_imax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dimax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static void release_reference ( NeDynamicSystem * ds ) ; static void
get_reference ( NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics
( NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 54 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 0U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 2U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 4U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 3U , 5U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 3U , 8U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 3U , 11U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 3U , 14U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 17U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 18U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 20U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 22U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 3U , 23U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 3U , 26U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 3U , 29U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 3U , 32U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 35U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 36U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 38U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 40U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 3U , 41U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 3U , 44U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 3U , 47U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 3U , 50U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 53U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 54U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 55U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 56U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 57U , FALSE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 58U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 59U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 60U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 61U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 62U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 63U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 64U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 65U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 3U , 66U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 3U , 69U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 3U , 72U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 3U , 75U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 3U , 78U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 3U , 81U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 3U , 84U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 3U , 87U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 3U , 90U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 3U , 93U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 3U , 96U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 3U , 99U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 3U , 102U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 3U , 105U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 3U , 108U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 3U , 111U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 3U , 114U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 3U , 117U , TRUE , 1.0 ,
"1" , } } ; static NeCERData * s_cer_data = NULL ; static NeICRData
s_icr_data [ 12 ] = { { "" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 0U , } , { "" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 1U , } , { "" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 2U , } , { "" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 3U , } , { "" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 4U , } , { "" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 5U , } , { "" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1U , 6U , } , { "" , 0U ,
0 , "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1U , 7U , } , { "" ,
0U , 0 , "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1U , 8U , } , {
"" , 0U , 0 , "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1U , 9U , }
, { "" , 0U , 0 , "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1U ,
10U , } , { "" , 0U , 0 , "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" ,
1U , 11U , } } ; static NeVariableData s_variable_data [ 54 ] = { {
"Battery.Battery_Table_Based.thermalModel.cell_temperature" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "cell_temperature" , } , {
"Battery.Battery_Table_Based.electricalModel.charge" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "Charge" , } , {
"Battery.Battery_Table_Based.electricalModel.num_cycles" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based.electricalModel.rcVoltageDrop" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.rcVoltageDrop" , 1U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.rcVoltageDrop" , 2U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.rcVoltageDrop" , 3U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.rcVoltageDrop" , 4U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based1.thermalModel.cell_temperature" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "cell_temperature" , } , {
"Battery.Battery_Table_Based1.electricalModel.charge" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Charge" , } , {
"Battery.Battery_Table_Based1.electricalModel.num_cycles" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based1.electricalModel.rcVoltageDrop" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based1.electricalModel.rcVoltageDrop" , 1U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based1.electricalModel.rcVoltageDrop" , 2U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based1.electricalModel.rcVoltageDrop" , 3U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based1.electricalModel.rcVoltageDrop" , 4U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based2.thermalModel.cell_temperature" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "cell_temperature" , } , {
"Battery.Battery_Table_Based2.electricalModel.charge" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Charge" , } , {
"Battery.Battery_Table_Based2.electricalModel.num_cycles" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based2.electricalModel.rcVoltageDrop" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based2.electricalModel.rcVoltageDrop" , 1U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based2.electricalModel.rcVoltageDrop" , 2U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based2.electricalModel.rcVoltageDrop" , 3U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based2.electricalModel.rcVoltageDrop" , 4U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 5 , "1x5" } , NE_INIT_MODE_MANDATORY ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.p.v" , 0U , 1 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.D.v" , 0U , 1 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.D.v" , 0U , 1 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.Battery_Table_Based.electricalModel.n.v" , 0U , 1 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.Battery_Table_Based.stateOfCharge" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "State of charge" , } , {
 "Battery.Battery_Table_Based.electricalModel.xGdynamic.xGdynamic_retained_variable_entry2"
, 0U , 0 , "Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable representing one of the elements of xGdynamic." , } , {
"Battery.Battery_Table_Based.electricalModel.q_generated" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "q_generated" , } , {
"Battery.MOSFET_Ideal_Switching4.D.v" , 0U , 1 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.D.v" , 0U , 1 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.Battery_Table_Based1.electricalModel.n.v" , 0U , 1 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.Battery_Table_Based1.stateOfCharge" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "State of charge" , } , {
 "Battery.Battery_Table_Based1.electricalModel.xGdynamic.xGdynamic_retained_variable_entry0"
, 0U , 0 , "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable representing one of the elements of xGdynamic." , } , {
"Battery.Battery_Table_Based1.electricalModel.q_generated" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "q_generated" , } , {
"Battery.MOSFET_Ideal_Switching2.D.v" , 0U , 1 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.D.v" , 0U , 1 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Battery.Battery_Table_Based2.stateOfCharge" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "State of charge" , } , {
 "Battery.Battery_Table_Based2.electricalModel.xGdynamic.xGdynamic_retained_variable_entry1"
, 0U , 0 , "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable representing one of the elements of xGdynamic." , } , {
"Battery.Battery_Table_Based2.electricalModel.q_generated" , 0U , 0 ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "q_generated" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.i" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.threshold" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.i" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.threshold" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.i" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.threshold" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.i" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.threshold" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.i" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.threshold" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.i" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.threshold" , 0U , 0 ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "threshold" , } } ; static
NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 510 ] = { { "Battery.Battery_Table_Based.H.T" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based.electricalModel.cellAgingTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cellAgingTemperature" , } , {
"Battery.Battery_Table_Based.electricalModel.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery cell look-up temperature" , }
, { "Battery.Battery_Table_Based.electricalModel.charge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "A*hr" , 1.0 ,
"C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge" , } , {
"Battery.Battery_Table_Based.electricalModel.dynamicCellTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "dynamicCellTemperature" , } , {
"Battery.Battery_Table_Based.electricalModel.i" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current (positive in)" , } , {
"Battery.Battery_Table_Based.electricalModel.n.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based.electricalModel.numCycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "numCycles" , } , {
"Battery.Battery_Table_Based.electricalModel.num_cycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based.electricalModel.stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "State of charge" , } , {
"Battery.Battery_Table_Based.electricalModel.xdVint_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "OCVFade" , } , {
"Battery.Battery_Table_Based.electricalModel.p.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based.electricalModel.rcVoltageDrop" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 5 , "1x5" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.xGdynamic" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 5 , "1x5" } , "1/Ohm" , 1.0
, "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/Dynamic resistances (Internal)" , } , {
"Battery.Battery_Table_Based.electricalModel.xGsd" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1/Ohm" , 1.0
, "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N) (Internal)" , }
, { "Battery.Battery_Table_Based.electricalModel.xdR0_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "R0Fade" , } , {
"Battery.Battery_Table_Based.electricalModel.q_generated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q_generated" , } , {
"Battery.Battery_Table_Based.electricalModel.soc" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "SOC" , } , {
"Battery.Battery_Table_Based.electricalModel.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Terminal voltage" , } , {
"Battery.Battery_Table_Based.electricalModel.xRleak_fading" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "RLeakFade" , } , {
"Battery.Battery_Table_Based.electricalModel.xdAH_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "AHFade" , } , {
"Battery.Battery_Table_Based.electricalModel.xdR_fading" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "xdR_fading" , } , {
"Battery.Battery_Table_Based.charge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "C" , 1.0 ,
"C" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Charge" , } , {
"Battery.Battery_Table_Based.constant.O" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Battery_Table_Based.constantdRDynamic.O" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Battery_Table_Based.i" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Battery.Battery_Table_Based.n.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based.num_cycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based.ocv" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Open-circuit voltage" , } , {
"Battery.Battery_Table_Based.p.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based.power_dissipated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Power dissipated" , } , {
"Battery.Battery_Table_Based.soc" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "SOC" , } , {
"Battery.Battery_Table_Based.stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "State of charge" , } , {
"Battery.Battery_Table_Based.terminator.I" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Battery_Table_Based.thermalModel.H.T" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based.thermalModel.Q" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Heat flow" , } , {
"Battery.Battery_Table_Based.thermalModel.cellTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cellTemperature" , } , {
"Battery.Battery_Table_Based.thermalModel.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cell_temperature" , } , {
"Battery.Battery_Table_Based.thermalModel.q_generated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q_generated" , } , {
"Battery.Battery_Table_Based.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Terminal voltage" , } , {
"Battery.Battery_Table_Based.vrc1" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Voltage drop of RC branch 1" , } , {
"Battery.Battery_Table_Based1.H.T" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based1.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based1.electricalModel.cellAgingTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cellAgingTemperature" , } , {
"Battery.Battery_Table_Based1.electricalModel.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery cell look-up temperature" , }
, { "Battery.Battery_Table_Based1.electricalModel.charge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "A*hr" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge" , } , {
"Battery.Battery_Table_Based1.electricalModel.dynamicCellTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "dynamicCellTemperature" , } , {
"Battery.Battery_Table_Based1.electricalModel.i" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current (positive in)" , } , {
"Battery.Battery_Table_Based1.electricalModel.n.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based1.electricalModel.numCycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "numCycles" , } , {
"Battery.Battery_Table_Based1.electricalModel.num_cycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based1.electricalModel.stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "State of charge" , } , {
"Battery.Battery_Table_Based1.electricalModel.xdVint_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "OCVFade" , } , {
"Battery.Battery_Table_Based1.electricalModel.p.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based1.electricalModel.rcVoltageDrop" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 5 , "1x5" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based1.electricalModel.xGdynamic" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 5 , "1x5" } , "1/Ohm" , 1.0
, "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/Dynamic resistances (Internal)" , } , {
"Battery.Battery_Table_Based1.electricalModel.xGsd" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1/Ohm" , 1.0
, "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N) (Internal)" , }
, { "Battery.Battery_Table_Based1.electricalModel.xdR0_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "R0Fade" , } , {
"Battery.Battery_Table_Based1.electricalModel.q_generated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q_generated" , } , {
"Battery.Battery_Table_Based1.electricalModel.soc" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "SOC" , } , {
"Battery.Battery_Table_Based1.electricalModel.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Terminal voltage" , } , {
"Battery.Battery_Table_Based1.electricalModel.xRleak_fading" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "RLeakFade" , } , {
"Battery.Battery_Table_Based1.electricalModel.xdAH_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "AHFade" , } , {
"Battery.Battery_Table_Based1.electricalModel.xdR_fading" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "xdR_fading" , } , {
"Battery.Battery_Table_Based1.charge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "C" , 1.0 ,
"C" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Charge" , } , {
"Battery.Battery_Table_Based1.constant.O" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Battery_Table_Based1.constantdRDynamic.O" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Battery_Table_Based1.i" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Battery.Battery_Table_Based1.n.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based1.num_cycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based1.ocv" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Open-circuit voltage" , } , {
"Battery.Battery_Table_Based1.p.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based1.power_dissipated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Power dissipated" , } , {
"Battery.Battery_Table_Based1.soc" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "SOC" , } , {
"Battery.Battery_Table_Based1.stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "State of charge" , } , {
"Battery.Battery_Table_Based1.terminator.I" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Battery_Table_Based1.thermalModel.H.T" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based1.thermalModel.Q" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Heat flow" , } , {
"Battery.Battery_Table_Based1.thermalModel.cellTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cellTemperature" , } , {
"Battery.Battery_Table_Based1.thermalModel.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cell_temperature" , } , {
"Battery.Battery_Table_Based1.thermalModel.q_generated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q_generated" , } , {
"Battery.Battery_Table_Based1.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Terminal voltage" , } , {
"Battery.Battery_Table_Based1.vrc1" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Voltage drop of RC branch 1" , } , {
"Battery.Battery_Table_Based1_soc0" ,
"Enhanced_BMS/Battery/PS-Simulink\nConverter1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery_Table_Based1_soc0" , } , {
"Battery.Battery_Table_Based2.H.T" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based2.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based2.electricalModel.cellAgingTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cellAgingTemperature" , } , {
"Battery.Battery_Table_Based2.electricalModel.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery cell look-up temperature" , }
, { "Battery.Battery_Table_Based2.electricalModel.charge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "A*hr" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge" , } , {
"Battery.Battery_Table_Based2.electricalModel.dynamicCellTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "dynamicCellTemperature" , } , {
"Battery.Battery_Table_Based2.electricalModel.i" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current (positive in)" , } , {
"Battery.Battery_Table_Based2.electricalModel.n.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based2.electricalModel.numCycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "numCycles" , } , {
"Battery.Battery_Table_Based2.electricalModel.num_cycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based2.electricalModel.stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "State of charge" , } , {
"Battery.Battery_Table_Based2.electricalModel.xdVint_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "OCVFade" , } , {
"Battery.Battery_Table_Based2.electricalModel.p.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based2.electricalModel.rcVoltageDrop" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 5 , "1x5" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage drop through each RC pair (Internal)" , } , {
"Battery.Battery_Table_Based2.electricalModel.xGdynamic" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 5 , "1x5" } , "1/Ohm" , 1.0
, "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"1/Dynamic resistances (Internal)" , } , {
"Battery.Battery_Table_Based2.electricalModel.xGsd" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1/Ohm" , 1.0
, "C^2*s/(kg*m^2)" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N) (Internal)" , }
, { "Battery.Battery_Table_Based2.electricalModel.xdR0_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "R0Fade" , } , {
"Battery.Battery_Table_Based2.electricalModel.q_generated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q_generated" , } , {
"Battery.Battery_Table_Based2.electricalModel.soc" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "SOC" , } , {
"Battery.Battery_Table_Based2.electricalModel.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Terminal voltage" , } , {
"Battery.Battery_Table_Based2.electricalModel.xRleak_fading" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "RLeakFade" , } , {
"Battery.Battery_Table_Based2.electricalModel.xdAH_fade" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "AHFade" , } , {
"Battery.Battery_Table_Based2.electricalModel.xdR_fading" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "xdR_fading" , } , {
"Battery.Battery_Table_Based2.charge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "C" , 1.0 ,
"C" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Charge" , } , {
"Battery.Battery_Table_Based2.constant.O" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Battery_Table_Based2.constantdRDynamic.O" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Battery_Table_Based2.i" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Battery.Battery_Table_Based2.n.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based2.num_cycles" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Discharge cycles" , } , {
"Battery.Battery_Table_Based2.ocv" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Open-circuit voltage" , } , {
"Battery.Battery_Table_Based2.p.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Battery_Table_Based2.power_dissipated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Power dissipated" , } , {
"Battery.Battery_Table_Based2.soc" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "SOC" , } , {
"Battery.Battery_Table_Based2.stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "State of charge" , } , {
"Battery.Battery_Table_Based2.terminator.I" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Battery_Table_Based2.thermalModel.H.T" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery.Battery_Table_Based2.thermalModel.Q" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Heat flow" , } , {
"Battery.Battery_Table_Based2.thermalModel.cellTemperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cellTemperature" , } , {
"Battery.Battery_Table_Based2.thermalModel.cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "K" , 1.0 ,
"K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "cell_temperature" , } , {
"Battery.Battery_Table_Based2.thermalModel.q_generated" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q_generated" , } , {
"Battery.Battery_Table_Based2.v" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Terminal voltage" , } , {
"Battery.Battery_Table_Based2.vrc1" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Voltage drop of RC branch 1" , } , {
"Battery.Battery_Table_Based2_soc0" ,
"Enhanced_BMS/Battery/PS-Simulink\nConverter" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery_Table_Based2_soc0" , } , {
"Battery.Battery_Table_Based_soc0" ,
"Enhanced_BMS/Battery/PS-Simulink\nConverter2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Battery_Table_Based_soc0" , } , {
"Battery.Convective_Heat_Transfer1.A.T" ,
"Enhanced_BMS/Battery/Convective Heat Transfer1" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Convective_Heat_Transfer1.B.T" ,
"Enhanced_BMS/Battery/Convective Heat Transfer1" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Convective_Heat_Transfer1.Q" ,
"Enhanced_BMS/Battery/Convective Heat Transfer1" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Heat flow rate" , } , {
"Battery.Convective_Heat_Transfer1.T" ,
"Enhanced_BMS/Battery/Convective Heat Transfer1" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature difference" , } , {
"Battery.Convective_Heat_Transfer1.var_heat_tr_coeff" ,
"Enhanced_BMS/Battery/Convective Heat Transfer1" , { 1 , "1x1" } ,
"W/(K*m^2)" , 1.0 , "kg/(K*s^3)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K"
, } , { "Battery.Convective_Heat_Transfer2.A.T" ,
"Enhanced_BMS/Battery/Convective Heat Transfer2" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Convective_Heat_Transfer2.B.T" ,
"Enhanced_BMS/Battery/Convective Heat Transfer2" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Convective_Heat_Transfer2.Q" ,
"Enhanced_BMS/Battery/Convective Heat Transfer2" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Heat flow rate" , } , {
"Battery.Convective_Heat_Transfer2.T" ,
"Enhanced_BMS/Battery/Convective Heat Transfer2" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature difference" , } , {
"Battery.Convective_Heat_Transfer2.var_heat_tr_coeff" ,
"Enhanced_BMS/Battery/Convective Heat Transfer2" , { 1 , "1x1" } ,
"W/(K*m^2)" , 1.0 , "kg/(K*s^3)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K"
, } , { "Battery.Current_Sensor.I" , "Enhanced_BMS/Battery/Current Sensor" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Current_Sensor.i1" , "Enhanced_BMS/Battery/Current Sensor" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Current_Sensor.n.v" , "Enhanced_BMS/Battery/Current Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Current_Sensor.p.v" , "Enhanced_BMS/Battery/Current Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Current_Sensor1.I" , "Enhanced_BMS/Battery/Current Sensor1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Current_Sensor1.i1" , "Enhanced_BMS/Battery/Current Sensor1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Current_Sensor1.n.v" , "Enhanced_BMS/Battery/Current Sensor1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Current_Sensor1.p.v" , "Enhanced_BMS/Battery/Current Sensor1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Current_Sensor1_I0" , "Enhanced_BMS/Battery/PS-Simulink\nConverter7"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor1_I0" , } , { "Battery.Current_Sensor2.I" ,
"Enhanced_BMS/Battery/Current Sensor2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Current_Sensor2.i1" , "Enhanced_BMS/Battery/Current Sensor2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Current_Sensor2.n.v" , "Enhanced_BMS/Battery/Current Sensor2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Current_Sensor2.p.v" , "Enhanced_BMS/Battery/Current Sensor2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Current_Sensor2_I0" , "Enhanced_BMS/Battery/PS-Simulink\nConverter8"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor2_I0" , } , { "Battery.Current_Sensor_I0" ,
"Enhanced_BMS/Battery/PS-Simulink\nConverter6" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" , } , {
"Battery.MOSFET_Ideal_Switching.D.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Battery.MOSFET_Ideal_Switching.G_elec.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.S.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.BV_threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.Qscale" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.timerFaultTransition" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "s" , 1.0
, "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Battery.MOSFET_Ideal_Switching.diode.private.Diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.Qj" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Battery.MOSFET_Ideal_Switching.diode.TJ" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Battery.MOSFET_Ideal_Switching.diode.Tsim" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Battery.MOSFET_Ideal_Switching.diode.fault_input" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Battery.MOSFET_Ideal_Switching.diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching.diode.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.MOSFET_Ideal_Switching.diode.i_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Battery.MOSFET_Ideal_Switching.diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching.diode.i_out" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Battery.MOSFET_Ideal_Switching.diode.ni.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Battery.MOSFET_Ideal_Switching.diode.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.v_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching.diode.v_on" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Battery.MOSFET_Ideal_Switching.ids" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery.MOSFET_Ideal_Switching.mosfet_equation.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"Battery.MOSFET_Ideal_Switching.vT" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Battery.MOSFET_Ideal_Switching.vds" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Battery.MOSFET_Ideal_Switching.vgs" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Battery.MOSFET_Ideal_Switching1.D.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Battery.MOSFET_Ideal_Switching1.G_elec.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.S.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.BV_threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.Qscale" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.timerFaultTransition" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "s" , 1.0
, "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.Qj" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Battery.MOSFET_Ideal_Switching1.diode.TJ" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.Tsim" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.fault_input" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.i_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.i_out" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.ni.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.v_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.diode.v_on" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Battery.MOSFET_Ideal_Switching1.ids" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery.MOSFET_Ideal_Switching1.mosfet_equation.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"Battery.MOSFET_Ideal_Switching1.vT" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Battery.MOSFET_Ideal_Switching1.vds" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Battery.MOSFET_Ideal_Switching1.vgs" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Battery.MOSFET_Ideal_Switching2.D.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Battery.MOSFET_Ideal_Switching2.G_elec.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.S.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.BV_threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.Qscale" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.timerFaultTransition" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "s" , 1.0
, "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.Qj" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Battery.MOSFET_Ideal_Switching2.diode.TJ" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.Tsim" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.fault_input" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.i_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.i_out" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.ni.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.v_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.diode.v_on" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Battery.MOSFET_Ideal_Switching2.ids" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery.MOSFET_Ideal_Switching2.mosfet_equation.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"Battery.MOSFET_Ideal_Switching2.vT" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Battery.MOSFET_Ideal_Switching2.vds" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Battery.MOSFET_Ideal_Switching2.vgs" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Battery.MOSFET_Ideal_Switching3.D.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Battery.MOSFET_Ideal_Switching3.G_elec.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.S.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.BV_threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.Qscale" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.timerFaultTransition" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "s" , 1.0
, "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.Qj" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Battery.MOSFET_Ideal_Switching3.diode.TJ" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.Tsim" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.fault_input" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.i_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.i_out" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.ni.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.v_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.diode.v_on" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Battery.MOSFET_Ideal_Switching3.ids" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery.MOSFET_Ideal_Switching3.mosfet_equation.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"Battery.MOSFET_Ideal_Switching3.vT" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Battery.MOSFET_Ideal_Switching3.vds" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Battery.MOSFET_Ideal_Switching3.vgs" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Battery.MOSFET_Ideal_Switching4.D.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Battery.MOSFET_Ideal_Switching4.G_elec.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.S.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.BV_threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.Qscale" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.timerFaultTransition" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "s" , 1.0
, "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.Qj" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Battery.MOSFET_Ideal_Switching4.diode.TJ" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.Tsim" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.fault_input" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.i_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.i_out" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.ni.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.v_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.diode.v_on" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Battery.MOSFET_Ideal_Switching4.ids" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery.MOSFET_Ideal_Switching4.mosfet_equation.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"Battery.MOSFET_Ideal_Switching4.vT" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Battery.MOSFET_Ideal_Switching4.vds" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Battery.MOSFET_Ideal_Switching4.vgs" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Battery.MOSFET_Ideal_Switching5.D.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Battery.MOSFET_Ideal_Switching5.G_elec.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.S.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.BV_threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.Qscale" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.threshold" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.timerFaultTransition" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "s" , 1.0
, "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.Qj" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Battery.MOSFET_Ideal_Switching5.diode.TJ" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.Tsim" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.fault_input" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.faulted" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.i_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.i_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.i_out" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.ni.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.v_capacitor" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.v_diode" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.diode.v_on" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Battery.MOSFET_Ideal_Switching5.ids" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.G" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.i" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.n.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.p.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.power_dissipated" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "W" , 1.0
, "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Battery.MOSFET_Ideal_Switching5.mosfet_equation.v" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage" , } , {
"Battery.MOSFET_Ideal_Switching5.vT" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Battery.MOSFET_Ideal_Switching5.vds" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Battery.MOSFET_Ideal_Switching5.vgs" ,
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , { "Battery.PS_Constant.O"
, "Enhanced_BMS/Battery/PS Constant" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , {
"Battery.Perfect_Insulator.A.T" , "Enhanced_BMS/Battery/Perfect Insulator" ,
{ 1 , "1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , { "Battery.Perfect_Insulator.T" ,
"Enhanced_BMS/Battery/Perfect Insulator" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Resistor.i" , "Enhanced_BMS/Battery/Resistor" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Resistor.n.v" , "Enhanced_BMS/Battery/Resistor" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor.p.v" , "Enhanced_BMS/Battery/Resistor" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor.v" , "Enhanced_BMS/Battery/Resistor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor.power_dissipated" , "Enhanced_BMS/Battery/Resistor" , { 1 ,
"1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Dissipated power" , } , { "Battery.Resistor1.i" ,
"Enhanced_BMS/Battery/Resistor1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Resistor1.n.v" , "Enhanced_BMS/Battery/Resistor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor1.p.v" , "Enhanced_BMS/Battery/Resistor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor1.v" , "Enhanced_BMS/Battery/Resistor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor1.power_dissipated" , "Enhanced_BMS/Battery/Resistor1" , { 1
, "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Dissipated power" , } , { "Battery.Resistor2.i" ,
"Enhanced_BMS/Battery/Resistor2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Resistor2.n.v" , "Enhanced_BMS/Battery/Resistor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor2.p.v" , "Enhanced_BMS/Battery/Resistor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor2.v" , "Enhanced_BMS/Battery/Resistor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor2.power_dissipated" , "Enhanced_BMS/Battery/Resistor2" , { 1
, "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Dissipated power" , } , { "Battery.Resistor3.i" ,
"Enhanced_BMS/Battery/Resistor3" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Resistor3.n.v" , "Enhanced_BMS/Battery/Resistor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor3.p.v" , "Enhanced_BMS/Battery/Resistor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor3.v" , "Enhanced_BMS/Battery/Resistor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor3.power_dissipated" , "Enhanced_BMS/Battery/Resistor3" , { 1
, "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Dissipated power" , } , { "Battery.Resistor4.i" ,
"Enhanced_BMS/Battery/Resistor4" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Resistor4.n.v" , "Enhanced_BMS/Battery/Resistor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor4.p.v" , "Enhanced_BMS/Battery/Resistor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor4.v" , "Enhanced_BMS/Battery/Resistor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor4.power_dissipated" , "Enhanced_BMS/Battery/Resistor4" , { 1
, "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Dissipated power" , } , { "Battery.Resistor5.i" ,
"Enhanced_BMS/Battery/Resistor5" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Resistor5.n.v" , "Enhanced_BMS/Battery/Resistor5" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor5.p.v" , "Enhanced_BMS/Battery/Resistor5" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor5.v" , "Enhanced_BMS/Battery/Resistor5" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Resistor5.power_dissipated" , "Enhanced_BMS/Battery/Resistor5" , { 1
, "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Dissipated power" , } , { "Battery.Simulink_PS_Converter1_output0" ,
"Enhanced_BMS/Battery/Simulink-PS\nConverter1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter1_output0" , } ,
{ "Battery.Simulink_PS_Converter2_output0" ,
"Enhanced_BMS/Battery/Simulink-PS\nConverter2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter2_output0" , } ,
{ "Battery.Simulink_PS_Converter3_output0" ,
"Enhanced_BMS/Battery/Simulink-PS\nConverter3" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter3_output0" , } ,
{ "Battery.Simulink_PS_Converter4_output0" ,
"Enhanced_BMS/Battery/Simulink-PS\nConverter4" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter4_output0" , } ,
{ "Battery.Simulink_PS_Converter5_output0" ,
"Enhanced_BMS/Battery/Simulink-PS\nConverter5" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter5_output0" , } ,
{ "Battery.Simulink_PS_Converter_output0" ,
"Enhanced_BMS/Battery/Simulink-PS\nConverter" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter_output0" , } ,
{ "Battery.Subsystem.Current_Sensor.I" ,
"Enhanced_BMS/Battery/Subsystem/Current Sensor" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Subsystem.Current_Sensor.i1" ,
"Enhanced_BMS/Battery/Subsystem/Current Sensor" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Subsystem.Current_Sensor.n.v" ,
"Enhanced_BMS/Battery/Subsystem/Current Sensor" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Subsystem.Current_Sensor.p.v" ,
"Enhanced_BMS/Battery/Subsystem/Current Sensor" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Subsystem.Current_Sensor_I0" ,
"Enhanced_BMS/Battery/Subsystem/PS-Simulink\nConverter" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" , } , {
"Battery.Subsystem.x1.v" , "Enhanced_BMS/Battery/Subsystem" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Subsystem.x2.v" , "Enhanced_BMS/Battery/Subsystem" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Subsystem1.Current_Sensor.I" ,
"Enhanced_BMS/Battery/Subsystem1/Current Sensor" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Subsystem1.Current_Sensor.i1" ,
"Enhanced_BMS/Battery/Subsystem1/Current Sensor" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Subsystem1.Current_Sensor.n.v" ,
"Enhanced_BMS/Battery/Subsystem1/Current Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Subsystem1.Current_Sensor.p.v" ,
"Enhanced_BMS/Battery/Subsystem1/Current Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Subsystem1.Current_Sensor_I0" ,
"Enhanced_BMS/Battery/Subsystem1/PS-Simulink\nConverter" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" , } , {
"Battery.Subsystem1.x1.v" , "Enhanced_BMS/Battery/Subsystem1" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Subsystem1.x2.v" , "Enhanced_BMS/Battery/Subsystem1" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Subsystem2.Current_Sensor.I" ,
"Enhanced_BMS/Battery/Subsystem2/Current Sensor" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Battery.Subsystem2.Current_Sensor.i1" ,
"Enhanced_BMS/Battery/Subsystem2/Current Sensor" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Battery.Subsystem2.Current_Sensor.n.v" ,
"Enhanced_BMS/Battery/Subsystem2/Current Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Subsystem2.Current_Sensor.p.v" ,
"Enhanced_BMS/Battery/Subsystem2/Current Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Subsystem2.Current_Sensor_I0" ,
"Enhanced_BMS/Battery/Subsystem2/PS-Simulink\nConverter" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" , } , {
"Battery.Subsystem2.x1.v" , "Enhanced_BMS/Battery/Subsystem2" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Subsystem2.x2.v" , "Enhanced_BMS/Battery/Subsystem2" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Battery.Subsystem3.H.T" , "Enhanced_BMS/Battery/Subsystem3" , { 1 , "1x1" }
, "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery.Subsystem3.Temperature_Sensor.A.T" ,
"Enhanced_BMS/Battery/Subsystem3/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem3.Temperature_Sensor.B.T" ,
"Enhanced_BMS/Battery/Subsystem3/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem3.Temperature_Sensor.T" ,
"Enhanced_BMS/Battery/Subsystem3/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Battery.Subsystem3.Temperature_Sensor_T0" ,
"Enhanced_BMS/Battery/Subsystem3/PS-Simulink\nConverter" , { 1 , "1x1" } ,
"K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature_Sensor_T0" , } ,
{ "Battery.Subsystem3.Thermal_Reference.H.T" ,
"Enhanced_BMS/Battery/Subsystem3/Thermal Reference" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem4.H.T" , "Enhanced_BMS/Battery/Subsystem4" , { 1 , "1x1" }
, "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery.Subsystem4.Temperature_Sensor.A.T" ,
"Enhanced_BMS/Battery/Subsystem4/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem4.Temperature_Sensor.B.T" ,
"Enhanced_BMS/Battery/Subsystem4/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem4.Temperature_Sensor.T" ,
"Enhanced_BMS/Battery/Subsystem4/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Battery.Subsystem4.Temperature_Sensor_T0" ,
"Enhanced_BMS/Battery/Subsystem4/PS-Simulink\nConverter" , { 1 , "1x1" } ,
"K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature_Sensor_T0" , } ,
{ "Battery.Subsystem4.Thermal_Reference.H.T" ,
"Enhanced_BMS/Battery/Subsystem4/Thermal Reference" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem5.H.T" , "Enhanced_BMS/Battery/Subsystem5" , { 1 , "1x1" }
, "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery.Subsystem5.Temperature_Sensor.A.T" ,
"Enhanced_BMS/Battery/Subsystem5/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem5.Temperature_Sensor.B.T" ,
"Enhanced_BMS/Battery/Subsystem5/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem5.Temperature_Sensor.T" ,
"Enhanced_BMS/Battery/Subsystem5/Temperature Sensor" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Battery.Subsystem5.Temperature_Sensor_T0" ,
"Enhanced_BMS/Battery/Subsystem5/PS-Simulink\nConverter" , { 1 , "1x1" } ,
"K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature_Sensor_T0" , } ,
{ "Battery.Subsystem5.Thermal_Reference.H.T" ,
"Enhanced_BMS/Battery/Subsystem5/Thermal Reference" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem6.Connection_Port.T" , "Enhanced_BMS/Battery/Subsystem6" ,
{ 1 , "1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , { "Battery.Subsystem6.Connection_Port2" ,
"Enhanced_BMS/Battery/Subsystem6" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Connection_Port2" , } , {
"Battery.Subsystem6.Controlled_Temperature_Source.A.T" ,
"Enhanced_BMS/Battery/Subsystem6/Controlled Temperature Source" , { 1 , "1x1"
} , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem6.Controlled_Temperature_Source.B.T" ,
"Enhanced_BMS/Battery/Subsystem6/Controlled Temperature Source" , { 1 , "1x1"
} , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem6.Controlled_Temperature_Source.Q" ,
"Enhanced_BMS/Battery/Subsystem6/Controlled Temperature Source" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Heat flow rate" , } , {
"Battery.Subsystem6.Controlled_Temperature_Source.S" ,
"Enhanced_BMS/Battery/Subsystem6/Controlled Temperature Source" , { 1 , "1x1"
} , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S" , } , {
"Battery.Subsystem6.Controlled_Temperature_Source.T" ,
"Enhanced_BMS/Battery/Subsystem6/Controlled Temperature Source" , { 1 , "1x1"
} , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature difference" , } ,
{ "Battery.Subsystem6.Convective_Heat_Transfer.A.T" ,
"Enhanced_BMS/Battery/Subsystem6/Convective Heat Transfer" , { 1 , "1x1" } ,
"K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem6.Convective_Heat_Transfer.B.T" ,
"Enhanced_BMS/Battery/Subsystem6/Convective Heat Transfer" , { 1 , "1x1" } ,
"K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Subsystem6.Convective_Heat_Transfer.Q" ,
"Enhanced_BMS/Battery/Subsystem6/Convective Heat Transfer" , { 1 , "1x1" } ,
"W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Heat flow rate" , } , {
"Battery.Subsystem6.Convective_Heat_Transfer.T" ,
"Enhanced_BMS/Battery/Subsystem6/Convective Heat Transfer" , { 1 , "1x1" } ,
"K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature difference" , } ,
{ "Battery.Subsystem6.Convective_Heat_Transfer.var_heat_tr_coeff" ,
"Enhanced_BMS/Battery/Subsystem6/Convective Heat Transfer" , { 1 , "1x1" } ,
"W/(K*m^2)" , 1.0 , "kg/(K*s^3)" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "K"
, } , { "Battery.Subsystem6.Thermal_Reference.H.T" ,
"Enhanced_BMS/Battery/Subsystem6/Thermal Reference" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Temperature" , } , {
"Battery.Voltage_Sensor.V" , "Enhanced_BMS/Battery/Voltage Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Battery.Voltage_Sensor.n.v" , "Enhanced_BMS/Battery/Voltage Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Voltage_Sensor.p.v" , "Enhanced_BMS/Battery/Voltage Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Voltage_Sensor1.V" , "Enhanced_BMS/Battery/Voltage Sensor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Battery.Voltage_Sensor1.n.v" , "Enhanced_BMS/Battery/Voltage Sensor1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Voltage_Sensor1.p.v" , "Enhanced_BMS/Battery/Voltage Sensor1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Voltage_Sensor1_V0" , "Enhanced_BMS/Battery/PS-Simulink\nConverter4"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor1_V0" , } , { "Battery.Voltage_Sensor2.V" ,
"Enhanced_BMS/Battery/Voltage Sensor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Battery.Voltage_Sensor2.n.v" , "Enhanced_BMS/Battery/Voltage Sensor2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Voltage_Sensor2.p.v" , "Enhanced_BMS/Battery/Voltage Sensor2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Battery.Voltage_Sensor2_V0" , "Enhanced_BMS/Battery/PS-Simulink\nConverter3"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor2_V0" , } , { "Battery.Voltage_Sensor_V0" ,
"Enhanced_BMS/Battery/PS-Simulink\nConverter5" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V0" , } , {
"Battery.x0.v" , "Enhanced_BMS/Battery" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "Battery.x1.v" ,
"Enhanced_BMS/Battery" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Controlled_Current_Source.head.v" , "Enhanced_BMS/Controlled Current Source"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Controlled_Current_Source.i" ,
"Enhanced_BMS/Controlled Current Source" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Controlled_Current_Source.iT" , "Enhanced_BMS/Controlled Current Source" , {
1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "iT" , } , {
"Controlled_Current_Source.tail.v" , "Enhanced_BMS/Controlled Current Source"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Controlled_Current_Source.v" ,
"Enhanced_BMS/Controlled Current Source" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "Electrical_Reference.V.v"
, "Enhanced_BMS/Electrical Reference" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Simulink_PS_Converter_output0" , "Enhanced_BMS/Simulink-PS\nConverter" , { 1
, "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter_output0" , } , { "Voltage_Sensor.V" ,
"Enhanced_BMS/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor.n.v" ,
"Enhanced_BMS/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor.p.v"
, "Enhanced_BMS/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor_V0" ,
"Enhanced_BMS/PS-Simulink\nConverter" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V0" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 42 ] = {
{ "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 0U ,
"Battery.Battery_Table_Based.electricalModel.ocv" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U ,
1U , "Battery.Battery_Table_Based.electricalModel.xxR0" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U ,
2U , "Battery.Battery_Table_Based.electricalModel.xxqnom" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U ,
3U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U ,
4U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U
, 5U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U
, 6U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U ,
7U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U
, 8U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U
, 9U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 10U , "Battery.Battery_Table_Based1.electricalModel.ocv" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 11U , "Battery.Battery_Table_Based1.electricalModel.xxR0" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 12U , "Battery.Battery_Table_Based1.electricalModel.xxqnom" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 13U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 14U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 15U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 16U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 17U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 18U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U
, 19U , "Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 20U , "Battery.Battery_Table_Based2.electricalModel.ocv" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 21U , "Battery.Battery_Table_Based2.electricalModel.xxR0" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 22U , "Battery.Battery_Table_Based2.electricalModel.xxqnom" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 23U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 24U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 25U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 26U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_TRUE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 27U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 28U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U
, 29U , "Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" ,
1U , 30U , "Battery.MOSFET_Ideal_Switching.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1"
, 1U , 31U , "Battery.MOSFET_Ideal_Switching1.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2"
, 1U , 32U , "Battery.MOSFET_Ideal_Switching2.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3"
, 1U , 33U , "Battery.MOSFET_Ideal_Switching3.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4"
, 1U , 34U , "Battery.MOSFET_Ideal_Switching4.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5"
, 1U , 35U , "Battery.MOSFET_Ideal_Switching5.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" ,
1U , 36U , "Battery.MOSFET_Ideal_Switching.mosfet_equation" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1"
, 1U , 37U , "Battery.MOSFET_Ideal_Switching1.mosfet_equation" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2"
, 1U , 38U , "Battery.MOSFET_Ideal_Switching2.mosfet_equation" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3"
, 1U , 39U , "Battery.MOSFET_Ideal_Switching3.mosfet_equation" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4"
, 1U , 40U , "Battery.MOSFET_Ideal_Switching4.mosfet_equation" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5"
, 1U , 41U , "Battery.MOSFET_Ideal_Switching5.mosfet_equation" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 42 ] = { {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 117 ] = { { "Enhanced_BMS/Battery/Battery (Table-Based)" , 2U
, 0U , "Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 2U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 4U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 6U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 8U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 10U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 12U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 14U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
,
"physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationResistance"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 16U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
 "physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationTimeConstant"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 2U , 18U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted first polarization resistance inverse must be greater than zero."
,
 "physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationResistanceInverse"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 20U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 22U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 24U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 26U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 28U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 30U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 32U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 34U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
,
"physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationResistance"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 36U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
 "physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationTimeConstant"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)1" , 2U , 38U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted first polarization resistance inverse must be greater than zero."
,
 "physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationResistanceInverse"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 40U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 42U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 44U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 46U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 48U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 50U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 52U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 54U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first polarization resistance must be greater than zero."
,
"physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationResistance"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 56U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted first time constant must be greater than zero." ,
 "physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationTimeConstant"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)2" , 2U , 58U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted first polarization resistance inverse must be greater than zero."
,
 "physmod:battery:shared_library:batteryecm:LowerThanZeroPolarizationResistanceInverse"
, } , { "Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 60U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 61U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 62U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 63U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 64U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 65U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 66U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 67U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 68U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 69U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 70U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 71U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 72U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 73U ,
"Battery.Battery_Table_Based.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 74U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 75U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 76U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 77U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 78U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 79U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 80U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 81U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 82U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 83U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 84U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 85U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 86U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 87U ,
"Battery.Battery_Table_Based1.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 88U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 89U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 90U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 91U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 92U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 93U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 94U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 95U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 96U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 97U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 98U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 99U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 100U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 101U ,
"Battery.Battery_Table_Based2.electricalModel.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Resistor" , 1U , 102U ,
"Battery.Resistor.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Resistor" , 1U , 103U ,
"Battery.Resistor.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Resistor1" , 1U , 104U ,
"Battery.Resistor1.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Resistor1" , 1U , 105U ,
"Battery.Resistor1.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Resistor2" , 1U , 106U ,
"Battery.Resistor2.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Resistor2" , 1U , 107U ,
"Battery.Resistor2.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Resistor3" , 1U , 108U ,
"Battery.Resistor3.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Resistor3" , 1U , 109U ,
"Battery.Resistor3.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Resistor4" , 1U , 110U ,
"Battery.Resistor4.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Resistor4" , 1U , 111U ,
"Battery.Resistor4.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Resistor5" , 1U , 112U ,
"Battery.Resistor5.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Enhanced_BMS/Battery/Resistor5" , 1U , 113U ,
"Battery.Resistor5.power_dissipated" ,
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 114U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 115U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 116U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 117U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 118U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 119U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)" , 1U , 120U ,
"Battery.Battery_Table_Based.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)1" , 1U , 121U ,
"Battery.Battery_Table_Based1.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/Battery (Table-Based)2" , 1U , 122U ,
"Battery.Battery_Table_Based2.electricalModel" ,
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1U , 123U ,
"Battery.MOSFET_Ideal_Switching.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1U , 124U ,
"Battery.MOSFET_Ideal_Switching.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1U , 125U ,
"Battery.MOSFET_Ideal_Switching.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)" , 1U , 126U ,
"Battery.MOSFET_Ideal_Switching.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1U , 127U ,
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1U , 128U ,
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1U , 129U ,
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)1" , 1U , 130U ,
"Battery.MOSFET_Ideal_Switching1.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1U , 131U ,
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1U , 132U ,
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1U , 133U ,
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)2" , 1U , 134U ,
"Battery.MOSFET_Ideal_Switching2.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1U , 135U ,
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1U , 136U ,
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1U , 137U ,
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)3" , 1U , 138U ,
"Battery.MOSFET_Ideal_Switching3.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1U , 139U ,
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1U , 140U ,
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1U , 141U ,
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)4" , 1U , 142U ,
"Battery.MOSFET_Ideal_Switching4.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1U , 143U ,
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1U , 144U ,
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1U , 145U ,
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Enhanced_BMS/Battery/MOSFET (Ideal, Switching)5" , 1U , 146U ,
"Battery.MOSFET_Ideal_Switching5.diode.private.Diode" ,
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 147 ] = { {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 120 ] = { {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryThermalLumpedMass.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryThermalLumpedMass.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryThermalLumpedMass.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/tableBatteryEquivalentCircuit.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeRange *
s_cer_range = NULL ; static NeRange s_icr_range [ 12 ] = { { "" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "D:/MATLAB/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"D:/MATLAB/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData s_real_parameter_data
[ 6 ] = { { "RTP_78EAB9F6_stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , "" , 0U , 1U , TRUE , } , {
"RTP_00F46B65_stateOfCharge" , "Enhanced_BMS/Battery/Battery (Table-Based)1"
, "" , 0U , 1U , TRUE , } , { "RTP_77F35BF3_stateOfCharge" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , "" , 0U , 1U , TRUE , } , {
"RTP_00F46B65_cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)1" , "" , 0U , 1U , TRUE , } , {
"RTP_77F35BF3_cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)2" , "" , 0U , 1U , TRUE , } , {
"RTP_78EAB9F6_cell_temperature" ,
"Enhanced_BMS/Battery/Battery (Table-Based)" , "" , 0U , 1U , TRUE , } } ;
static real_T s_constant_table0 [ 33 ] = { 3.4966 , 3.5519 , 3.5813 , 3.6183
, 3.6871 , 3.7066 , 3.7611 , 3.8111 , 3.9131 , 4.0748 , 4.1923 , 3.5057 ,
3.566 , 3.5911 , 3.6337 , 3.6921 , 3.7127 , 3.7665 , 3.8531 , 3.9259 , 4.0777
, 4.1928 , 3.5148 , 3.5653 , 3.5999 , 3.6402 , 3.6993 , 3.7213 , 3.7922 ,
3.8971 , 3.9376 , 4.0821 , 4.193 } ; static real_T s_constant_table1 [ 11 ] =
{ 0.0 , 0.1 , 0.2 , 0.3 , 0.4 , 0.5 , 0.6 , 0.7 , 0.8 , 0.9 , 1.0 } ; static
real_T s_constant_table2 [ 33 ] = { 0.0117 , 0.011 , 0.0112 , 0.0114 , 0.011
, 0.0109 , 0.0107 , 0.0107 , 0.0109 , 0.0113 , 0.0116 , 0.0085 , 0.0085 ,
0.0086 , 0.0087 , 0.0084 , 0.0083 , 0.0082 , 0.0083 , 0.0086 , 0.0085 ,
0.0085 , 0.009 , 0.009 , 0.0091 , 0.0092 , 0.009 , 0.0088 , 0.0086 , 0.0091 ,
0.0095 , 0.0089 , 0.0089 } ; static real_T s_constant_table3 [ 33 ] = {
3.3982 , 3.4661 , 3.5049 , 3.6028 , 3.6308 , 3.6894 , 3.7552 , 3.8036 ,
3.9046 , 4.0752 , 4.1734 , 3.4675 , 3.4887 , 3.5349 , 3.6097 , 3.6507 ,
3.7048 , 3.7841 , 3.8479 , 3.9305 , 4.0786 , 4.1926 , 3.5113 , 3.5583 ,
3.5691 , 3.6454 , 3.6665 , 3.7223 , 3.8085 , 3.8945 , 3.962 , 4.1127 , 4.2048
} ; static real_T s_constant_table4 [ 33 ] = { 0.0113 , 0.0108 , 0.0111 ,
0.011 , 0.0108 , 0.0107 , 0.0106 , 0.0106 , 0.0111 , 0.0111 , 0.0115 , 0.0091
, 0.0079 , 0.0083 , 0.009 , 0.008 , 0.0085 , 0.0081 , 0.0082 , 0.0084 ,
0.0082 , 0.0084 , 0.0083 , 0.0092 , 0.0094 , 0.0096 , 0.0087 , 0.0091 ,
0.0087 , 0.009 , 0.0093 , 0.009 , 0.0093 } ; static real_T s_constant_table5
[ 33 ] = { 3.5401 , 3.5358 , 3.5927 , 3.6439 , 3.6918 , 3.7452 , 3.8012 ,
3.8387 , 3.9398 , 4.1102 , 4.1742 , 3.5396 , 3.542 , 3.5929 , 3.6419 , 3.7065
, 3.7613 , 3.8302 , 3.8762 , 3.9668 , 4.1221 , 4.2065 , 3.5774 , 3.5681 ,
3.606 , 3.6703 , 3.7267 , 3.7676 , 3.8439 , 3.914 , 3.9903 , 4.142 , 4.2399 }
; static real_T s_constant_table6 [ 33 ] = { 0.0111 , 0.0109 , 0.0113 ,
0.0115 , 0.0112 , 0.0108 , 0.0109 , 0.0108 , 0.011 , 0.011 , 0.0112 , 0.0088
, 0.0083 , 0.0087 , 0.0089 , 0.0083 , 0.0082 , 0.008 , 0.0085 , 0.0087 ,
0.0084 , 0.0085 , 0.0094 , 0.0091 , 0.0092 , 0.009 , 0.0092 , 0.0085 , 0.0088
, 0.0092 , 0.0095 , 0.009 , 0.0092 } ; static real_T s_constant_table7 [ 33 ]
= { 26.8 , 35.1 , 21.1 , 129.9 , 103.6 , 7.1 , 63.4 , 50.4 , 41.8 , 28.5 ,
24.1 , 42.1 , 46.7 , 27.6 , 11.5 , 6.0 , 30.1 , 52.6 , 121.9 , 33.0 , 34.1 ,
38.7 , 43.6 , 37.9 , 45.4 , 52.9 , 37.3 , 21.3 , 48.5 , 52.8 , 30.3 , 17.9 ,
2.7 } ; static real_T s_constant_table8 [ 33 ] = { 0.0108 , 0.0071 , 0.0062 ,
0.0058 , 0.0053 , 0.0049 , 0.0034 , 0.0032 , 0.0034 , 0.0029 , 0.0027 ,
0.0029 , 0.0025 , 0.0023 , 0.0022 , 0.002 , 0.0017 , 0.0016 , 0.0024 , 0.0019
, 0.0018 , 0.0016 , 0.0014 , 0.0013 , 0.0012 , 0.0011 , 0.0011 , 0.0008 ,
0.0011 , 0.0015 , 0.0012 , 0.0012 , 0.0011 } ; static real_T
s_constant_table9 [ 33 ] = { 0.0109 , 0.0069 , 0.006 , 0.0056 , 0.0052 ,
0.0047 , 0.0034 , 0.0033 , 0.0033 , 0.0028 , 0.0026 , 0.0029 , 0.0024 ,
0.0022 , 0.0021 , 0.002 , 0.0016 , 0.0016 , 0.0023 , 0.0018 , 0.0017 , 0.0016
, 0.0013 , 0.0012 , 0.0011 , 0.0011 , 0.001 , 0.0009 , 0.001 , 0.0014 ,
0.0011 , 0.0011 , 0.001 } ; static real_T s_constant_table10 [ 33 ] = { 20.9
, 32.1 , 21.2 , 130.4 , 104.0 , 8.2 , 61.3 , 49.6 , 40.4 , 28.0 , 23.5 , 36.0
, 45.3 , 28.3 , 10.1 , 6.2 , 30.0 , 53.8 , 123.5 , 33.1 , 33.8 , 37.4 , 39.8
, 39.6 , 44.0 , 52.3 , 36.5 , 23.7 , 48.3 , 53.4 , 29.4 , 18.4 , 3.6 } ;
static real_T s_constant_table11 [ 33 ] = { 0.0107 , 0.007 , 0.0061 , 0.0057
, 0.0051 , 0.0048 , 0.0035 , 0.0034 , 0.0033 , 0.0027 , 0.0025 , 0.0028 ,
0.0023 , 0.0021 , 0.0022 , 0.0021 , 0.0017 , 0.0017 , 0.0023 , 0.0018 ,
0.0016 , 0.0017 , 0.0012 , 0.0011 , 0.0012 , 0.001 , 0.001 , 0.0009 , 0.001 ,
0.0015 , 0.0011 , 0.0011 , 0.001 } ; static real_T s_constant_table12 [ 33 ]
= { 22.9 , 33.5 , 21.8 , 131.2 , 103.1 , 8.0 , 62.1 , 48.9 , 41.1 , 28.7 ,
24.4 , 37.4 , 46.9 , 28.9 , 10.8 , 6.8 , 31.8 , 55.4 , 123.7 , 32.8 , 34.7 ,
37.6 , 41.4 , 39.0 , 44.5 , 51.2 , 36.7 , 22.2 , 49.3 , 53.1 , 30.1 , 19.4 ,
2.5 } ; static NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 54 ; out -> mM_P . mNumRow
= 54 ; out -> mM_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 55 ) ; out -> mM_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 84 ) ; return out ; } static
NeDsMethodOutput * ds_output_m ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mM . mN = 84 ; out -> mM . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 84 ) ; return out ; } static NeDsMethodOutput
* ds_output_vmm ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMM .
mN = 84 ; out -> mVMM . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 84 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 54 ; out -> mDXM_P .
mNumRow = 84 ; out -> mDXM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 55 ) ; out -> mDXM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 150 ) ; return out
; } static NeDsMethodOutput * ds_output_dxm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 150 ; out -> mDXM . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 150 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out ->
mDDM_P . mNumRow = 84 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 7 ; out ->
mDUM_P . mNumRow = 84 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 8 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 84 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 6 ; out ->
mDPM_P . mNumRow = 84 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDPM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 54 ; out ->
mA_P . mNumRow = 54 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 57 ) ;
return out ; } static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 57 ; out -> mA . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 57 ) ; return out
; } static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 7 ; out -> mB_P . mNumRow
= 54 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 8 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 6 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 6 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 54 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 54 ; out -> mF . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 54 ) ; return out
; } static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 54 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 54
) ; return out ; } static NeDsMethodOutput * ds_output_vpf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVPF . mN = 54 ; out -> mVPF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_vsf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVSF . mN = 54 ; out -> mVSF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 54 ; out -> mSLF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 54 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 54 ; out ->
mDXF_P . mNumRow = 54 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 155 )
; return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 155 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
155 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 7 ; out ->
mDUF_P . mNumRow = 54 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 8 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 9 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 9 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 9 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 54 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 54 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 6 ; out ->
mDPDXF_P . mNumRow = 155 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 54 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 7 ; out ->
mTDUF_P . mNumRow = 54 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 8 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 21 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 54 ; out ->
mTDXF_P . mNumRow = 54 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 209 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 63 ; out ->
mDNF_P . mNumRow = 54 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 64 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 6 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 54 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
54 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER . mN = 0 ; out
-> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER_P . mNumCol = 0
; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 54 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 12 ; out -> mICR .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
12 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 12 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 12 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 12 ;
out -> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 12 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 12 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 12 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 6 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 54 ; out ->
mDXICR_P . mNumRow = 12 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 12 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 7 ; out ->
mTDUICR_P . mNumRow = 12 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 8 ) ; out -> mTDUICR_P . mIr
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 54 ; out ->
mICRM_P . mNumRow = 12 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 54 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 55 ) ; out -> mDXICRM_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 0 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_solverhits ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mSOLVERHITS . mN = 0 ; out -> mSOLVERHITS . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 7 ; out -> mMDUY_P .
mNumRow = 16 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 8 ) ; out -> mMDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 54 ; out -> mMDXY_P .
mNumRow = 16 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 55 ) ; out -> mMDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 7 ; out -> mTDUY_P .
mNumRow = 16 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 8 ) ; out -> mTDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 ) ; return out ;
} static NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 54 ; out -> mTDXY_P .
mNumRow = 16 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 55 ) ; out -> mTDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 36 ) ; return out
; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 16 ; out -> mY . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 16 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 54 ; out -> mDXY_P .
mNumRow = 16 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 55 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 36 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 36 ; out -> mDXY . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 36 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 7 ; out ->
mDUY_P . mNumRow = 16 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 8 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 3 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 16 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 42 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
42 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 42 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 42 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 403 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 403 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 117 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 117 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 54 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 55 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 7 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 8 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 510 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 510 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 510 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 510 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 510 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 510
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 510 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 510 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 54 ; out -> mQX_P .
mNumRow = 54 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 55 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 7 ; out -> mQU_P .
mNumRow = 54 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 8 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 54 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 54 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 54 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 54 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 54 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 54 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 54 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 54 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 54 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 54 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 54 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 54 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 54 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 54 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 54 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
54 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * Enhanced_BMS_7ded21a_1_dae_ds ( PmAllocator * allocator ) {
NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static SscIoInfo input_info [
7 ] ; static SscIoInfo output_info [ 16 ] ; _ds = ( _NeDynamicSystem * )
allocator -> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds
-> mAlloc = * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 54 ; ds -> mNumDiscreteRealVariables = 0 ; ds ->
mNumDifferentialVariables = 24 ; ds -> mNumEquations = 54 ; ds ->
mNumCEResiduals = 0 ; ds -> mNumICResiduals = 12 ; ds -> mNumFreqs = 0 ; ds
-> mNumSolverHits = 0 ; ds -> mNumModes = 42 ; ds -> mNumMajorModes = 0 ; ds
-> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds -> mNumObservables = 510 ;
ds -> mNumObservableElements = 510 ; ds -> mNumZcs = 42 ; ds -> mNumAsserts =
117 ; ds -> mNumAssertRanges = 147 ; ds -> mNumParamAsserts = 0 ; ds ->
mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 42 ; ds ->
mNumEquationRanges = 120 ; ds -> mNumCERRanges = 0 ; ds -> mNumICRRanges = 12
; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ; ds ->
mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 6 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 7 ; input_info [ 0
] . identifier = "Battery.Simulink_PS_Converter1_output0" ; input_info [ 0 ]
. size . numElements = 1 ; input_info [ 0 ] . size . encodedDimensions =
"1x1" ; input_info [ 0 ] . name = "Battery.Simulink_PS_Converter1_output0" ;
input_info [ 0 ] . unit = "1" ; input_info [ 1 ] . identifier =
"Battery.Simulink_PS_Converter2_output0" ; input_info [ 1 ] . size .
numElements = 1 ; input_info [ 1 ] . size . encodedDimensions = "1x1" ;
input_info [ 1 ] . name = "Battery.Simulink_PS_Converter2_output0" ;
input_info [ 1 ] . unit = "1" ; input_info [ 2 ] . identifier =
"Battery.Simulink_PS_Converter3_output0" ; input_info [ 2 ] . size .
numElements = 1 ; input_info [ 2 ] . size . encodedDimensions = "1x1" ;
input_info [ 2 ] . name = "Battery.Simulink_PS_Converter3_output0" ;
input_info [ 2 ] . unit = "1" ; input_info [ 3 ] . identifier =
"Battery.Simulink_PS_Converter4_output0" ; input_info [ 3 ] . size .
numElements = 1 ; input_info [ 3 ] . size . encodedDimensions = "1x1" ;
input_info [ 3 ] . name = "Battery.Simulink_PS_Converter4_output0" ;
input_info [ 3 ] . unit = "1" ; input_info [ 4 ] . identifier =
"Battery.Simulink_PS_Converter5_output0" ; input_info [ 4 ] . size .
numElements = 1 ; input_info [ 4 ] . size . encodedDimensions = "1x1" ;
input_info [ 4 ] . name = "Battery.Simulink_PS_Converter5_output0" ;
input_info [ 4 ] . unit = "1" ; input_info [ 5 ] . identifier =
"Battery.Simulink_PS_Converter_output0" ; input_info [ 5 ] . size .
numElements = 1 ; input_info [ 5 ] . size . encodedDimensions = "1x1" ;
input_info [ 5 ] . name = "Battery.Simulink_PS_Converter_output0" ;
input_info [ 5 ] . unit = "1" ; input_info [ 6 ] . identifier =
"Simulink_PS_Converter_output0" ; input_info [ 6 ] . size . numElements = 1 ;
input_info [ 6 ] . size . encodedDimensions = "1x1" ; input_info [ 6 ] . name
= "Simulink_PS_Converter_output0" ; input_info [ 6 ] . unit = "1" ; ds -> mIo
[ SSC_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo [ SSC_OUTPUT_IO_TYPE ] = 16
; output_info [ 0 ] . identifier = "Battery.Battery_Table_Based1_soc0" ;
output_info [ 0 ] . size . numElements = 1 ; output_info [ 0 ] . size .
encodedDimensions = "1x1" ; output_info [ 0 ] . name =
"Battery.Battery_Table_Based1_soc0" ; output_info [ 0 ] . unit = "1" ;
output_info [ 1 ] . identifier = "Battery.Battery_Table_Based2_soc0" ;
output_info [ 1 ] . size . numElements = 1 ; output_info [ 1 ] . size .
encodedDimensions = "1x1" ; output_info [ 1 ] . name =
"Battery.Battery_Table_Based2_soc0" ; output_info [ 1 ] . unit = "1" ;
output_info [ 2 ] . identifier = "Battery.Battery_Table_Based_soc0" ;
output_info [ 2 ] . size . numElements = 1 ; output_info [ 2 ] . size .
encodedDimensions = "1x1" ; output_info [ 2 ] . name =
"Battery.Battery_Table_Based_soc0" ; output_info [ 2 ] . unit = "1" ;
output_info [ 3 ] . identifier = "Battery.Current_Sensor1_I0" ; output_info [
3 ] . size . numElements = 1 ; output_info [ 3 ] . size . encodedDimensions =
"1x1" ; output_info [ 3 ] . name = "Battery.Current_Sensor1_I0" ; output_info
[ 3 ] . unit = "A" ; output_info [ 4 ] . identifier =
"Battery.Current_Sensor2_I0" ; output_info [ 4 ] . size . numElements = 1 ;
output_info [ 4 ] . size . encodedDimensions = "1x1" ; output_info [ 4 ] .
name = "Battery.Current_Sensor2_I0" ; output_info [ 4 ] . unit = "A" ;
output_info [ 5 ] . identifier = "Battery.Current_Sensor_I0" ; output_info [
5 ] . size . numElements = 1 ; output_info [ 5 ] . size . encodedDimensions =
"1x1" ; output_info [ 5 ] . name = "Battery.Current_Sensor_I0" ; output_info
[ 5 ] . unit = "A" ; output_info [ 6 ] . identifier =
"Battery.Subsystem.Current_Sensor_I0" ; output_info [ 6 ] . size .
numElements = 1 ; output_info [ 6 ] . size . encodedDimensions = "1x1" ;
output_info [ 6 ] . name = "Battery.Subsystem.Current_Sensor_I0" ;
output_info [ 6 ] . unit = "A" ; output_info [ 7 ] . identifier =
"Battery.Subsystem1.Current_Sensor_I0" ; output_info [ 7 ] . size .
numElements = 1 ; output_info [ 7 ] . size . encodedDimensions = "1x1" ;
output_info [ 7 ] . name = "Battery.Subsystem1.Current_Sensor_I0" ;
output_info [ 7 ] . unit = "A" ; output_info [ 8 ] . identifier =
"Battery.Subsystem2.Current_Sensor_I0" ; output_info [ 8 ] . size .
numElements = 1 ; output_info [ 8 ] . size . encodedDimensions = "1x1" ;
output_info [ 8 ] . name = "Battery.Subsystem2.Current_Sensor_I0" ;
output_info [ 8 ] . unit = "A" ; output_info [ 9 ] . identifier =
"Battery.Subsystem3.Temperature_Sensor_T0" ; output_info [ 9 ] . size .
numElements = 1 ; output_info [ 9 ] . size . encodedDimensions = "1x1" ;
output_info [ 9 ] . name = "Battery.Subsystem3.Temperature_Sensor_T0" ;
output_info [ 9 ] . unit = "K" ; output_info [ 10 ] . identifier =
"Battery.Subsystem4.Temperature_Sensor_T0" ; output_info [ 10 ] . size .
numElements = 1 ; output_info [ 10 ] . size . encodedDimensions = "1x1" ;
output_info [ 10 ] . name = "Battery.Subsystem4.Temperature_Sensor_T0" ;
output_info [ 10 ] . unit = "K" ; output_info [ 11 ] . identifier =
"Battery.Subsystem5.Temperature_Sensor_T0" ; output_info [ 11 ] . size .
numElements = 1 ; output_info [ 11 ] . size . encodedDimensions = "1x1" ;
output_info [ 11 ] . name = "Battery.Subsystem5.Temperature_Sensor_T0" ;
output_info [ 11 ] . unit = "K" ; output_info [ 12 ] . identifier =
"Battery.Voltage_Sensor1_V0" ; output_info [ 12 ] . size . numElements = 1 ;
output_info [ 12 ] . size . encodedDimensions = "1x1" ; output_info [ 12 ] .
name = "Battery.Voltage_Sensor1_V0" ; output_info [ 12 ] . unit = "V" ;
output_info [ 13 ] . identifier = "Battery.Voltage_Sensor2_V0" ; output_info
[ 13 ] . size . numElements = 1 ; output_info [ 13 ] . size .
encodedDimensions = "1x1" ; output_info [ 13 ] . name =
"Battery.Voltage_Sensor2_V0" ; output_info [ 13 ] . unit = "V" ; output_info
[ 14 ] . identifier = "Battery.Voltage_Sensor_V0" ; output_info [ 14 ] . size
. numElements = 1 ; output_info [ 14 ] . size . encodedDimensions = "1x1" ;
output_info [ 14 ] . name = "Battery.Voltage_Sensor_V0" ; output_info [ 14 ]
. unit = "V" ; output_info [ 15 ] . identifier = "Voltage_Sensor_V0" ;
output_info [ 15 ] . size . numElements = 1 ; output_info [ 15 ] . size .
encodedDimensions = "1x1" ; output_info [ 15 ] . name = "Voltage_Sensor_V0" ;
output_info [ 15 ] . unit = "V" ; ds -> mIo [ SSC_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mDiagnosticsDsFcn = diagnostics ; ds ->
mExpandFcn = expand ; ds -> mRtpMapFcn = rtpmap ; ds -> mMethods [
NE_DS_METHOD_M_P ] = Enhanced_BMS_7ded21a_1_ds_m_p ; ds -> mMakeOutput [
NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] =
Enhanced_BMS_7ded21a_1_ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] =
ds_output_m ; ds -> mMethods [ NE_DS_METHOD_VMM ] =
Enhanced_BMS_7ded21a_1_ds_vmm ; ds -> mMakeOutput [ NE_DS_METHOD_VMM ] =
ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
Enhanced_BMS_7ded21a_1_ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] =
ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM ] =
Enhanced_BMS_7ded21a_1_ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] =
ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [
NE_DS_METHOD_DDM ] = ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] =
ds_output_ddm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [
NE_DS_METHOD_DPM ] = ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] =
ds_output_dpm ; ds -> mMethods [ NE_DS_METHOD_A_P ] =
Enhanced_BMS_7ded21a_1_ds_a_p ; ds -> mMakeOutput [ NE_DS_METHOD_A_P ] =
ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
Enhanced_BMS_7ded21a_1_ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] =
ds_output_a ; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds ->
mMakeOutput [ NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [
NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b
; ds -> mMethods [ NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [
NE_DS_METHOD_C_P ] = ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c
; ds -> mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = Enhanced_BMS_7ded21a_1_ds_f ; ds -> mMakeOutput [
NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] =
Enhanced_BMS_7ded21a_1_ds_vmf ; ds -> mMakeOutput [ NE_DS_METHOD_VMF ] =
ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_VPF ] =
Enhanced_BMS_7ded21a_1_ds_vpf ; ds -> mMakeOutput [ NE_DS_METHOD_VPF ] =
ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] =
Enhanced_BMS_7ded21a_1_ds_vsf ; ds -> mMakeOutput [ NE_DS_METHOD_VSF ] =
ds_output_vsf ; ds -> mMethods [ NE_DS_METHOD_SLF ] =
Enhanced_BMS_7ded21a_1_ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] =
Enhanced_BMS_7ded21a_1_ds_slf0 ; ds -> mMakeOutput [ NE_DS_METHOD_SLF0 ] =
ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ] =
Enhanced_BMS_7ded21a_1_ds_dxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXF_P ] =
ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ] =
Enhanced_BMS_7ded21a_1_ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] =
ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] =
Enhanced_BMS_7ded21a_1_ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] =
ds_output_duf_p ; ds -> mMethods [ NE_DS_METHOD_DUF ] =
Enhanced_BMS_7ded21a_1_ds_duf ; ds -> mMakeOutput [ NE_DS_METHOD_DUF ] =
ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [
NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] =
ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] =
Enhanced_BMS_7ded21a_1_ds_tduf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUF_P ]
= ds_output_tduf_p ; ds -> mMethods [ NE_DS_METHOD_TDXF_P ] =
Enhanced_BMS_7ded21a_1_ds_tdxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXF_P ]
= ds_output_tdxf_p ; ds -> mMethods [ NE_DS_METHOD_DNF_P ] =
Enhanced_BMS_7ded21a_1_ds_dnf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DNF_P ] =
ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ] = ds_dnf ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [
NE_DS_METHOD_DNF_V_X ] = Enhanced_BMS_7ded21a_1_ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = Enhanced_BMS_7ded21a_1_ds_dxcer_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = Enhanced_BMS_7ded21a_1_ds_ic ; ds -> mMakeOutput [
NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] =
ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds ->
mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [
NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] =
Enhanced_BMS_7ded21a_1_ds_dxicr_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR_P
] = ds_output_dxicr_p ; ds -> mMethods [ NE_DS_METHOD_DDICR ] = ds_ddicr ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR ] = ds_output_ddicr ; ds -> mMethods [
NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods [
NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = Enhanced_BMS_7ded21a_1_ds_icrm_p ; ds -> mMakeOutput
[ NE_DS_METHOD_ICRM_P ] = ds_output_icrm_p ; ds -> mMethods [
NE_DS_METHOD_ICRM ] = ds_icrm ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM ] =
ds_output_icrm ; ds -> mMethods [ NE_DS_METHOD_DXICRM_P ] =
Enhanced_BMS_7ded21a_1_ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_FREQS ] = ds_freqs ; ds -> mMakeOutput [ NE_DS_METHOD_FREQS ] =
ds_output_freqs ; ds -> mMethods [ NE_DS_METHOD_SOLVERHITS ] = ds_solverhits
; ds -> mMakeOutput [ NE_DS_METHOD_SOLVERHITS ] = ds_output_solverhits ; ds
-> mMethods [ NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [
NE_DS_METHOD_MDUY_P ] = ds_output_mduy_p ; ds -> mMethods [
NE_DS_METHOD_MDXY_P ] = Enhanced_BMS_7ded21a_1_ds_mdxy_p ; ds -> mMakeOutput
[ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
Enhanced_BMS_7ded21a_1_ds_tdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXY_P ]
= ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ] =
Enhanced_BMS_7ded21a_1_ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] =
ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
Enhanced_BMS_7ded21a_1_ds_dxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXY_P ] =
ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ] =
Enhanced_BMS_7ded21a_1_ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] =
ds_output_dxy ; ds -> mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [
NE_DS_METHOD_DUY ] = ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] =
ds_output_duy ; ds -> mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [
NE_DS_METHOD_DTY ] = ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] =
ds_output_dty ; ds -> mMethods [ NE_DS_METHOD_MODE ] =
Enhanced_BMS_7ded21a_1_ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE ] =
ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
Enhanced_BMS_7ded21a_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = Enhanced_BMS_7ded21a_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
Enhanced_BMS_7ded21a_1_ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ]
= ds_output_assert ; ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ;
ds -> mMakeOutput [ NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds ->
mMethods [ NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = Enhanced_BMS_7ded21a_1_ds_dxdelt_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds ->
mMethods [ NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT ] = ds_output_dxdelt ; ds -> mMethods [
NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds -> mMethods [
NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [ NE_DS_METHOD_DUDELT ]
= ds_output_dudelt ; ds -> mMethods [ NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds ->
mMethods [ NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT ] = ds_output_dtdelt ; ds -> mMethods [
NE_DS_METHOD_OBS_EXP ] = Enhanced_BMS_7ded21a_1_ds_obs_exp ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = Enhanced_BMS_7ded21a_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = Enhanced_BMS_7ded21a_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = Enhanced_BMS_7ded21a_1_ds_obs_il ; ds -> mMakeOutput
[ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] =
Enhanced_BMS_7ded21a_1_ds_qx_p ; ds -> mMakeOutput [ NE_DS_METHOD_QX_P ] =
ds_output_qx_p ; ds -> mMethods [ NE_DS_METHOD_QU_P ] = ds_qu_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QU_P ] = ds_output_qu_p ; ds -> mMethods [
NE_DS_METHOD_QT_P ] = ds_qt_p ; ds -> mMakeOutput [ NE_DS_METHOD_QT_P ] =
ds_output_qt_p ; ds -> mMethods [ NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds ->
mMakeOutput [ NE_DS_METHOD_Q1_P ] = ds_output_q1_p ; ds -> mMethods [
NE_DS_METHOD_VAR_TOL ] = Enhanced_BMS_7ded21a_1_ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = Enhanced_BMS_7ded21a_1_ds_eq_tol ; ds -> mMakeOutput
[ NE_DS_METHOD_EQ_TOL ] = ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV
] = Enhanced_BMS_7ded21a_1_ds_lv ; ds -> mMakeOutput [ NE_DS_METHOD_LV ] =
ds_output_lv ; ds -> mMethods [ NE_DS_METHOD_SLV ] =
Enhanced_BMS_7ded21a_1_ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] =
Enhanced_BMS_7ded21a_1_ds_nldv ; ds -> mMakeOutput [ NE_DS_METHOD_NLDV ] =
ds_output_nldv ; ds -> mMethods [ NE_DS_METHOD_SCLV ] =
Enhanced_BMS_7ded21a_1_ds_sclv ; ds -> mMakeOutput [ NE_DS_METHOD_SCLV ] =
ds_output_sclv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] =
Enhanced_BMS_7ded21a_1_ds_imin ; ds -> mMakeOutput [ NE_DS_METHOD_IMIN ] =
ds_output_imin ; ds -> mMethods [ NE_DS_METHOD_IMAX ] =
Enhanced_BMS_7ded21a_1_ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX ] =
ds_output_imax ; ds -> mMethods [ NE_DS_METHOD_DIMIN ] = ds_dimin ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMIN ] = ds_output_dimin ; ds -> mMethods [
NE_DS_METHOD_DIMAX ] = ds_dimax ; ds -> mMakeOutput [ NE_DS_METHOD_DIMAX ] =
ds_output_dimax ; ds -> mEquationData = s_equation_data ; ds -> mCERData =
s_cer_data ; ds -> mICRData = s_icr_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; _ds
-> mField0 = s_constant_table0 ; _ds -> mField1 = s_constant_table1 ; _ds ->
mField2 = s_constant_table2 ; _ds -> mField3 = s_constant_table3 ; _ds ->
mField4 = s_constant_table4 ; _ds -> mField5 = s_constant_table5 ; _ds ->
mField6 = s_constant_table6 ; _ds -> mField7 = s_constant_table7 ; _ds ->
mField8 = s_constant_table8 ; _ds -> mField9 = s_constant_table9 ; _ds ->
mField10 = s_constant_table10 ; _ds -> mField11 = s_constant_table11 ; _ds ->
mField12 = s_constant_table12 ; ds -> mNumLargeArray = 13 ; return (
NeDynamicSystem * ) _ds ; } static int32_T ds_passert ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_iassert ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_cer ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxcer ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_ddcer ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddcer_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDCER_P .
mNumCol = 0ULL ; out -> mDDCER_P . mNumRow = 0ULL ; out -> mDDCER_P . mJc [ 0
] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_del_v (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_del_v0 ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_del_tmax ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_del_t ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxdelt ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dudelt ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDUDELT_P .
mNumCol = 7ULL ; out -> mDUDELT_P . mNumRow = 0ULL ; out -> mDUDELT_P . mJc [
0 ] = 0 ; out -> mDUDELT_P . mJc [ 1 ] = 0 ; out -> mDUDELT_P . mJc [ 2 ] = 0
; out -> mDUDELT_P . mJc [ 3 ] = 0 ; out -> mDUDELT_P . mJc [ 4 ] = 0 ; out
-> mDUDELT_P . mJc [ 5 ] = 0 ; out -> mDUDELT_P . mJc [ 6 ] = 0 ; out ->
mDUDELT_P . mJc [ 7 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dtdelt ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDTDELT_P . mNumCol = 1ULL ; out
-> mDTDELT_P . mNumRow = 0ULL ; out -> mDTDELT_P . mJc [ 0 ] = 0 ; out ->
mDTDELT_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_cache_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ;
( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_init_r ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_update_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_lock_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_cache_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_init_i ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_lock_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_update2_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_lock2_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ;
( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_update2_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_lock2_i ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_sfo ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dtf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dtf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDTF_P .
mNumCol = 1ULL ; out -> mDTF_P . mNumRow = 54ULL ; out -> mDTF_P . mJc [ 0 ]
= 0 ; out -> mDTF_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ;
} static int32_T ds_ddf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDF_P .
mNumCol = 0ULL ; out -> mDDF_P . mNumRow = 54ULL ; out -> mDDF_P . mJc [ 0 ]
= 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t2 , NeDsMethodOutput *
out ) { ( void ) t2 ; ( void ) LC ; out -> mB . mX [ 0ULL ] = 1.0 ; out -> mB
. mX [ 1ULL ] = 0.00061460441289416237 ; out -> mB . mX [ 2ULL ] = 1.0 ; out
-> mB . mX [ 3ULL ] = 0.0006390495097806716 ; out -> mB . mX [ 4ULL ] = 1.0 ;
out -> mB . mX [ 5ULL ] = 0.0006122396816561767 ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_b_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 8 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 6 } ; static int32_T
_cg_const_2 [ 6 ] = { 0 , 2 , 8 , 10 , 16 , 18 } ; ( void ) t1 ; ( void ) LC
; out -> mB_P . mNumCol = 7ULL ; out -> mB_P . mNumRow = 54ULL ; out -> mB_P
. mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mB_P . mJc [ 1 ] = _cg_const_1 [ 1 ]
; out -> mB_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mB_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mB_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mB_P
. mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mB_P . mJc [ 6 ] = _cg_const_1 [ 6 ]
; out -> mB_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mB_P . mIr [ 0 ] =
_cg_const_2 [ 0 ] ; out -> mB_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mB_P
. mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mB_P . mIr [ 3 ] = _cg_const_2 [ 3 ]
; out -> mB_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mB_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_c ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_c_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mC_P . mNumCol = 1ULL ; out ->
mC_P . mNumRow = 54ULL ; out -> mC_P . mJc [ 0 ] = 0 ; out -> mC_P . mJc [ 1
] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dwf (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dwf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDWF_P . mNumCol = 0ULL ; out ->
mDWF_P . mNumRow = 54ULL ; out -> mDWF_P . mJc [ 0 ] = 0 ; ( void ) LC ; (
void ) out ; return 0 ; } static int32_T ds_dpdxf ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1
; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_dpdxf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mDPDXF_P . mNumCol = 6ULL ; out -> mDPDXF_P . mNumRow = 155ULL ;
out -> mDPDXF_P . mJc [ 0 ] = 0 ; out -> mDPDXF_P . mJc [ 1 ] = 0 ; out ->
mDPDXF_P . mJc [ 2 ] = 0 ; out -> mDPDXF_P . mJc [ 3 ] = 0 ; out -> mDPDXF_P
. mJc [ 4 ] = 0 ; out -> mDPDXF_P . mJc [ 5 ] = 0 ; out -> mDPDXF_P . mJc [ 6
] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dnf (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static real_T _cg_const_1 [ 6 ] = { -
0.038125650109325247 , - 0.0391972593415329 , - 0.036805351846028581 , - 1.0
, - 1.0 , - 1.0 } ; ( void ) t1 ; ( void ) LC ; out -> mDNF . mX [ 0 ] =
_cg_const_1 [ 0 ] ; out -> mDNF . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDNF
. mX [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDNF . mX [ 3 ] = _cg_const_1 [ 3 ] ;
out -> mDNF . mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDNF . mX [ 5 ] =
_cg_const_1 [ 5 ] ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_freqs ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) LC ; out -> mICR . mX [ 1ULL ] = t1 -> mX . mX [ 2ULL ] ;
out -> mICR . mX [ 3ULL ] = t1 -> mX . mX [ 10ULL ] ; out -> mICR . mX [ 5ULL
] = t1 -> mX . mX [ 18ULL ] ; out -> mICR . mX [ 0ULL ] = t1 -> mX . mX [
0ULL ] - t1 -> mP_R . mX [ 5ULL ] ; out -> mICR . mX [ 2ULL ] = t1 -> mX . mX
[ 8ULL ] - t1 -> mP_R . mX [ 3ULL ] ; out -> mICR . mX [ 4ULL ] = t1 -> mX .
mX [ 16ULL ] - t1 -> mP_R . mX [ 4ULL ] ; out -> mICR . mX [ 6ULL ] = 0.0 ;
out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR . mX [ 8ULL ] = 0.0 ; out ->
mICR . mX [ 9ULL ] = 0.0 ; out -> mICR . mX [ 10ULL ] = 0.0 ; out -> mICR .
mX [ 11ULL ] = 0.0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_icr_im ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mICR_IM . mX [
0 ] = 3 ; out -> mICR_IM . mX [ 1 ] = 3 ; out -> mICR_IM . mX [ 2 ] = 3 ; out
-> mICR_IM . mX [ 3 ] = 3 ; out -> mICR_IM . mX [ 4 ] = 3 ; out -> mICR_IM .
mX [ 5 ] = 3 ; out -> mICR_IM . mX [ 6 ] = 3 ; out -> mICR_IM . mX [ 7 ] = 3
; out -> mICR_IM . mX [ 8 ] = 3 ; out -> mICR_IM . mX [ 9 ] = 3 ; out ->
mICR_IM . mX [ 10 ] = 3 ; out -> mICR_IM . mX [ 11 ] = 3 ; ( void ) LC ; (
void ) out ; return 0 ; } static int32_T ds_icr_id ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1
; ( void ) LC ; out -> mICR_ID . mX [ 0 ] = false ; out -> mICR_ID . mX [ 1 ]
= false ; out -> mICR_ID . mX [ 2 ] = false ; out -> mICR_ID . mX [ 3 ] =
false ; out -> mICR_ID . mX [ 4 ] = false ; out -> mICR_ID . mX [ 5 ] = false
; out -> mICR_ID . mX [ 6 ] = false ; out -> mICR_ID . mX [ 7 ] = false ; out
-> mICR_ID . mX [ 8 ] = false ; out -> mICR_ID . mX [ 9 ] = false ; out ->
mICR_ID . mX [ 10 ] = false ; out -> mICR_ID . mX [ 11 ] = false ; ( void )
LC ; ( void ) out ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mICR_IL . mX [ 0 ] = true ; out ->
mICR_IL . mX [ 1 ] = true ; out -> mICR_IL . mX [ 2 ] = true ; out -> mICR_IL
. mX [ 3 ] = true ; out -> mICR_IL . mX [ 4 ] = true ; out -> mICR_IL . mX [
5 ] = true ; out -> mICR_IL . mX [ 6 ] = true ; out -> mICR_IL . mX [ 7 ] =
true ; out -> mICR_IL . mX [ 8 ] = true ; out -> mICR_IL . mX [ 9 ] = true ;
out -> mICR_IL . mX [ 10 ] = true ; out -> mICR_IL . mX [ 11 ] = true ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDXICR . mX [ 0ULL ] = 1.0 ; out
-> mDXICR . mX [ 1ULL ] = 1.0 ; out -> mDXICR . mX [ 2ULL ] = 1.0 ; out ->
mDXICR . mX [ 3ULL ] = 1.0 ; out -> mDXICR . mX [ 4ULL ] = 1.0 ; out ->
mDXICR . mX [ 5ULL ] = 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_ddicr ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_ddicr_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDDICR_P . mNumCol = 0ULL ; out ->
mDDICR_P . mNumRow = 12ULL ; out -> mDDICR_P . mJc [ 0 ] = 0 ; ( void ) LC ;
( void ) out ; return 0 ; } static int32_T ds_tduicr_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mTDUICR_P . mNumCol = 7ULL ; out
-> mTDUICR_P . mNumRow = 12ULL ; out -> mTDUICR_P . mJc [ 0 ] = 0 ; out ->
mTDUICR_P . mJc [ 1 ] = 0 ; out -> mTDUICR_P . mJc [ 2 ] = 0 ; out ->
mTDUICR_P . mJc [ 3 ] = 0 ; out -> mTDUICR_P . mJc [ 4 ] = 0 ; out ->
mTDUICR_P . mJc [ 5 ] = 0 ; out -> mTDUICR_P . mJc [ 6 ] = 0 ; out ->
mTDUICR_P . mJc [ 7 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_icrm ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxicrm ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_ddicrm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddicrm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDICRM_P .
mNumCol = 0ULL ; out -> mDDICRM_P . mNumRow = 0ULL ; out -> mDDICRM_P . mJc [
0 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dimin (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dimax ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_ddm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDM_P .
mNumCol = 0ULL ; out -> mDDM_P . mNumRow = 84ULL ; out -> mDDM_P . mJc [ 0 ]
= 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dum ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dum_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mDUM_P . mNumCol = 7ULL ; out -> mDUM_P . mNumRow = 84ULL ; out
-> mDUM_P . mJc [ 0 ] = 0 ; out -> mDUM_P . mJc [ 1 ] = 0 ; out -> mDUM_P .
mJc [ 2 ] = 0 ; out -> mDUM_P . mJc [ 3 ] = 0 ; out -> mDUM_P . mJc [ 4 ] = 0
; out -> mDUM_P . mJc [ 5 ] = 0 ; out -> mDUM_P . mJc [ 6 ] = 0 ; out ->
mDUM_P . mJc [ 7 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dtm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1
, NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dtm_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDTM_P . mNumCol = 1ULL ; out ->
mDTM_P . mNumRow = 84ULL ; out -> mDTM_P . mJc [ 0 ] = 0 ; out -> mDTM_P .
mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dpm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dpm_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDPM_P . mNumCol = 6ULL ; out ->
mDPM_P . mNumRow = 84ULL ; out -> mDPM_P . mJc [ 0 ] = 0 ; out -> mDPM_P .
mJc [ 1 ] = 0 ; out -> mDPM_P . mJc [ 2 ] = 0 ; out -> mDPM_P . mJc [ 3 ] = 0
; out -> mDPM_P . mJc [ 4 ] = 0 ; out -> mDPM_P . mJc [ 5 ] = 0 ; out ->
mDPM_P . mJc [ 6 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dp_l ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dp_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dp_j ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dp_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_qx ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_qu ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_qt ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_q1 ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_qu_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mQU_P . mNumCol = 7ULL ; out -> mQU_P . mNumRow = 54ULL ; out ->
mQU_P . mJc [ 0 ] = 0 ; out -> mQU_P . mJc [ 1 ] = 0 ; out -> mQU_P . mJc [ 2
] = 0 ; out -> mQU_P . mJc [ 3 ] = 0 ; out -> mQU_P . mJc [ 4 ] = 0 ; out ->
mQU_P . mJc [ 5 ] = 0 ; out -> mQU_P . mJc [ 6 ] = 0 ; out -> mQU_P . mJc [ 7
] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_qt_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mQT_P . mNumCol
= 1ULL ; out -> mQT_P . mNumRow = 54ULL ; out -> mQT_P . mJc [ 0 ] = 0 ; out
-> mQT_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_q1_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mQ1_P .
mNumCol = 1ULL ; out -> mQ1_P . mNumRow = 54ULL ; out -> mQ1_P . mJc [ 0 ] =
0 ; out -> mQ1_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_solverhits ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_duy ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDUY . mX [
0ULL ] = 1.0 ; out -> mDUY . mX [ 1ULL ] = 1.0 ; out -> mDUY . mX [ 2ULL ] =
1.0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_duy_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 8 ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 3 } ; ( void ) t1 ; ( void ) LC ; out -> mDUY_P . mNumCol =
7ULL ; out -> mDUY_P . mNumRow = 16ULL ; out -> mDUY_P . mJc [ 0 ] =
_cg_const_1 [ 0 ] ; out -> mDUY_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out ->
mDUY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDUY_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mDUY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mDUY_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mDUY_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mDUY_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mDUY_P . mIr [ 0 ] = 6 ; out -> mDUY_P . mIr [ 1 ] = 7 ; out -> mDUY_P . mIr
[ 2 ] = 8 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_mduy_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mMDUY_P .
mNumCol = 7ULL ; out -> mMDUY_P . mNumRow = 16ULL ; out -> mMDUY_P . mJc [ 0
] = 0 ; out -> mMDUY_P . mJc [ 1 ] = 0 ; out -> mMDUY_P . mJc [ 2 ] = 0 ; out
-> mMDUY_P . mJc [ 3 ] = 0 ; out -> mMDUY_P . mJc [ 4 ] = 0 ; out -> mMDUY_P
. mJc [ 5 ] = 0 ; out -> mMDUY_P . mJc [ 6 ] = 0 ; out -> mMDUY_P . mJc [ 7 ]
= 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_tduy_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 8 ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 3 } ; ( void ) t1 ; ( void ) LC ; out -> mTDUY_P . mNumCol =
7ULL ; out -> mTDUY_P . mNumRow = 16ULL ; out -> mTDUY_P . mJc [ 0 ] =
_cg_const_1 [ 0 ] ; out -> mTDUY_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out ->
mTDUY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mTDUY_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mTDUY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mTDUY_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mTDUY_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mTDUY_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mTDUY_P . mIr [ 0 ] = 6 ; out -> mTDUY_P . mIr [ 1 ] = 7 ; out -> mTDUY_P .
mIr [ 2 ] = 8 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dty ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dty_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDTY_P . mNumCol = 1ULL ; out ->
mDTY_P . mNumRow = 16ULL ; out -> mDTY_P . mJc [ 0 ] = 0 ; out -> mDTY_P .
mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; }
