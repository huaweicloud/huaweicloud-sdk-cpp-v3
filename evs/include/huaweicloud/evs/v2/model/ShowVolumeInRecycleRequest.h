
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVolumeInRecycleRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVolumeInRecycleRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ShowVolumeInRecycleRequest
    : public ModelBase
{
public:
    ShowVolumeInRecycleRequest();
    virtual ~ShowVolumeInRecycleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVolumeInRecycleRequest members

    /// <summary>
    /// **参数解释** 云硬盘ID。 可通过[查询所有云硬盘详情](evs_04_2006.xml)获取云硬盘ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVolumeInRecycleRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVolumeInRecycleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowVolumeInRecycleRequest_H_
