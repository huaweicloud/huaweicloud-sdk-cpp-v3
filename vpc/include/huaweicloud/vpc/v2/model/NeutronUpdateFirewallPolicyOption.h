
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyOption_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallPolicyOption
    : public ModelBase
{
public:
    NeutronUpdateFirewallPolicyOption();
    virtual ~NeutronUpdateFirewallPolicyOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronUpdateFirewallPolicyOption members

    /// <summary>
    /// 功能说明：网络ACL防火墙策略名称 取值范围：最长255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL防火墙策略描述 取值范围：最长255个字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL策略关联的规则列表
    /// </summary>

    std::vector<std::string>& getFirewallRules();
    bool firewallRulesIsSet() const;
    void unsetfirewallRules();
    void setFirewallRules(const std::vector<std::string>& value);

    /// <summary>
    /// 审计标记。
    /// </summary>

    bool isAudited() const;
    bool auditedIsSet() const;
    void unsetaudited();
    void setAudited(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> firewallRules_;
    bool firewallRulesIsSet_;
    bool audited_;
    bool auditedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallPolicyOption_H_
