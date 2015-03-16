#if !defined(__IVI_DIRECTSHOW_DEMULTIPLEXER_GUIDS_H__)
#define __IVI_DIRECTSHOW_DEMULTIPLEXER_GUIDS_H__

/*
 *  IviDsDemultiplexer filter's related GUIDs
 */
// {5723AB6C-81B8-41fa-9988-9BBF255FCBD2}
DEFINE_GUID(CLSID_IviDsDemultiplexer,
			0x5723ab6c, 0x81b8, 0x41fa, 0x99, 0x88, 0x9b, 0xbf, 0x25, 0x5f, 0xcb, 0xd2);

// {C43430A6-294A-4441-975E-F90C0E32DF98}s
DEFINE_GUID(CLSID_IviDemuxOutputPinManagementPropertyPage, 
            0xc43430a6, 0x294a, 0x4441, 0x97, 0x5e, 0xf9, 0xc, 0xe, 0x32, 0xdf, 0x98);

// {515A4E54-3EEC-4ee3-BE0F-0681F17B3BFE}
DEFINE_GUID(CLSID_IviDemuxPidMapPropertyPage, 
            0x515a4e54, 0x3eec, 0x4ee3, 0xbe, 0xf, 0x6, 0x81, 0xf1, 0x7b, 0x3b, 0xfe);

// {A1F897E2-593B-4561-B486-6BF1F83A61BA}
DEFINE_GUID(CLSID_IviDemuxStreamIdMapPropertyPage, 
            0xa1f897e2, 0x593b, 0x4561, 0xb4, 0x86, 0x6b, 0xf1, 0xf8, 0x3a, 0x61, 0xba);

// {EA9C01EE-A16B-43b1-B4DC-4A10FDA78B0E}
DEFINE_GUID(CLSID_IviDemuxOperationModeManagementPropertyPage, 
            0xea9c01ee, 0xa16b, 0x43b1, 0xb4, 0xdc, 0x4a, 0x10, 0xfd, 0xa7, 0x8b, 0xe);


// {48C2FC09-1B09-4fd6-9FAE-0F5AA0CA835F}
DEFINE_GUID(CLSID_IviDemuxElementaryMapPropertyPage, 
            0x48c2fc09, 0x1b09, 0x4fd6, 0x9f, 0xae, 0xf, 0x5a, 0xa0, 0xca, 0x83, 0x5f);

DEFINE_GUID(IID_IOutputControl, 
			0x125c194d, 0x1ec6, 0x4ed8, 0x87, 0xfa, 0x9d, 0x9a, 0xaf, 0x46, 0x67, 0x43);

/*
 *  IviDsDemultiplexer KsProperty Set GUIDs.
 */
DEFINE_GUID(AM_KSPROPSETID_DemuxConfiguration, 
            0xcbf67519, 0x1e9d, 0x47f6, 0xb7, 0xa2, 0x5d, 0xd7, 0x9f, 0x3a, 0xe9, 0x67);
// {DD1ECFDD-AA6F-4c52-84A4-AF12267B0C4A}
DEFINE_GUID(AM_KSPROPSETID_ProgramSpecificInfo, 
            0xdd1ecfdd, 0xaa6f, 0x4c52, 0x84, 0xa4, 0xaf, 0x12, 0x26, 0x7b, 0xc, 0x4a);


// {6E59EAF6-5517-4f4f-BD9A-B9844F0D0E10}
DEFINE_GUID(CLSID_IviDemuxGMO,
            0x6e59eaf6, 0x5517, 0x4f4f, 0xbd, 0x9a, 0xb9, 0x84, 0x4f, 0xd, 0xe, 0x10);

DEFINE_GUID(IID_IDemuxControl, 
            0x25656ff0, 0x147b, 0x479a, 0xa7, 0x8e, 0xb1, 0xbb, 0x40, 0x35, 0x56, 0x7d);

/*
 * GUID for interface IMPEG2StreamIdMap2.
 */
// {8E338470-B8C8-40f5-BC8E-ABB920D01352}
DEFINE_GUID(IID_IMPEG2StreamIdMap2, 
            0x8e338470, 0xb8c8, 0x40f5, 0xbc, 0x8e, 0xab, 0xb9, 0x20, 0xd0, 0x13, 0x52);

#endif //__IVI_DIRECTSHOW_DEMULTIPLEXER_GUIDS_H__