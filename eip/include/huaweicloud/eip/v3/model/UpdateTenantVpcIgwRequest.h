
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdateTenantVpcIgwRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdateTenantVpcIgwRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/UpdateTenantVpcIgwRequestBody.h>
#include <string>

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
class HUAWEICLOUD_EIP_V3_EXPORT  UpdateTenantVpcIgwRequest
    : public ModelBase
{
public:
    UpdateTenantVpcIgwRequest();
    virtual ~UpdateTenantVpcIgwRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTenantVpcIgwRequest members

    /// <summary>
    /// 形式为\\\&quot;fields&#x3D;id&amp;fields&#x3D;project_id&amp;...\\\&quot;，支持字段：id/project_id/vpc_id/created_at/updated_at/name
    /// </summary>

    std::string getFields() const;
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::string& value);

    /// <summary>
    /// vpc-igw的uuid
    /// </summary>

    std::string getVpcIgwId() const;
    bool vpcIgwIdIsSet() const;
    void unsetvpcIgwId();
    void setVpcIgwId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateTenantVpcIgwRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateTenantVpcIgwRequestBody& value);


protected:
    std::string fields_;
    bool fieldsIsSet_;
    std::string vpcIgwId_;
    bool vpcIgwIdIsSet_;
    UpdateTenantVpcIgwRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTenantVpcIgwRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTenantVpcIgwRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdateTenantVpcIgwRequest_H_
