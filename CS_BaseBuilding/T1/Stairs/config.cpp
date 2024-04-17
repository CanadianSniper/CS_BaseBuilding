class CfgPatches
{
	class CS_T1_Stairs
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class CS_T1_Stairs_L: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Stairs\T1_Stairs_L.p3d";
	};
	class CS_T1_Stairs_Straight: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Stairs\T1_Stairs_Straight.p3d";
	};
	class CS_T1_Stairs_U: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Stairs\T1_Stairs_U.p3d";
	};
};
