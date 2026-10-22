
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackStandardSnapshotRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackStandardSnapshotRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/RollbackSnapshotRequestBodyV5.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  RollbackStandardSnapshotRequest
    : public ModelBase
{
public:
    RollbackStandardSnapshotRequest();
    virtual ~RollbackStandardSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollbackStandardSnapshotRequest members

    /// <summary>
    /// **参数解释** 快照ID。 可通过[查询云硬盘快照详情列表](evs_04_2021.xml)接口获取云硬盘快照ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RollbackSnapshotRequestBodyV5 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RollbackSnapshotRequestBodyV5& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    RollbackSnapshotRequestBodyV5 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RollbackStandardSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<RollbackStandardSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackStandardSnapshotRequest_H_
