/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ControlElevator.h"
#include "Robot.h"

ControlElevator::ControlElevator() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::elevator.get());
}

// Called just before this Command runs the first time
void ControlElevator::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ControlElevator::Execute() {
  Robot::elevator->Enable();

  double power = Robot::oi->buttonBoard->GetRawAxis(0);
  Robot::elevator->UsePIDOutput(power);
}

// Make this return true when this Command no longer needs to run execute()
bool ControlElevator::IsFinished() { return false; }

// Called once after isFinished returns true
void ControlElevator::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlElevator::Interrupted() {}
