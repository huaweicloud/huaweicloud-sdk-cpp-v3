
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAccessPolicyRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAccessPolicyRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteAccessPolicyRequest
    : public ModelBase
{
public:
    DeleteAccessPolicyRequest();
    virtual ~DeleteAccessPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAccessPolicyRequest members

    /// <summary>
    /// **参数解释：** 访问策略ID。获取方式请参见[获取访问策略列表](ListAccessPolicy.xml)。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAccessPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAccessPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteAccessPolicyRequest_H_
