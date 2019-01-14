/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/WPILib.h>
#include <ctre/Phoenix.h>
#include "AHRS.h"

class DriveTrain : public frc::Subsystem {
 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void fodDrive(double, double, double, double);
  void polorDrive(double, double, double);


 private:
    WPI_TalonSRX *lf, *rf, *lr, *rr;
    frc::MecanumDrive *m_drive;
    
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
};
