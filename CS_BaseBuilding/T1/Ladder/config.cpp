class CfgPatches
{
	class CS_T1_Ladder
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class CS_T1_Ladder: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Ladder\T1_Ladder.p3d";
	};
};
