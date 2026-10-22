
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateAutoSnapshotPolicyRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateAutoSnapshotPolicyRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/UpdateSnapshotPolicyRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateAutoSnapshotPolicyRequest
    : public ModelBase
{
public:
    UpdateAutoSnapshotPolicyRequest();
    virtual ~UpdateAutoSnapshotPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAutoSnapshotPolicyRequest members

    /// <summary>
    /// 自动快照策略ID。
    /// </summary>

    std::string getSnapshotPolicyId() const;
    bool snapshotPolicyIdIsSet() const;
    void unsetsnapshotPolicyId();
    void setSnapshotPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSnapshotPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSnapshotPolicyRequestBody& value);


protected:
    std::string snapshotPolicyId_;
    bool snapshotPolicyIdIsSet_;
    UpdateSnapshotPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAutoSnapshotPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAutoSnapshotPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateAutoSnapshotPolicyRequest_H_
