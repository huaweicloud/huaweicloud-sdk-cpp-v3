
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsResponse_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/SecurityGroup.h>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  ListSecurityGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecurityGroupsResponse();
    virtual ~ListSecurityGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSecurityGroupsResponse members

    /// <summary>
    /// 安全组列表对象
    /// </summary>

    std::vector<SecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<SecurityGroup>& value);


protected:
    std::vector<SecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsResponse_H_
