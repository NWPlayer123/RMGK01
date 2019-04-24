#include "System/GameSystem.h"

void main(void) {
    SET_GQR(2, 0x40004);
    SET_GQR(3, 0x50005;
    SET_GQR(4, 0x60006);
    SET_GQR(5, 0x70007);
    DVDInit();
    VIInit();
    HeapMemoryWatcher::createRootHeap();
    OSInitMutex(MR::MutexHolder<0>::sMutex);
    OSInitMutex(MR::MutexHolder<1>::sMutex);
    OSInitMutex(MR::MutexHolder<2>::sMutex);
    nw4r::lyt::LytInit();
    MR::setLayoutDefaultAllocator();
}
/*
8039AA24 main
8039AB1C __ct__10GameSystemFv
8039AB94 init__10GameSystemFv
8039AD28 isExecuteLoadSystemArchive__10GameSystemCFv
8039AD30 isDoneLoadSystemArchive__10GameSystemCFv
8039AD38 startToLoadSystemArchive__10GameSystemFv
8039AD8C exeInitializeAudio__10GameSystemFv
8039AE50 exeInitializeLogoScene__10GameSystemFv
8039AEB8 exeLoadStationedArchive__10GameSystemFv
8039AF0C initGX__10GameSystemFv
8039AF5C initAfterStationedResourceLoaded__10GameSystemFv
8039AFBC prepareReset__10GameSystemFv
8039AFC4 isPreparedReset__10GameSystemCFv
8039B044 frameLoop__10GameSystemFv
8039B0AC draw__10GameSystemFv
8039B140 update__10GameSystemFv
8039B20C updateSceneController__10GameSystemFv
8039B318 calcAnim__10GameSystemFv
8039B364 __sinit_\GameSystem_cpp
8039B3A8 __ct__Q213NrvGameSystem25GameSystemInitializeAudioFv
8039B3B8 __ct__Q213NrvGameSystem29GameSystemInitializeLogoSceneFv
8039B3C8 __ct__Q213NrvGameSystem30GameSystemLoadStationedArchiveFv
8039B3D8 __ct__Q213NrvGameSystem23GameSystemWaitForRebootFv
8039B3E8 __ct__Q213NrvGameSystem16GameSystemNormalFv
8039B3F8 execute__Q213NrvGameSystem16GameSystemNormalCFP5Spine
8039B430 execute__Q213NrvGameSystem23GameSystemWaitForRebootCFP5Spine
8039B434 execute__Q213NrvGameSystem30GameSystemLoadStationedArchiveCFP5Spine
8039B43C execute__Q213NrvGameSystem29GameSystemInitializeLogoSceneCFP5Spine
8039B444 execute__Q213NrvGameSystem25GameSystemInitializeAudioCFP5Spine
8039B44C __dt__10GameSystemFv
8039B4A4 __cl__Q22MR65FunctorV0M<P19GameSystemObjHolder,M19GameSystemObjHolderFPCvPv_v>CFv
8039B4D4 clone__Q22MR65FunctorV0M<P19GameSystemObjHolder,M19GameSystemObjHolderFPCvPv_v>CFP7JKRHeap
*/