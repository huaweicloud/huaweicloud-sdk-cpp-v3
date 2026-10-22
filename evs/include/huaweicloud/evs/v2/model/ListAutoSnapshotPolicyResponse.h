
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListAutoSnapshotPolicyResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListAutoSnapshotPolicyResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/GetSnapshotPolicy.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  ListAutoSnapshotPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutoSnapshotPolicyResponse();
    virtual ~ListAutoSnapshotPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutoSnapshotPolicyResponse members

    /// <summary>
    /// 查询的自动快照策略列表信息。
    /// </summary>

    std::vector<GetSnapshotPolicy>& getSnapshotPolicies();
    bool snapshotPoliciesIsSet() const;
    void unsetsnapshotPolicies();
    void setSnapshotPolicies(const std::vector<GetSnapshotPolicy>& value);


protected:
    std::vector<GetSnapshotPolicy> snapshotPolicies_;
    bool snapshotPoliciesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListAutoSnapshotPolicyResponse_H_
