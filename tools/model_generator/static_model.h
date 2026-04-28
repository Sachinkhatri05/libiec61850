/*
 * static_model.h
 *
 * automatically generated from E:\Sachin\Projects\ABT pro\IEC61850\ABT_PRO_IEC61850\IEC61850\src\iec61850_model\Demo.icd
 */

#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_LD0;
extern LogicalNode   iedModel_LD0_LLN0;
extern DataObject    iedModel_LD0_LLN0_Mod;
extern DataAttribute iedModel_LD0_LLN0_Mod_stVal;
extern DataAttribute iedModel_LD0_LLN0_Mod_q;
extern DataAttribute iedModel_LD0_LLN0_Mod_t;
extern DataObject    iedModel_LD0_LLN0_Beh;
extern DataAttribute iedModel_LD0_LLN0_Beh_stVal;
extern DataAttribute iedModel_LD0_LLN0_Beh_q;
extern DataAttribute iedModel_LD0_LLN0_Beh_t;
extern LogicalNode   iedModel_LD0_LPHD1;
extern DataObject    iedModel_LD0_LPHD1_PhyNam;
extern DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor;
extern LogicalNode   iedModel_LD0_MMXU1;
extern DataObject    iedModel_LD0_MMXU1_PhV;
extern DataAttribute iedModel_LD0_MMXU1_PhV_phsA;
extern DataAttribute iedModel_LD0_MMXU1_PhV_phsA_f;
extern DataAttribute iedModel_LD0_MMXU1_PhV_phsB;
extern DataAttribute iedModel_LD0_MMXU1_PhV_phsB_f;
extern DataAttribute iedModel_LD0_MMXU1_PhV_phsC;
extern DataAttribute iedModel_LD0_MMXU1_PhV_phsC_f;
extern DataAttribute iedModel_LD0_MMXU1_PhV_q;
extern DataAttribute iedModel_LD0_MMXU1_PhV_t;
extern DataObject    iedModel_LD0_MMXU1_A;
extern DataAttribute iedModel_LD0_MMXU1_A_phsA;
extern DataAttribute iedModel_LD0_MMXU1_A_phsA_f;
extern DataAttribute iedModel_LD0_MMXU1_A_phsB;
extern DataAttribute iedModel_LD0_MMXU1_A_phsB_f;
extern DataAttribute iedModel_LD0_MMXU1_A_phsC;
extern DataAttribute iedModel_LD0_MMXU1_A_phsC_f;
extern DataAttribute iedModel_LD0_MMXU1_A_q;
extern DataAttribute iedModel_LD0_MMXU1_A_t;
extern DataObject    iedModel_LD0_MMXU1_TotW;
extern DataAttribute iedModel_LD0_MMXU1_TotW_mag;
extern DataAttribute iedModel_LD0_MMXU1_TotW_mag_f;
extern DataAttribute iedModel_LD0_MMXU1_TotW_q;
extern DataAttribute iedModel_LD0_MMXU1_TotW_t;
extern DataObject    iedModel_LD0_MMXU1_TotPF;
extern DataAttribute iedModel_LD0_MMXU1_TotPF_mag;
extern DataAttribute iedModel_LD0_MMXU1_TotPF_mag_f;
extern DataAttribute iedModel_LD0_MMXU1_TotPF_q;
extern DataAttribute iedModel_LD0_MMXU1_TotPF_t;
extern LogicalNode   iedModel_LD0_MMTR1;
extern DataObject    iedModel_LD0_MMTR1_TotWh;
extern DataAttribute iedModel_LD0_MMTR1_TotWh_mag;
extern DataAttribute iedModel_LD0_MMTR1_TotWh_mag_f;
extern DataAttribute iedModel_LD0_MMTR1_TotWh_q;
extern DataAttribute iedModel_LD0_MMTR1_TotWh_t;



