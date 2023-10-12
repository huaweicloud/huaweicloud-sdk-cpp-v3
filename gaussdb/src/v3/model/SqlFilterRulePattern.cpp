

#include "huaweicloud/gaussdb/v3/model/SqlFilterRulePattern.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SqlFilterRulePattern::SqlFilterRulePattern()
{
    pattern_ = "";
    patternIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
}

SqlFilterRulePattern::~SqlFilterRulePattern() = default;

void SqlFilterRulePattern::validate()
{
}

web::json::value SqlFilterRulePattern::toJson() const
{
    web::json::value val = web::json::value::object();

    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }

    return val;
}
bool SqlFilterRulePattern::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    return ok;
}


std::string SqlFilterRulePattern::getPattern() const
{
    return pattern_;
}

void SqlFilterRulePattern::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool SqlFilterRulePattern::patternIsSet() const
{
    return patternIsSet_;
}

void SqlFilterRulePattern::unsetpattern()
{
    patternIsSet_ = false;
}

int32_t SqlFilterRulePattern::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void SqlFilterRulePattern::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool SqlFilterRulePattern::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void SqlFilterRulePattern::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

}
}
}
}
}


