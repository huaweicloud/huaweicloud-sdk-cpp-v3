
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumesForBatchResizeVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumesForBatchResizeVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  VolumesForBatchResizeVolume
    : public ModelBase
{
public:
    VolumesForBatchResizeVolume();
    virtual ~VolumesForBatchResizeVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumesForBatchResizeVolume members

    /// <summary>
    /// The disk ID.
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// The new disk size, in GiB. This parameter value must be greater than the original disk size and less than the maximum size allowed for a disk. The maximum disk size: - Data disk: 32,768 GiB - System disk: 1,024 GiB
    /// </summary>

    int32_t getNewSize() const;
    bool newSizeIsSet() const;
    void unsetnewSize();
    void setNewSize(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t newSize_;
    bool newSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumesForBatchResizeVolume_H_
