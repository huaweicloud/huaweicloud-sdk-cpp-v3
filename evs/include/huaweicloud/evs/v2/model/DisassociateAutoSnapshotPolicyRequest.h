
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_DisassociateAutoSnapshotPolicyRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_DisassociateAutoSnapshotPolicyRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_EVS_V2_EXPORT  DisassociateAutoSnapshotPolicyRequest
    : public ModelBase
{
public:
    DisassociateAutoSnapshotPolicyRequest();
    virtual ~DisassociateAutoSnapshotPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateAutoSnapshotPolicyRequest members

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

    std::vector<std::string>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<std::string>& value);


protected:
    std::string snapshotPolicyId_;
    bool snapshotPolicyIdIsSet_;
    std::vector<std::string> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateAutoSnapshotPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateAutoSnapshotPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_DisassociateAutoSnapshotPolicyRequest_H_
