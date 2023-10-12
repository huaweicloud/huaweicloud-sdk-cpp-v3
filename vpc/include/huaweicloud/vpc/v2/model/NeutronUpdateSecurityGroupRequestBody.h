
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateSecurityGroupRequestBody
    : public ModelBase
{
public:
    NeutronUpdateSecurityGroupRequestBody();
    virtual ~NeutronUpdateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateSecurityGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateSecurityGroupOption getSecurityGroup() const;
    bool securityGroupIsSet() const;
    void unsetsecurityGroup();
    void setSecurityGroup(const NeutronUpdateSecurityGroupOption& value);


protected:
    NeutronUpdateSecurityGroupOption securityGroup_;
    bool securityGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateSecurityGroupRequestBody_H_
