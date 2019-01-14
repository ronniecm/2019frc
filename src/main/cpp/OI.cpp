/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "commands/ClawCommand.h"

std::shared_ptr<frc::Joystick> OI::buttonBoard;
OI::OI() {
  // Process operator interface input here.
  driverJoystick.reset(new frc::Joystick(0));
  buttonBoard.reset(new frc::Joystick(1));
  collect.reset(new frc::JoystickButton(buttonBoard.get(), 0));
  score.reset(new frc::JoystickButton(buttonBoard.get(), 1));
  collect->WhileHeld(new ClawCommand(true));
  score->WhileHeld(new ClawCommand(false));
}

std::shared_ptr<frc::Joystick> OI::getJoystick()
{
  return driverJoystick;
}
