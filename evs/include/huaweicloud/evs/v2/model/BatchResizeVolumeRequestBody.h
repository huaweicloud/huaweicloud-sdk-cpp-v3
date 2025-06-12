
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchResizeVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchResizeVolumeRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/PrepaidParamForBatchResizeVolume.h>
#include <huaweicloud/evs/v2/model/VolumesForBatchResizeVolume.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BatchResizeVolumeRequestBody
    : public ModelBase
{
public:
    BatchResizeVolumeRequestBody();
    virtual ~BatchResizeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeVolumeRequestBody members

    /// <summary>
    /// The list of disks to be expanded.
    /// </summary>

    std::vector<VolumesForBatchResizeVolume>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<VolumesForBatchResizeVolume>& value);

    /// <summary>
    /// 
    /// </summary>

    PrepaidParamForBatchResizeVolume getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const PrepaidParamForBatchResizeVolume& value);


protected:
    std::vector<VolumesForBatchResizeVolume> volumes_;
    bool volumesIsSet_;
    PrepaidParamForBatchResizeVolume bssParam_;
    bool bssParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchResizeVolumeRequestBody_H_
