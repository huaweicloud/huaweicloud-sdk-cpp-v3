
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateFirewallGroupRequest
    : public ModelBase
{
public:
    NeutronCreateFirewallGroupRequest();
    virtual ~NeutronCreateFirewallGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreateFirewallGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateFirewallGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateFirewallGroupRequestBody& value);


protected:
    NeutronCreateFirewallGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateFirewallGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateFirewallGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateFirewallGroupRequest_H_
