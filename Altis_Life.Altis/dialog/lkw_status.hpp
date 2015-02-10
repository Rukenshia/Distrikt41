class D41_Lkw_Status {
	idd = 6666;
	name= "d41_lkw_status";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		
		class Hull_Lkw_Pic: Life_RscPicture
		{
			idc = 6677;
			text = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Covered_CA.paa";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.232031 * safezoneW;
			h = 0.33 * safezoneH;
		};		
		class WL1_Pic: Life_RscPicture
		{
			idc = 6667;
			text = "textures\tire_top.paa";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WL2_Pic: Life_RscPicture
		{
			idc = 6668;
			text = "textures\tire_top.paa";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WL3_Pic: Life_RscPicture
		{
			idc = 6669;
			text = "textures\tire_top.paa";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WL4_Pic: Life_RscPicture
		{
			idc = 6670;
			text = "textures\tire_top.paa";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WR1_Pic: Life_RscPicture
		{
			idc = 6671;
			text = "textures\tire_top.paa";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WR2_Pic: Life_RscPicture
		{
			idc = 6672;
			text = "textures\tire_top.paa";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WR3_Pic: Life_RscPicture
		{
			idc = 6673;
			text = "textures\tire_top.paa";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class WR4_Pic: Life_RscPicture
		{
			idc = 6674;
			text = "textures\tire_top.paa";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Engine_Pic: Life_RscPicture
		{
			idc = 6675;
			text = "textures\car-engine.paa";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class Fuel_Pic: Life_RscPicture
		{
			idc = 6676;
			text = "textures\fuel_tank_.paa";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

	};
	
	class controls {
				
		class Hull: D41_RscButtonMenu
		{
			idc = 6678;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.308 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class Engine: D41_RscButtonMenu
		{
			idc = 6680;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class Fuel: D41_RscButtonMenu
		{
			idc = 6681;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WL1: D41_RscButtonMenu
		{
			idc = 6679;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WR1: D41_RscButtonMenu
		{
			idc = 6685;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WL2: D41_RscButtonMenu
		{
			idc = 6682;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WR2: D41_RscButtonMenu
		{
			idc = 6686;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WL3: D41_RscButtonMenu
		{
			idc = 6684;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WR3: D41_RscButtonMenu
		{
			idc = 6687;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WL4: D41_RscButtonMenu
		{
			idc = 6683;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
		class WR4: D41_RscButtonMenu
		{
			idc = 6688;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorBackgroundFocused[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
		};
	};
};