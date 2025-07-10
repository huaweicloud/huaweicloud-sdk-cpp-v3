

#include "huaweicloud/rgc/v1/model/ListConfigRuleCompliancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListConfigRuleCompliancesResponse::ListConfigRuleCompliancesResponse()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    configRuleCompliancesIsSet_ = false;
}

ListConfigRuleCompliancesResponse::~ListConfigRuleCompliancesResponse() = default;

void ListConfigRuleCompliancesResponse::validate()
{
}

web::json::value ListConfigRuleCompliancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(configRuleCompliancesIsSet_) {
        val[utility::conversions::to_string_t("config_rule_compliances")] = ModelBase::toJson(configRuleCompliances_);
    }

    return val;
}
bool ListConfigRuleCompliancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_rule_compliances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_rule_compliances"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigRuleCompliance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigRuleCompliances(refVal);
        }
    }
    return ok;
}


std::string ListConfigRuleCompliancesResponse::getAccountId() const
{
    return accountId_;
}

void ListConfigRuleCompliancesResponse::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListConfigRuleCompliancesResponse::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListConfigRuleCompliancesResponse::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::vector<ConfigRuleCompliance>& ListConfigRuleCompliancesResponse::getConfigRuleCompliances()
{
    return configRuleCompliances_;
}

void ListConfigRuleCompliancesResponse::setConfigRuleCompliances(const std::vector<ConfigRuleCompliance>& value)
{
    configRuleCompliances_ = value;
    configRuleCompliancesIsSet_ = true;
}

bool ListConfigRuleCompliancesResponse::configRuleCompliancesIsSet() const
{
    return configRuleCompliancesIsSet_;
}

void ListConfigRuleCompliancesResponse::unsetconfigRuleCompliances()
{
    configRuleCompliancesIsSet_ = false;
}

}
}
}
}
}


