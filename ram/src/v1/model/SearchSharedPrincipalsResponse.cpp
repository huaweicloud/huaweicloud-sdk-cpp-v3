

#include "huaweicloud/ram/v1/model/SearchSharedPrincipalsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchSharedPrincipalsResponse::SearchSharedPrincipalsResponse()
{
    sharedPrincipalsIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchSharedPrincipalsResponse::~SearchSharedPrincipalsResponse() = default;

void SearchSharedPrincipalsResponse::validate()
{
}

web::json::value SearchSharedPrincipalsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sharedPrincipalsIsSet_) {
        val[utility::conversions::to_string_t("shared_principals")] = ModelBase::toJson(sharedPrincipals_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchSharedPrincipalsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shared_principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_principals"));
        if(!fieldValue.is_null())
        {
            std::vector<SharedPrincipal> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedPrincipals(refVal);
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


std::vector<SharedPrincipal>& SearchSharedPrincipalsResponse::getSharedPrincipals()
{
    return sharedPrincipals_;
}

void SearchSharedPrincipalsResponse::setSharedPrincipals(const std::vector<SharedPrincipal>& value)
{
    sharedPrincipals_ = value;
    sharedPrincipalsIsSet_ = true;
}

bool SearchSharedPrincipalsResponse::sharedPrincipalsIsSet() const
{
    return sharedPrincipalsIsSet_;
}

void SearchSharedPrincipalsResponse::unsetsharedPrincipals()
{
    sharedPrincipalsIsSet_ = false;
}

PageInfo SearchSharedPrincipalsResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchSharedPrincipalsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchSharedPrincipalsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchSharedPrincipalsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


