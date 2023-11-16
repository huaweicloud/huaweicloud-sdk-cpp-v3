

#include "huaweicloud/aad/v1/model/ListInstanceIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListInstanceIpRuleResponse::ListInstanceIpRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    rulesIsSet_ = false;
}

ListInstanceIpRuleResponse::~ListInstanceIpRuleResponse() = default;

void ListInstanceIpRuleResponse::validate()
{
}

web::json::value ListInstanceIpRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool ListInstanceIpRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<TransferRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


int32_t ListInstanceIpRuleResponse::getTotal() const
{
    return total_;
}

void ListInstanceIpRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInstanceIpRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInstanceIpRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TransferRuleInfo>& ListInstanceIpRuleResponse::getRules()
{
    return rules_;
}

void ListInstanceIpRuleResponse::setRules(const std::vector<TransferRuleInfo>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListInstanceIpRuleResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListInstanceIpRuleResponse::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


