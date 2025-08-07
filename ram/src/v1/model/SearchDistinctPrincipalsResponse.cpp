

#include "huaweicloud/ram/v1/model/SearchDistinctPrincipalsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchDistinctPrincipalsResponse::SearchDistinctPrincipalsResponse()
{
    distinctSharedPrincipalsIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchDistinctPrincipalsResponse::~SearchDistinctPrincipalsResponse() = default;

void SearchDistinctPrincipalsResponse::validate()
{
}

web::json::value SearchDistinctPrincipalsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(distinctSharedPrincipalsIsSet_) {
        val[utility::conversions::to_string_t("distinct_shared_principals")] = ModelBase::toJson(distinctSharedPrincipals_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchDistinctPrincipalsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("distinct_shared_principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distinct_shared_principals"));
        if(!fieldValue.is_null())
        {
            std::vector<DistinctSharedPrincipal> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistinctSharedPrincipals(refVal);
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


std::vector<DistinctSharedPrincipal>& SearchDistinctPrincipalsResponse::getDistinctSharedPrincipals()
{
    return distinctSharedPrincipals_;
}

void SearchDistinctPrincipalsResponse::setDistinctSharedPrincipals(const std::vector<DistinctSharedPrincipal>& value)
{
    distinctSharedPrincipals_ = value;
    distinctSharedPrincipalsIsSet_ = true;
}

bool SearchDistinctPrincipalsResponse::distinctSharedPrincipalsIsSet() const
{
    return distinctSharedPrincipalsIsSet_;
}

void SearchDistinctPrincipalsResponse::unsetdistinctSharedPrincipals()
{
    distinctSharedPrincipalsIsSet_ = false;
}

PageInfo SearchDistinctPrincipalsResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchDistinctPrincipalsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchDistinctPrincipalsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchDistinctPrincipalsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


