/*
 * static_model.c
 *
 * automatically generated from E:\Sachin\Projects\ABT pro\IEC61850\ABT_PRO_IEC61850\IEC61850\src\iec61850_model\Demo.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_LD0_LLN0_MeasDS;


extern DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda3;
extern DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda4;

DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda0 = {
  "LD0",
  false,
  "MMXU1$MX$PhV", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MeasDS_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda1 = {
  "LD0",
  false,
  "MMXU1$MX$A", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MeasDS_fcda2
};

DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda2 = {
  "LD0",
  false,
  "MMXU1$MX$TotW", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MeasDS_fcda3
};

DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda3 = {
  "LD0",
  false,
  "MMXU1$MX$TotPF", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MeasDS_fcda4
};

DataSetEntry iedModelds_LD0_LLN0_MeasDS_fcda4 = {
  "LD0",
  false,
  "MMTR1$MX$TotWh", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_MeasDS = {
  "LD0",
  "LLN0$MeasDS",
  5,
  &iedModelds_LD0_LLN0_MeasDS_fcda0,
  NULL
};

LogicalDevice iedModel_LD0 = {
    LogicalDeviceModelType,
    "LD0",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_LD0_LLN0,
    NULL
};

LogicalNode iedModel_LD0_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
};

DataObject iedModel_LD0_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_LD0_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_LLN0,
    NULL,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_LD0_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_MMXU1,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
};

DataObject iedModel_LD0_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_LD0_LPHD1,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV,
};

DataObject iedModel_LD0_MMXU1_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_LD0_MMXU1,
    (ModelNode*) &iedModel_LD0_MMXU1_A,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsA,
    0,
    -1
};

DataAttribute iedModel_LD0_MMXU1_PhV_phsA = {
    DataAttributeModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsA_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_phsA_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_phsB = {
    DataAttributeModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsB_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_phsB_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_phsC = {
    DataAttributeModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_q,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsC_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_phsC_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_MMXU1_PhV_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_PhV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMXU1_PhV,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_LD0_MMXU1,
    (ModelNode*) &iedModel_LD0_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsA,
    0,
    -1
};

DataAttribute iedModel_LD0_MMXU1_A_phsA = {
    DataAttributeModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MMXU1_A,
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsA_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_phsA_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_phsB = {
    DataAttributeModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MMXU1_A,
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsB_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_phsB_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsB,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_phsC = {
    DataAttributeModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MMXU1_A,
    (ModelNode*) &iedModel_LD0_MMXU1_A_q,
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsC_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_phsC_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_A_phsC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMXU1_A,
    (ModelNode*) &iedModel_LD0_MMXU1_A_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_A_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMXU1_A,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_LD0_MMXU1,
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_MMXU1_TotW_mag,
    0,
    -1
};

DataAttribute iedModel_LD0_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_MMXU1_TotW_q,
    (ModelNode*) &iedModel_LD0_MMXU1_TotW_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_MMXU1_TotW_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMXU1_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_LD0_MMXU1,
    NULL,
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF_mag,
    0,
    -1
};

DataAttribute iedModel_LD0_MMXU1_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF_q,
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_TotPF_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMXU1_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMXU1_TotPF,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_MMTR1 = {
    LogicalNodeModelType,
    "MMTR1",
    (ModelNode*) &iedModel_LD0,
    NULL,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
};

DataObject iedModel_LD0_MMTR1_TotWh = {
    DataObjectModelType,
    "TotWh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    NULL,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_mag,
    0,
    -1
};

DataAttribute iedModel_LD0_MMTR1_TotWh_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_q,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_LD0_LLN0_report0;

ReportControlBlock iedModel_LD0_LLN0_report0 = {&iedModel_LD0_LLN0, "BRCB101", "MeterReport", true, "MeasDS", 1, 27, 47, 0, 5000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "MeterIED",
    &iedModel_LD0,
    &iedModelds_LD0_LLN0_MeasDS,
    &iedModel_LD0_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{
}
