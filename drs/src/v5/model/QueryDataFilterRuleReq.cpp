

#include "huaweicloud/drs/v5/model/QueryDataFilterRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDataFilterRuleReq::QueryDataFilterRuleReq()
{
    filterType_ = "";
    filterTypeIsSet_ = false;
    isAllRules_ = false;
    isAllRulesIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

QueryDataFilterRuleReq::~QueryDataFilterRuleReq() = default;

void QueryDataFilterRuleReq::validate()
{
}

web::json::value QueryDataFilterRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterTypeIsSet_) {
        val[utility::conversions::to_string_t("filter_type")] = ModelBase::toJson(filterType_);
    }
    if(isAllRulesIsSet_) {
        val[utility::conversions::to_string_t("is_all_rules")] = ModelBase::toJson(isAllRules_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool QueryDataFilterRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_all_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_all_rules"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAllRules(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string QueryDataFilterRuleReq::getFilterType() const
{
    return filterType_;
}

void QueryDataFilterRuleReq::setFilterType(const std::string& value)
{
    filterType_ = value;
    filterTypeIsSet_ = true;
}

bool QueryDataFilterRuleReq::filterTypeIsSet() const
{
    return filterTypeIsSet_;
}

void QueryDataFilterRuleReq::unsetfilterType()
{
    filterTypeIsSet_ = false;
}

bool QueryDataFilterRuleReq::isIsAllRules() const
{
    return isAllRules_;
}

void QueryDataFilterRuleReq::setIsAllRules(bool value)
{
    isAllRules_ = value;
    isAllRulesIsSet_ = true;
}

bool QueryDataFilterRuleReq::isAllRulesIsSet() const
{
    return isAllRulesIsSet_;
}

void QueryDataFilterRuleReq::unsetisAllRules()
{
    isAllRulesIsSet_ = false;
}

int32_t QueryDataFilterRuleReq::getLimit() const
{
    return limit_;
}

void QueryDataFilterRuleReq::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QueryDataFilterRuleReq::limitIsSet() const
{
    return limitIsSet_;
}

void QueryDataFilterRuleReq::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QueryDataFilterRuleReq::getOffset() const
{
    return offset_;
}

void QueryDataFilterRuleReq::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QueryDataFilterRuleReq::offsetIsSet() const
{
    return offsetIsSet_;
}

void QueryDataFilterRuleReq::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


