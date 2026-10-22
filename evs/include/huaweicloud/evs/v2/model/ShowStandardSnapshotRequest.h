
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowStandardSnapshotRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowStandardSnapshotRequest_H_


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
class HUAWEICLOUD_EVS_V2_EXPORT  ShowStandardSnapshotRequest
    : public ModelBase
{
public:
    ShowStandardSnapshotRequest();
    virtual ~ShowStandardSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStandardSnapshotRequest members

    /// <summary>
    /// **参数解释** 快照ID。 可通过[查询云硬盘快照详情列表](evs_04_2021.xml)接口获取云硬盘快照ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowStandardSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<ShowStandardSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowStandardSnapshotRequest_H_
