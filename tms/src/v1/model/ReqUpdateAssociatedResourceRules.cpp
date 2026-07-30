

#include "huaweicloud/tms/v1/model/ReqUpdateAssociatedResourceRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqUpdateAssociatedResourceRules::ReqUpdateAssociatedResourceRules()
{
    rulesIsSet_ = false;
}

ReqUpdateAssociatedResourceRules::~ReqUpdateAssociatedResourceRules() = default;

void ReqUpdateAssociatedResourceRules::validate()
{
}

web::json::value ReqUpdateAssociatedResourceRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool ReqUpdateAssociatedResourceRules::fromJson(const web::json::value& val)
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


std::vector<ReqAssociatedResourceRule>& ReqUpdateAssociatedResourceRules::getRules()
{
    return rules_;
}

void ReqUpdateAssociatedResourceRules::setRules(const std::vector<ReqAssociatedResourceRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ReqUpdateAssociatedResourceRules::rulesIsSet() const
{
    return rulesIsSet_;
}

void ReqUpdateAssociatedResourceRules::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


