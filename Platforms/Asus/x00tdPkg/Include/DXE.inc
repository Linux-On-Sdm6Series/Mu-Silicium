  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  #INF Binaries/x00td/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/nitrogen/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/NpaDxe/NpaDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/x00td/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/x00td/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/x00td/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  #INF Binaries/x00td/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/x00td/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/x00td/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/x00td/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf