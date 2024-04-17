class CfgPatches
{
	class CS_T1_Walls
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class CS_T1_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Walls\T1_Wall.p3d";
	};
	class CS_T1_Wall_Half: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Walls\T1_Wall_Half.p3d";
	};
	class CS_T1_Wall_Window: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Walls\T1_Wall_Window.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Open T1 Window";
				component = "doorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 2.0;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen="doorWoodGateOpen";
				soundClose="doorWoodGateClose";
				soundLocked="doorWoodGateRattle";
				soundOpenABit="doorWoodGateOpenABit";
			};
		};
	};
	class CS_T1_Wall_Window_Open: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Walls\T1_Wall_Window_Open.p3d";
	};
	class CS_T1_Wall_Doorway: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Walls\T1_Wall_Doorway.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="Open T1 Door";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
                soundOpen="doorWoodSmallOpen";
                soundClose="doorWoodSmallClose";
                soundLocked="doorWoodSmallRattle";
                soundOpenABit="doorWoodSmallOpenABit";
			};
		};
	};
	class CS_T1_Wall_Gate: HouseNoDestruct
	{
		scope = 2;
		model = "CS_BaseBuilding\T1\Walls\T1_Wall_Gate.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Open T1 Gate";
				component = "doorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 2.0;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen="doorWoodGateOpen";
				soundClose="doorWoodGateClose";
				soundLocked="doorWoodGateRattle";
				soundOpenABit="doorWoodGateOpenABit";
			};
		};
	};
};
