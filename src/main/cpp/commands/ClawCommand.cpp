/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ClawCommand.h"

ClawCommand::ClawCommand(bool collect) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::claw.get());
  collectMode = collect;
}

// Called just before this Command runs the first time
void ClawCommand::Initialize() 
{
}

// Called repeatedly when this Command is scheduled to run
void ClawCommand::Execute() 
{
  if(collectMode)
    Robot::claw->Collect();
  else
    Robot::claw->Score();
}

// Make this return true when this Command no longer needs to run execute()
bool ClawCommand::IsFinished() { return false; }

// Called once after isFinished returns true
void ClawCommand::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClawCommand::Interrupted() {}
