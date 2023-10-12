
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronFirewallPolicy_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronFirewallPolicy_H_


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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronFirewallPolicy
    : public ModelBase
{
public:
    NeutronFirewallPolicy();
    virtual ~NeutronFirewallPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronFirewallPolicy members

    /// <summary>
    /// 审计标记。
    /// </summary>

    bool isAudited() const;
    bool auditedIsSet() const;
    void unsetaudited();
    void setAudited(bool value);

    /// <summary>
    /// 网络ACL防火墙策略描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 策略引用的网络ACL防火墙规则链。
    /// </summary>

    std::vector<std::string>& getFirewallRules();
    bool firewallRulesIsSet() const;
    void unsetfirewallRules();
    void setFirewallRules(const std::vector<std::string>& value);

    /// <summary>
    /// 网络ACL防火墙策略uuid标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 网络ACL防火墙策略名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否支持跨租户共享。
    /// </summary>

    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    bool audited_;
    bool auditedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> firewallRules_;
    bool firewallRulesIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronFirewallPolicy_H_
