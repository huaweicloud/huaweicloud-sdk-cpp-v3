

#include "huaweicloud/gaussdb/v3/model/NodeSqlFilterRulePattern.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




NodeSqlFilterRulePattern::NodeSqlFilterRulePattern()
{
    pattern_ = "";
    patternIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
}

NodeSqlFilterRulePattern::~NodeSqlFilterRulePattern() = default;

void NodeSqlFilterRulePattern::validate()
{
}

web::json::value NodeSqlFilterRulePattern::toJson() const
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
bool NodeSqlFilterRulePattern::fromJson(const web::json::value& val)
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


std::string NodeSqlFilterRulePattern::getPattern() const
{
    return pattern_;
}

void NodeSqlFilterRulePattern::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool NodeSqlFilterRulePattern::patternIsSet() const
{
    return patternIsSet_;
}

void NodeSqlFilterRulePattern::unsetpattern()
{
    patternIsSet_ = false;
}

int32_t NodeSqlFilterRulePattern::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void NodeSqlFilterRulePattern::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool NodeSqlFilterRulePattern::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void NodeSqlFilterRulePattern::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

}
}
}
}
}


