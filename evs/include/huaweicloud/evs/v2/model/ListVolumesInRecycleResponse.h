
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesInRecycleResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesInRecycleResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/RecycleBinVolume.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesInRecycleResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVolumesInRecycleResponse();
    virtual ~ListVolumesInRecycleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVolumesInRecycleResponse members

    /// <summary>
    /// **参数解释** 云硬盘总数。 **取值范围** 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释** 云硬盘列表。 **取值范围** 不涉及。
    /// </summary>

    std::vector<RecycleBinVolume>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<RecycleBinVolume>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<RecycleBinVolume> volumes_;
    bool volumesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesInRecycleResponse_H_
