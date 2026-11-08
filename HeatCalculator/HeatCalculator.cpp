#include "HeatModel.h"

HeatModel::HeatModel()
{
	m = 0.0;
	c = 0.0;
	T1 = 0.0;
	T2 = 0.0;
	DeltaT = 0.0;
	Q = 0.0;
	ProcessStatus = "";
}

String^ HeatModel::Validate()
{
	if (m <= 0.0)
		return "Маса речовини m повинна бути більшою за 0 кг.";
	if (c <= 0.0)
		return "Питома теплоємність c повинна бути більшою за 0 Дж/(кг·°C).";
	return "";
}

void HeatModel::Calculate()
{
	DeltaT = T2 - T1;

	Q = m * c * DeltaT;

	if (Q > 0.0)
		ProcessStatus = "Речовина поглинає теплоту (нагрівання).";
	else if (Q < 0.0)
		ProcessStatus = "Речовина віддає теплоту (охолодження).";
	else
		ProcessStatus = "Процес теплообміну відсутній (Q = 0).";
}
