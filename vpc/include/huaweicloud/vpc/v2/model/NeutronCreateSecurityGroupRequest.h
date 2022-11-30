
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateSecurityGroupRequest
    : public ModelBase
{
public:
    NeutronCreateSecurityGroupRequest();
    virtual ~NeutronCreateSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateSecurityGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateSecurityGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateSecurityGroupRequestBody& value);


protected:
    NeutronCreateSecurityGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateSecurityGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateSecurityGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSecurityGroupRequest_H_
