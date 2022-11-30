
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupsResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupsResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <vector>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListSecurityGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListSecurityGroupsResponse();
    virtual ~NeutronListSecurityGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListSecurityGroupsResponse members

    /// <summary>
    /// 安全组对象列表
    /// </summary>

    std::vector<NeutronSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NeutronSecurityGroup>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getSecurityGroupsLinks();
    bool securityGroupsLinksIsSet() const;
    void unsetsecurityGroupsLinks();
    void setSecurityGroupsLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<NeutronPageLink> securityGroupsLinks_;
    bool securityGroupsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupsResponse_H_
