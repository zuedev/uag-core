class CfgPatches {
    class uag_zen_patch {
        authors[] = {"zuedev"};
        authorUrl = "https://uagpmc.com";
        name = "uag_zen_patch";
        requiredAddons[] = {
            "zen_common"
        };
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {};
    };
};

class zen_context_menu_actions {
    class GetGrid {
        displayName = "Get Grid";
		icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\map_ca.paa";
        statement = "hint format ['Grid at cursor: %1', mapGridPosition _position];";
        priority = 666;
    };
	class PlaceArsenal {
		displayName = "Place Arsenal Box";
		icon = "\a3\ui_f\data\gui\rsc\rscdisplayarsenal\handgun_ca.paa";
		statement = "[_position] spawn uag_fnc_createArsenal;";
		priority = 666;
	};
	class GiveLoadoutDialog {
		displayName = "Give Loadout Dialog";
		icon = "\a3\ui_f\data\gui\rsc\rscdisplayarsenal\handgun_ca.paa";
		statement = "[] remoteExec ['uag_fnc_showLoadoutDialog', _hoveredEntity];";
		priority = 666;
		condition = "isPlayer _hoveredEntity";
	};
};