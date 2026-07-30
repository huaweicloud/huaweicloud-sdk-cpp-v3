

#include "huaweicloud/tms/v1/model/ListAssociatedResourceRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListAssociatedResourceRulesResponse::ListAssociatedResourceRulesResponse()
{
    rulesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAssociatedResourceRulesResponse::~ListAssociatedResourceRulesResponse() = default;

void ListAssociatedResourceRulesResponse::validate()
{
}

web::json::value ListAssociatedResourceRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAssociatedResourceRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociatedResourceRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<AssociatedResourceRule>& ListAssociatedResourceRulesResponse::getRules()
{
    return rules_;
}

void ListAssociatedResourceRulesResponse::setRules(const std::vector<AssociatedResourceRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListAssociatedResourceRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListAssociatedResourceRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListAssociatedResourceRulesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAssociatedResourceRulesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAssociatedResourceRulesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAssociatedResourceRulesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

PageInfo ListAssociatedResourceRulesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAssociatedResourceRulesResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAssociatedResourceRulesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAssociatedResourceRulesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


