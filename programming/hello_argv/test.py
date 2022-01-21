#!/usr/bin/env python3

import os,sys
import subprocess

def test_command_without_parameters():
  command_result = subprocess.check_output(['./hello_argv'])
  command_result = command_result.decode('utf-8')
  print(command_result)

def test_change_voltage_command():
  command_result = subprocess.check_output(['./hello_argv','5000','1000'])
  command_result = command_result.decode('utf-8')
  print(command_result)

test_command_without_parameters()
test_change_voltage_command()
