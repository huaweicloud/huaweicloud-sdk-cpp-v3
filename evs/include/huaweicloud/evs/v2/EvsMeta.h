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
    static HttpRequestDef genRequestDefForBatchCreateVolumeTags();
    static HttpRequestDef genRequestDefForBatchDeleteVolumeTags();
    static HttpRequestDef genRequestDefForCinderAcceptVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderCreateVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderDeleteVolumeTransfer();
    static HttpRequestDef genRequestDefForCinderListAvailabilityZones();
    static HttpRequestDef genRequestDefForCinderListQuotas();
    static HttpRequestDef genRequestDefForCinderListVolumeTransfers();
    static HttpRequestDef genRequestDefForCinderListVolumeTypes();
    static HttpRequestDef genRequestDefForCinderShowVolumeTransfer();
    static HttpRequestDef genRequestDefForCreateSnapshot();
    static HttpRequestDef genRequestDefForCreateVolume();
    static HttpRequestDef genRequestDefForDeleteSnapshot();
    static HttpRequestDef genRequestDefForDeleteVolume();
    static HttpRequestDef genRequestDefForListSnapshots();
    static HttpRequestDef genRequestDefForListVolumeTags();
    static HttpRequestDef genRequestDefForListVolumes();
    static HttpRequestDef genRequestDefForListVolumesByTags();
    static HttpRequestDef genRequestDefForModifyVolumeQoS();
    static HttpRequestDef genRequestDefForResizeVolume();
    static HttpRequestDef genRequestDefForRetypeVolume();
    static HttpRequestDef genRequestDefForRollbackSnapshot();
    static HttpRequestDef genRequestDefForShowJob();
    static HttpRequestDef genRequestDefForShowSnapshot();
    static HttpRequestDef genRequestDefForShowVolume();
    static HttpRequestDef genRequestDefForShowVolumeTags();
    static HttpRequestDef genRequestDefForUpdateSnapshot();
    static HttpRequestDef genRequestDefForUpdateVolume();
    static HttpRequestDef genRequestDefForListVersions();
    static HttpRequestDef genRequestDefForShowVersion();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_EvsMeta_H_
