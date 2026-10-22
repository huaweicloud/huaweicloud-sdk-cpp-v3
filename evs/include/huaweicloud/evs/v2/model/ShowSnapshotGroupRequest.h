
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotGroupRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotGroupRequest_H_


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
class HUAWEICLOUD_EVS_V2_EXPORT  ShowSnapshotGroupRequest
    : public ModelBase
{
public:
    ShowSnapshotGroupRequest();
    virtual ~ShowSnapshotGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSnapshotGroupRequest members

    /// <summary>
    /// **参数解释** 快照一致性组ID。 可通过[查询快照一致性组列表](ListSnapshotGroup.xml)接口获取快照一致性组ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotGroupId() const;
    bool snapshotGroupIdIsSet() const;
    void unsetsnapshotGroupId();
    void setSnapshotGroupId(const std::string& value);


protected:
    std::string snapshotGroupId_;
    bool snapshotGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSnapshotGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSnapshotGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotGroupRequest_H_
