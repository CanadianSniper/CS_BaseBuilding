class CfgPatches
{
	class CS_T2_Walls
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class CS_T2_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T2\Walls\T2_Wall.p3d";
	};
};
