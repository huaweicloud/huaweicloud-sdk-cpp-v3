
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/eip/v3/model/CreateTenantVpcIgwRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  CreateTenantVpcIgwRequest
    : public ModelBase
{
public:
    CreateTenantVpcIgwRequest();
    virtual ~CreateTenantVpcIgwRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTenantVpcIgwRequest members

    /// <summary>
    /// 形式为\\\&quot;fields&#x3D;id&amp;fields&#x3D;project_id&amp;...\\\&quot;，支持字段：id/project_id/vpc_id/created_at/updated_at/name
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTenantVpcIgwRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTenantVpcIgwRequestBody& value);


protected:
    std::vector<std::string> fields_;
    bool fieldsIsSet_;
    CreateTenantVpcIgwRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTenantVpcIgwRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTenantVpcIgwRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequest_H_
