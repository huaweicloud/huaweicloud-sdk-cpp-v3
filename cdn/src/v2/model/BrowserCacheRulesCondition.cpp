

#include "huaweicloud/cdn/v2/model/BrowserCacheRulesCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BrowserCacheRulesCondition::BrowserCacheRulesCondition()
{
    matchType_ = "";
    matchTypeIsSet_ = false;
    matchValue_ = "";
    matchValueIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
}

BrowserCacheRulesCondition::~BrowserCacheRulesCondition() = default;

void BrowserCacheRulesCondition::validate()
{
}

web::json::value BrowserCacheRulesCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(matchValueIsSet_) {
        val[utility::conversions::to_string_t("match_value")] = ModelBase::toJson(matchValue_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}
bool BrowserCacheRulesCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}


std::string BrowserCacheRulesCondition::getMatchType() const
{
    return matchType_;
}

void BrowserCacheRulesCondition::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool BrowserCacheRulesCondition::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void BrowserCacheRulesCondition::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::string BrowserCacheRulesCondition::getMatchValue() const
{
    return matchValue_;
}

void BrowserCacheRulesCondition::setMatchValue(const std::string& value)
{
    matchValue_ = value;
    matchValueIsSet_ = true;
}

bool BrowserCacheRulesCondition::matchValueIsSet() const
{
    return matchValueIsSet_;
}

void BrowserCacheRulesCondition::unsetmatchValue()
{
    matchValueIsSet_ = false;
}

int32_t BrowserCacheRulesCondition::getPriority() const
{
    return priority_;
}

void BrowserCacheRulesCondition::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool BrowserCacheRulesCondition::priorityIsSet() const
{
    return priorityIsSet_;
}

void BrowserCacheRulesCondition::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


