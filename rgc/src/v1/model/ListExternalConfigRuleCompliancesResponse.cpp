

#include "huaweicloud/rgc/v1/model/ListExternalConfigRuleCompliancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListExternalConfigRuleCompliancesResponse::ListExternalConfigRuleCompliancesResponse()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    configRuleCompliancesIsSet_ = false;
}

ListExternalConfigRuleCompliancesResponse::~ListExternalConfigRuleCompliancesResponse() = default;

void ListExternalConfigRuleCompliancesResponse::validate()
{
}

web::json::value ListExternalConfigRuleCompliancesResponse::toJson() const
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
bool ListExternalConfigRuleCompliancesResponse::fromJson(const web::json::value& val)
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
            std::vector<ExternalConfigRuleCompliance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigRuleCompliances(refVal);
        }
    }
    return ok;
}


std::string ListExternalConfigRuleCompliancesResponse::getAccountId() const
{
    return accountId_;
}

void ListExternalConfigRuleCompliancesResponse::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListExternalConfigRuleCompliancesResponse::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListExternalConfigRuleCompliancesResponse::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::vector<ExternalConfigRuleCompliance>& ListExternalConfigRuleCompliancesResponse::getConfigRuleCompliances()
{
    return configRuleCompliances_;
}

void ListExternalConfigRuleCompliancesResponse::setConfigRuleCompliances(const std::vector<ExternalConfigRuleCompliance>& value)
{
    configRuleCompliances_ = value;
    configRuleCompliancesIsSet_ = true;
}

bool ListExternalConfigRuleCompliancesResponse::configRuleCompliancesIsSet() const
{
    return configRuleCompliancesIsSet_;
}

void ListExternalConfigRuleCompliancesResponse::unsetconfigRuleCompliances()
{
    configRuleCompliancesIsSet_ = false;
}

}
}
}
}
}


