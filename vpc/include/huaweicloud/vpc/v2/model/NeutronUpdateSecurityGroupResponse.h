
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronSecurityGroup.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateSecurityGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronUpdateSecurityGroupResponse();
    virtual ~NeutronUpdateSecurityGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateSecurityGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    NeutronSecurityGroup getSecurityGroup() const;
    bool securityGroupIsSet() const;
    void unsetsecurityGroup();
    void setSecurityGroup(const NeutronSecurityGroup& value);


protected:
    NeutronSecurityGroup securityGroup_;
    bool securityGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupResponse_H_
