
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronInsertFirewallRuleRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronInsertFirewallRuleRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronInsertFirewallRuleRequestBody
    : public ModelBase
{
public:
    NeutronInsertFirewallRuleRequestBody();
    virtual ~NeutronInsertFirewallRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronInsertFirewallRuleRequestBody members

    /// <summary>
    /// 功能说明：网络ACL规则ID
    /// </summary>

    std::string getFirewallRuleId() const;
    bool firewallRuleIdIsSet() const;
    void unsetfirewallRuleId();
    void setFirewallRuleId(const std::string& value);

    /// <summary>
    /// insert_after参数表示已经和某个policy关联的rule，新的rule将会直接被插入到insert_after参数指定的rule后面。如果insert_after和insert_before都被指定了，insert_after参数值将被忽略。
    /// </summary>

    std::string getInsertAfter() const;
    bool insertAfterIsSet() const;
    void unsetinsertAfter();
    void setInsertAfter(const std::string& value);

    /// <summary>
    /// insert_before参数表示已经和某个policy关联的rule，新的firewall rule将会直接被插入到insert_ before参数指定的firewall rule前面。如果insert_after和insert_before都被指定了，insert_after参数值将被忽略。
    /// </summary>

    std::string getInsertBefore() const;
    bool insertBeforeIsSet() const;
    void unsetinsertBefore();
    void setInsertBefore(const std::string& value);


protected:
    std::string firewallRuleId_;
    bool firewallRuleIdIsSet_;
    std::string insertAfter_;
    bool insertAfterIsSet_;
    std::string insertBefore_;
    bool insertBeforeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronInsertFirewallRuleRequestBody_H_
