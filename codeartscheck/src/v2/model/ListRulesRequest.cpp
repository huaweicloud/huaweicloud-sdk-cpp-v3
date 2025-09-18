

#include "huaweicloud/codeartscheck/v2/model/ListRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListRulesRequest::ListRulesRequest()
{
    ruleLanguages_ = "";
    ruleLanguagesIsSet_ = false;
    ruleSeverity_ = "";
    ruleSeverityIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRulesRequest::~ListRulesRequest() = default;

void ListRulesRequest::validate()
{
}

web::json::value ListRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleLanguagesIsSet_) {
        val[utility::conversions::to_string_t("rule_languages")] = ModelBase::toJson(ruleLanguages_);
    }
    if(ruleSeverityIsSet_) {
        val[utility::conversions::to_string_t("rule_severity")] = ModelBase::toJson(ruleSeverity_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_languages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_languages"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleLanguages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListRulesRequest::getRuleLanguages() const
{
    return ruleLanguages_;
}

void ListRulesRequest::setRuleLanguages(const std::string& value)
{
    ruleLanguages_ = value;
    ruleLanguagesIsSet_ = true;
}

bool ListRulesRequest::ruleLanguagesIsSet() const
{
    return ruleLanguagesIsSet_;
}

void ListRulesRequest::unsetruleLanguages()
{
    ruleLanguagesIsSet_ = false;
}

std::string ListRulesRequest::getRuleSeverity() const
{
    return ruleSeverity_;
}

void ListRulesRequest::setRuleSeverity(const std::string& value)
{
    ruleSeverity_ = value;
    ruleSeverityIsSet_ = true;
}

bool ListRulesRequest::ruleSeverityIsSet() const
{
    return ruleSeverityIsSet_;
}

void ListRulesRequest::unsetruleSeverity()
{
    ruleSeverityIsSet_ = false;
}

int32_t ListRulesRequest::getOffset() const
{
    return offset_;
}

void ListRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRulesRequest::getLimit() const
{
    return limit_;
}

void ListRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


