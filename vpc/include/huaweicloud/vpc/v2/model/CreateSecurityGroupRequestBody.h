
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/CreateSecurityGroupOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSecurityGroupRequestBody
    : public ModelBase
{
public:
    CreateSecurityGroupRequestBody();
    virtual ~CreateSecurityGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecurityGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateSecurityGroupOption getSecurityGroup() const;
    bool securityGroupIsSet() const;
    void unsetsecurityGroup();
    void setSecurityGroup(const CreateSecurityGroupOption& value);


protected:
    CreateSecurityGroupOption securityGroup_;
    bool securityGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSecurityGroupRequestBody_H_
