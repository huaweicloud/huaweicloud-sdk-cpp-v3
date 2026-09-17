
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateAlertPolicyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateAlertPolicyRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/AlertPolicyDTO.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CreateAlertPolicyRequest
    : public ModelBase
{
public:
    CreateAlertPolicyRequest();
    virtual ~CreateAlertPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAlertPolicyRequest members

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AlertPolicyDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AlertPolicyDTO& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    AlertPolicyDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAlertPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAlertPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateAlertPolicyRequest_H_
