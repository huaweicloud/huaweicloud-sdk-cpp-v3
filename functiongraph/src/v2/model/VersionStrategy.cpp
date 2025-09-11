

#include "huaweicloud/functiongraph/v2/model/VersionStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




VersionStrategy::VersionStrategy()
{
    rulesIsSet_ = false;
    combineType_ = "";
    combineTypeIsSet_ = false;
}

VersionStrategy::~VersionStrategy() = default;

void VersionStrategy::validate()
{
}

web::json::value VersionStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(combineTypeIsSet_) {
        val[utility::conversions::to_string_t("combine_type")] = ModelBase::toJson(combineType_);
    }

    return val;
}
bool VersionStrategy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<VersionStrategyRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("combine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("combine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCombineType(refVal);
        }
    }
    return ok;
}


std::vector<VersionStrategyRules>& VersionStrategy::getRules()
{
    return rules_;
}

void VersionStrategy::setRules(const std::vector<VersionStrategyRules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool VersionStrategy::rulesIsSet() const
{
    return rulesIsSet_;
}

void VersionStrategy::unsetrules()
{
    rulesIsSet_ = false;
}

std::string VersionStrategy::getCombineType() const
{
    return combineType_;
}

void VersionStrategy::setCombineType(const std::string& value)
{
    combineType_ = value;
    combineTypeIsSet_ = true;
}

bool VersionStrategy::combineTypeIsSet() const
{
    return combineTypeIsSet_;
}

void VersionStrategy::unsetcombineType()
{
    combineTypeIsSet_ = false;
}

}
}
}
}
}


