/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/PIDSubsystem.h>
#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

class Elevator : public frc::PIDSubsystem {
 public:
    Elevator(double, double);
    double ReturnPIDInput() override;
    void UsePIDOutput(double output) override;
    void InitDefaultCommand() override;
    void SetElevatorSetpoint(double);
  private:
    std::shared_ptr<WPI_TalonSRX> elevatorMotor;
    std::shared_ptr<frc::AnalogPotentiometer> pot;
    std::shared_ptr<frc::AnalogInput> analogInput;
    double minPotVal, maxPotVal;
};
