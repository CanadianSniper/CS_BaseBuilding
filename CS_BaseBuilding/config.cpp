class CfgPatches
{
	class CS_BaseBuilding
	{
		units[]={""};
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class CS_BaseBuilding
	{	
		dir = "CS_BaseBuilding";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_BaseBuilding";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"CS_BaseBuilding/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"CS_BaseBuilding/Scripts/4_World"};
			};
		};
	};
};