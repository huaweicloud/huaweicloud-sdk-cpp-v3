

#include "huaweicloud/tms/v1/model/ReqCreateAssociatedResourceRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqCreateAssociatedResourceRules::ReqCreateAssociatedResourceRules()
{
    rulesIsSet_ = false;
}

ReqCreateAssociatedResourceRules::~ReqCreateAssociatedResourceRules() = default;

void ReqCreateAssociatedResourceRules::validate()
{
}

web::json::value ReqCreateAssociatedResourceRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool ReqCreateAssociatedResourceRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<ReqAssociatedResourceRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::vector<ReqAssociatedResourceRule>& ReqCreateAssociatedResourceRules::getRules()
{
    return rules_;
}

void ReqCreateAssociatedResourceRules::setRules(const std::vector<ReqAssociatedResourceRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ReqCreateAssociatedResourceRules::rulesIsSet() const
{
    return rulesIsSet_;
}

void ReqCreateAssociatedResourceRules::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


