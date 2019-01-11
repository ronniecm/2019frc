/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Claw.h"

Claw::Claw() : Subsystem("Claw") 
{
    left = new WPI_TalonSRX(4);
    right = new WPI_TalonSRX(5);
    right->SetInverted(true);
}

void Claw::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

void Claw::Collect() {
  left->Set(.75);
  right->Set(.75);
}

void Claw::Score() {
    left->Set(-.75);
    right->Set(-.75);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