#define IEDMODEL_LD0 (&iedModel_LD0)
#define IEDMODEL_LD0_LLN0 (&iedModel_LD0_LLN0)
#define IEDMODEL_LD0_LLN0_Mod (&iedModel_LD0_LLN0_Mod)
#define IEDMODEL_LD0_LLN0_Mod_stVal (&iedModel_LD0_LLN0_Mod_stVal)
#define IEDMODEL_LD0_LLN0_Mod_q (&iedModel_LD0_LLN0_Mod_q)
#define IEDMODEL_LD0_LLN0_Mod_t (&iedModel_LD0_LLN0_Mod_t)
#define IEDMODEL_LD0_LLN0_Beh (&iedModel_LD0_LLN0_Beh)
#define IEDMODEL_LD0_LLN0_Beh_stVal (&iedModel_LD0_LLN0_Beh_stVal)
#define IEDMODEL_LD0_LLN0_Beh_q (&iedModel_LD0_LLN0_Beh_q)
#define IEDMODEL_LD0_LLN0_Beh_t (&iedModel_LD0_LLN0_Beh_t)
#define IEDMODEL_LD0_LPHD1 (&iedModel_LD0_LPHD1)
#define IEDMODEL_LD0_LPHD1_PhyNam (&iedModel_LD0_LPHD1_PhyNam)
#define IEDMODEL_LD0_LPHD1_PhyNam_vendor (&iedModel_LD0_LPHD1_PhyNam_vendor)
#define IEDMODEL_LD0_MMXU1 (&iedModel_LD0_MMXU1)
#define IEDMODEL_LD0_MMXU1_PhV (&iedModel_LD0_MMXU1_PhV)
#define IEDMODEL_LD0_MMXU1_PhV_phsA (&iedModel_LD0_MMXU1_PhV_phsA)
#define IEDMODEL_LD0_MMXU1_PhV_phsA_f (&iedModel_LD0_MMXU1_PhV_phsA_f)
#define IEDMODEL_LD0_MMXU1_PhV_phsB (&iedModel_LD0_MMXU1_PhV_phsB)
#define IEDMODEL_LD0_MMXU1_PhV_phsB_f (&iedModel_LD0_MMXU1_PhV_phsB_f)
#define IEDMODEL_LD0_MMXU1_PhV_phsC (&iedModel_LD0_MMXU1_PhV_phsC)
#define IEDMODEL_LD0_MMXU1_PhV_phsC_f (&iedModel_LD0_MMXU1_PhV_phsC_f)
#define IEDMODEL_LD0_MMXU1_PhV_q (&iedModel_LD0_MMXU1_PhV_q)
#define IEDMODEL_LD0_MMXU1_PhV_t (&iedModel_LD0_MMXU1_PhV_t)
#define IEDMODEL_LD0_MMXU1_A (&iedModel_LD0_MMXU1_A)
#define IEDMODEL_LD0_MMXU1_A_phsA (&iedModel_LD0_MMXU1_A_phsA)
#define IEDMODEL_LD0_MMXU1_A_phsA_f (&iedModel_LD0_MMXU1_A_phsA_f)
#define IEDMODEL_LD0_MMXU1_A_phsB (&iedModel_LD0_MMXU1_A_phsB)
#define IEDMODEL_LD0_MMXU1_A_phsB_f (&iedModel_LD0_MMXU1_A_phsB_f)
#define IEDMODEL_LD0_MMXU1_A_phsC (&iedModel_LD0_MMXU1_A_phsC)
#define IEDMODEL_LD0_MMXU1_A_phsC_f (&iedModel_LD0_MMXU1_A_phsC_f)
#define IEDMODEL_LD0_MMXU1_A_q (&iedModel_LD0_MMXU1_A_q)
#define IEDMODEL_LD0_MMXU1_A_t (&iedModel_LD0_MMXU1_A_t)
#define IEDMODEL_LD0_MMXU1_TotW (&iedModel_LD0_MMXU1_TotW)
#define IEDMODEL_LD0_MMXU1_TotW_mag (&iedModel_LD0_MMXU1_TotW_mag)
#define IEDMODEL_LD0_MMXU1_TotW_mag_f (&iedModel_LD0_MMXU1_TotW_mag_f)
#define IEDMODEL_LD0_MMXU1_TotW_q (&iedModel_LD0_MMXU1_TotW_q)
#define IEDMODEL_LD0_MMXU1_TotW_t (&iedModel_LD0_MMXU1_TotW_t)
#define IEDMODEL_LD0_MMXU1_TotPF (&iedModel_LD0_MMXU1_TotPF)
#define IEDMODEL_LD0_MMXU1_TotPF_mag (&iedModel_LD0_MMXU1_TotPF_mag)
#define IEDMODEL_LD0_MMXU1_TotPF_mag_f (&iedModel_LD0_MMXU1_TotPF_mag_f)
#define IEDMODEL_LD0_MMXU1_TotPF_q (&iedModel_LD0_MMXU1_TotPF_q)
#define IEDMODEL_LD0_MMXU1_TotPF_t (&iedModel_LD0_MMXU1_TotPF_t)
#define IEDMODEL_LD0_MMTR1 (&iedModel_LD0_MMTR1)
#define IEDMODEL_LD0_MMTR1_TotWh (&iedModel_LD0_MMTR1_TotWh)
#define IEDMODEL_LD0_MMTR1_TotWh_mag (&iedModel_LD0_MMTR1_TotWh_mag)
#define IEDMODEL_LD0_MMTR1_TotWh_mag_f (&iedModel_LD0_MMTR1_TotWh_mag_f)
#define IEDMODEL_LD0_MMTR1_TotWh_q (&iedModel_LD0_MMTR1_TotWh_q)
#define IEDMODEL_LD0_MMTR1_TotWh_t (&iedModel_LD0_MMTR1_TotWh_t)

#endif /* STATIC_MODEL_H_ */

