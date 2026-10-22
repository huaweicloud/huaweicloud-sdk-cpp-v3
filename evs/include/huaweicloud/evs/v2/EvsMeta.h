#ifndef HUAWEICLOUD_SDK_EVS_V2_EvsMeta_H_
#define HUAWEICLOUD_SDK_EVS_V2_EvsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/evs/v2/EvsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_EVS_V2_EXPORT  EvsMeta {
public:
    static HttpRequestDef genRequestDefForAssociateAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForBatchCreateSnapshotGroupTag();
    static HttpRequestDef genRequestDefForBatchCreateSnapshotTags();
    static HttpRequestDef genRequestDefForBatchCreateVolumeTags();
    static HttpRequestDef genRequestDefForBatchDeleteSnapshotGroupTag();
    static HttpRequestDef genRequestDefForBatchDeleteSnapshotTags();
    static HttpRequestDef genRequestDefForBatchDeleteVolumeTags();
    static HttpRequestDef genRequestDefForBatchResizeVolumes();
    static HttpRequestDef genRequestDefForChangeVolumeChargeMode();
    static HttpRequestDef genRequestDefForCinderAcceptVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderCreateVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderDeleteVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderListAvailabilityZones();
    static HttpRequestDef genRequestDefForCinderListQuotas();
    static HttpRequestDef genRequestDefForCinderListVolumeTransfers();
    static HttpRequestDef genRequestDefForCinderListVolumeTypes();
    static HttpRequestDef genRequestDefForCinderShowVolumeTransfer();
    static HttpRequestDef genRequestDefForCountAutoSnapshotPolicies();
    static HttpRequestDef genRequestDefForCountSnapshotChains();
    static HttpRequestDef genRequestDefForCountSnapshots();
    static HttpRequestDef genRequestDefForCountSnapshotsGroup();
    static HttpRequestDef genRequestDefForCreateAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForCreateSnapshot();
    static HttpRequestDef genRequestDefForCreateSnapshotGroup();
    static HttpRequestDef genRequestDefForCreateStandardSnapshot();
    static HttpRequestDef genRequestDefForCreateVolume();
    static HttpRequestDef genRequestDefForDeleteAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForDeleteSnapshot();
    static HttpRequestDef genRequestDefForDeleteSnapshotGroup();
    static HttpRequestDef genRequestDefForDeleteStandardSnapshot();
    static HttpRequestDef genRequestDefForDeleteVolume();
    static HttpRequestDef genRequestDefForDeleteVolumeInRecycle();
    static HttpRequestDef genRequestDefForDisassociateAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForListAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForListSnapshotChains();
    static HttpRequestDef genRequestDefForListSnapshotGroup();
    static HttpRequestDef genRequestDefForListSnapshotGroupTags();
    static HttpRequestDef genRequestDefForListSnapshotTags();
    static HttpRequestDef genRequestDefForListSnapshots();
    static HttpRequestDef genRequestDefForListSnapshotsDetails();
    static HttpRequestDef genRequestDefForListVolumeTags();
    static HttpRequestDef genRequestDefForListVolumes();
    static HttpRequestDef genRequestDefForListVolumesByTags();
    static HttpRequestDef genRequestDefForListVolumesInRecycle();
    static HttpRequestDef genRequestDefForModifyVolumeQoS();
    static HttpRequestDef genRequestDefForResizeVolume();
    static HttpRequestDef genRequestDefForRetypeVolume();
    static HttpRequestDef genRequestDefForRevertVolumeInRecycle();
    static HttpRequestDef genRequestDefForRollbackSnapshot();
    static HttpRequestDef genRequestDefForRollbackStandardSnapshot();
    static HttpRequestDef genRequestDefForShowAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForShowJob();
    static HttpRequestDef genRequestDefForShowRecyclePolicy();
    static HttpRequestDef genRequestDefForShowSnapshot();
    static HttpRequestDef genRequestDefForShowSnapshotGroup();
    static HttpRequestDef genRequestDefForShowStandardSnapshot();
    static HttpRequestDef genRequestDefForShowVolume();
    static HttpRequestDef genRequestDefForShowVolumeInRecycle();
    static HttpRequestDef genRequestDefForShowVolumeTags();
    static HttpRequestDef genRequestDefForUnsubscribePostpaidVolume();
    static HttpRequestDef genRequestDefForUpdateAutoSnapshotPolicy();
    static HttpRequestDef genRequestDefForUpdateRecyclePolicy();
    static HttpRequestDef genRequestDefForUpdateSnapshot();
    static HttpRequestDef genRequestDefForUpdateSnapshotGroup();
    static HttpRequestDef genRequestDefForUpdateStandardSnapshot();
    static HttpRequestDef genRequestDefForUpdateVolume();
    static HttpRequestDef genRequestDefForListVersions();
    static HttpRequestDef genRequestDefForShowVersion();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_EvsMeta_H_
