
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateSecurityGroupRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSecurityGroupRequest
    : public ModelBase
{
public:
    CreateSecurityGroupRequest();
    virtual ~CreateSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecurityGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateSecurityGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSecurityGroupRequestBody& value);


protected:
    CreateSecurityGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSecurityGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSecurityGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequest_H_
