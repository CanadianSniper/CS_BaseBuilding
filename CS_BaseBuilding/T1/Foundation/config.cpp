class CfgPatches
{
	class CS_T1_Foundation
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class CS_T1_Foundation: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Foundation\T1_Foundation.p3d";
	};
};
