class TFAR_anprc152: ItemRadio {
    author = "Raspu";
    displayName = "AN/PRC-152";
    descriptionShort = "AN/PRC-152 personal radio 5km";//#Stringtable
    scope = PUBLIC;
    scopeCurator = PUBLIC;
    model = QPATHTOF(anprc152\data\tfr_anprc152);
    picture = QPATHTOF(anprc152\ui\152_icon.paa);
    tf_prototype = 1;
    tf_range = 5000;
    tf_dialog = "anprc152_radio_dialog";
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
    tf_subtype = "digital";
    tf_parent = "TFAR_anprc152";
    tf_additional_channel = 1;
    tf_halfDuplexOverride = 0; //0 disables half-duplex override, everything greater than 0 enables it
};
HIDDEN_CLASS(tf_anprc152 : TFAR_anprc152); //#Deprecated dummy class for backwards compat
TF_RADIO_IDS(TFAR_anprc152,AN/PRC-152)
