@echo off
arrange < arrange.%1.in > arrange.sol
arrange.checker.exe arrange.%1.in arrange.sol dummy
IF EXIST arrange.sol del arrange.sol
