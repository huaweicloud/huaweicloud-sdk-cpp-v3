
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowAlertPolicyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowAlertPolicyRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowAlertPolicyRequest
    : public ModelBase
{
public:
    ShowAlertPolicyRequest();
    virtual ~ShowAlertPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlertPolicyRequest members

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 告警策略ID
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAlertPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAlertPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowAlertPolicyRequest_H_
