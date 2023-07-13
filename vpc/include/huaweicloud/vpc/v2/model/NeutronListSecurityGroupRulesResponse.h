
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronSecurityGroupRule.h>
#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListSecurityGroupRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListSecurityGroupRulesResponse();
    virtual ~NeutronListSecurityGroupRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListSecurityGroupRulesResponse members

    /// <summary>
    /// 安全组规则对象列表
    /// </summary>

    std::vector<NeutronSecurityGroupRule>& getSecurityGroupRules();
    bool securityGroupRulesIsSet() const;
    void unsetsecurityGroupRules();
    void setSecurityGroupRules(const std::vector<NeutronSecurityGroupRule>& value);

    /// <summary>
    /// 分页信息
    /// </summary>

    std::vector<NeutronPageLink>& getSecurityGroupRulesLinks();
    bool securityGroupRulesLinksIsSet() const;
    void unsetsecurityGroupRulesLinks();
    void setSecurityGroupRulesLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::vector<NeutronSecurityGroupRule> securityGroupRules_;
    bool securityGroupRulesIsSet_;
    std::vector<NeutronPageLink> securityGroupRulesLinks_;
    bool securityGroupRulesLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListSecurityGroupRulesResponse_H_
