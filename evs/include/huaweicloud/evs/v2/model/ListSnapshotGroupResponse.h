
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotGroupResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotGroupResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SnapshotGroupDetail.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSnapshotGroupResponse();
    virtual ~ListSnapshotGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotGroupResponse members

    /// <summary>
    /// **参数解释** 快照一致性组列表信息。 **取值范围** 不涉及。
    /// </summary>

    std::vector<SnapshotGroupDetail>& getSnapshotGroups();
    bool snapshotGroupsIsSet() const;
    void unsetsnapshotGroups();
    void setSnapshotGroups(const std::vector<SnapshotGroupDetail>& value);


protected:
    std::vector<SnapshotGroupDetail> snapshotGroups_;
    bool snapshotGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotGroupResponse_H_
