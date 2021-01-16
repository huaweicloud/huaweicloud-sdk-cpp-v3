

#include "huaweicloud/vpc/v2/model/NeutronInsertFirewallRuleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronInsertFirewallRuleRequestBody::NeutronInsertFirewallRuleRequestBody()
{
    firewallRuleId_ = "";
    firewallRuleIdIsSet_ = false;
    insertAfter_ = "";
    insertAfterIsSet_ = false;
    insertBefore_ = "";
    insertBeforeIsSet_ = false;
}

NeutronInsertFirewallRuleRequestBody::~NeutronInsertFirewallRuleRequestBody() = default;

void NeutronInsertFirewallRuleRequestBody::validate()
{
}

web::json::value NeutronInsertFirewallRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firewallRuleIdIsSet_) {
        val[utility::conversions::to_string_t("firewall_rule_id")] = ModelBase::toJson(firewallRuleId_);
    }
    if(insertAfterIsSet_) {
        val[utility::conversions::to_string_t("insert_after")] = ModelBase::toJson(insertAfter_);
    }
    if(insertBeforeIsSet_) {
        val[utility::conversions::to_string_t("insert_before")] = ModelBase::toJson(insertBefore_);
    }

    return val;
}

bool NeutronInsertFirewallRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firewall_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_after"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_before"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertBefore(refVal);
        }
    }
    return ok;
}


std::string NeutronInsertFirewallRuleRequestBody::getFirewallRuleId() const
{
    return firewallRuleId_;
}

void NeutronInsertFirewallRuleRequestBody::setFirewallRuleId(const std::string& value)
{
    firewallRuleId_ = value;
    firewallRuleIdIsSet_ = true;
}

bool NeutronInsertFirewallRuleRequestBody::firewallRuleIdIsSet() const
{
    return firewallRuleIdIsSet_;
}

void NeutronInsertFirewallRuleRequestBody::unsetfirewallRuleId()
{
    firewallRuleIdIsSet_ = false;
}

std::string NeutronInsertFirewallRuleRequestBody::getInsertAfter() const
{
    return insertAfter_;
}

void NeutronInsertFirewallRuleRequestBody::setInsertAfter(const std::string& value)
{
    insertAfter_ = value;
    insertAfterIsSet_ = true;
}

bool NeutronInsertFirewallRuleRequestBody::insertAfterIsSet() const
{
    return insertAfterIsSet_;
}

void NeutronInsertFirewallRuleRequestBody::unsetinsertAfter()
{
    insertAfterIsSet_ = false;
}

std::string NeutronInsertFirewallRuleRequestBody::getInsertBefore() const
{
    return insertBefore_;
}

void NeutronInsertFirewallRuleRequestBody::setInsertBefore(const std::string& value)
{
    insertBefore_ = value;
    insertBeforeIsSet_ = true;
}

bool NeutronInsertFirewallRuleRequestBody::insertBeforeIsSet() const
{
    return insertBeforeIsSet_;
}

void NeutronInsertFirewallRuleRequestBody::unsetinsertBefore()
{
    insertBeforeIsSet_ = false;
}

}
}
}
}
}


