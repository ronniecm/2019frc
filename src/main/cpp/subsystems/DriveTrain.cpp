/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/DriveTrain.h"

#include "RobotMap.h"
#include "commands/Drive.h"

DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain") 
{
  lf = new WPI_TalonSRX(0);
  rf = new WPI_TalonSRX(1);
  lr = new WPI_TalonSRX(2);
  rr = new WPI_TalonSRX(3);
  m_drive = new frc::MecanumDrive(*lf, *rf, *lr, *rr);
}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new Drive());
}

void DriveTrain::fodDrive(double y, double x, double rot, double angle)
{
  m_drive->DriveCartesian(y, x, rot, angle);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
