FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {
  SECTION RAW = SM7125/APIC.aml
# SECTION RAW = SM7125/APIC.UniCore.aml
# SECTION RAW = SM7125/BERT.aml
# SECTION RAW = SM7125/BGRT.aml
  SECTION RAW = SM7125/CSRT.aml
!if $(TARGET) == DEBUG
  SECTION RAW = SM7125/DBG2.aml
!endif
  SECTION RAW = a52q/DSDT.aml
  SECTION RAW = SM7125/FACP.aml
  SECTION RAW = SM7125/FACS.aml
# SECTION RAW = SM7125/FPDT.aml
  SECTION RAW = SM7125/GTDT.aml
  SECTION RAW = SM7125/IORT.aml
  SECTION RAW = SM7125/MCFG.aml
# SECTION RAW = SM7125/MSDM.aml
  SECTION RAW = SM7125/PPTT.aml
# SECTION RAW = SM7125/SPCR.aml
# SECTION RAW = SM7125/TPM2.aml
# SECTION RAW = SM7125/XSDT.aml
  SECTION UI = "AcpiTables"
}
