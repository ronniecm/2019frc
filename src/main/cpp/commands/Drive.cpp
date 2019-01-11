/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Drive.h"


Drive::Drive() {
  // Use Requires() here to declare subsystem dependencies
  Requires(Robot::driveTrain.get());
}

// Called just before this Command runs the first time
void Drive::Initialize() 
{
  y = x = rot = angle = 0;
}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute() 
{
  y = Robot::oi->getJoystick()->GetY();
  x = Robot::oi->getJoystick()->GetX();
  rot = Robot::oi->getJoystick()->GetZ();
  angle = Robot::navx->GetAngle();
  Robot::driveTrain->fodDrive(y, x, rot, angle);
}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() { return false; }

// Called once after isFinished returns true
void Drive::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted() {}
