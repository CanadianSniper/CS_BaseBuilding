class CfgPatches
{
	class CS_T1_Floors
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class CS_T1_Floor: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Floors\T1_Floor.p3d";
	};
	class CS_T1_Floor_L: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Floors\T1_Floor_L.p3d";
	};
	class CS_T1_Floor_Ladder: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Floors\T1_Floor_Ladder.p3d";
	};
	class CS_T1_Floor_Straight: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Floors\T1_Floor_Straight.p3d";
	};
	class CS_T1_Floor_U: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Floors\T1_Floor_U.p3d";
	};
};
