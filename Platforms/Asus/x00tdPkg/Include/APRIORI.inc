APRIORI DXE {

  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/x00td/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf

  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf

  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/FontDxe/FontDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/x00td/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/x00td/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/x00td/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  #INF Binaries/x00td/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF Binaries/x00td/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/RNGDxe/RngDxe.inf
}