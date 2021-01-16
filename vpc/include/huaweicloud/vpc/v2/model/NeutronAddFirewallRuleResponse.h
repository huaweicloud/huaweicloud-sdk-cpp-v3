
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronAddFirewallRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronAddFirewallRuleResponse();
    virtual ~NeutronAddFirewallRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronAddFirewallRuleResponse members

    /// <summary>
    /// 功能说明：网络ACL策略ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL策略名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL策略的描述信息 取值范围：0-255个字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL策略关联的规则的ID列表
    /// </summary>

    std::vector<std::string>& getFirewallRules();
    bool firewallRulesIsSet() const;
    void unsetfirewallRules();
    void setFirewallRules(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：每次policy或者它相关的rule有变动，该参数将会被置为False
    /// </summary>

    bool isAudited() const;
    bool auditedIsSet() const;
    void unsetaudited();
    void setAudited(bool value);

    /// <summary>
    /// 功能说明：网络ACL策略是否对其他网络ACL策略可见 取值范围：true(可见)、false(不可见)
    /// </summary>

    bool isPublic() const;
    bool publicIsSet() const;
    void unsetpublic();
    void setPublic(bool value);

    /// <summary>
    /// 功能说明：网络ACL策略所属项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL策略所属项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> firewallRules_;
    bool firewallRulesIsSet_;
    bool audited_;
    bool auditedIsSet_;
    bool public_;
    bool publicIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronAddFirewallRuleResponse_H_
