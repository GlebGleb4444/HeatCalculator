#pragma once

using namespace System;

public ref class HeatModel
{
public:
	double m;
	double c;
	double T1;
	double T2;

	double DeltaT;
	double Q;
	String^ ProcessStatus;

	HeatModel();

	String^ Validate();
	void Calculate();
};
