

#include "huaweicloud/cts/v3/model/Filter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




Filter::Filter()
{
    condition_ = "";
    conditionIsSet_ = false;
    isSupportFilter_ = false;
    isSupportFilterIsSet_ = false;
    ruleIsSet_ = false;
}

Filter::~Filter() = default;

void Filter::validate()
{
}

web::json::value Filter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(isSupportFilterIsSet_) {
        val[utility::conversions::to_string_t("is_support_filter")] = ModelBase::toJson(isSupportFilter_);
    }
    if(ruleIsSet_) {
        val[utility::conversions::to_string_t("rule")] = ModelBase::toJson(rule_);
    }

    return val;
}
bool Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_filter"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRule(refVal);
        }
    }
    return ok;
}


std::string Filter::getCondition() const
{
    return condition_;
}

void Filter::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool Filter::conditionIsSet() const
{
    return conditionIsSet_;
}

void Filter::unsetcondition()
{
    conditionIsSet_ = false;
}

bool Filter::isIsSupportFilter() const
{
    return isSupportFilter_;
}

void Filter::setIsSupportFilter(bool value)
{
    isSupportFilter_ = value;
    isSupportFilterIsSet_ = true;
}

bool Filter::isSupportFilterIsSet() const
{
    return isSupportFilterIsSet_;
}

void Filter::unsetisSupportFilter()
{
    isSupportFilterIsSet_ = false;
}

std::vector<std::string>& Filter::getRule()
{
    return rule_;
}

void Filter::setRule(const std::vector<std::string>& value)
{
    rule_ = value;
    ruleIsSet_ = true;
}

bool Filter::ruleIsSet() const
{
    return ruleIsSet_;
}

void Filter::unsetrule()
{
    ruleIsSet_ = false;
}

}
}
}
}
}


