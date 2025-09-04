

#include "huaweicloud/iotda/v5/model/ListSecurityProfilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListSecurityProfilesResponse::ListSecurityProfilesResponse()
{
    securityProfilesIsSet_ = false;
    pageIsSet_ = false;
}

ListSecurityProfilesResponse::~ListSecurityProfilesResponse() = default;

void ListSecurityProfilesResponse::validate()
{
}

web::json::value ListSecurityProfilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityProfilesIsSet_) {
        val[utility::conversions::to_string_t("security_profiles")] = ModelBase::toJson(securityProfiles_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListSecurityProfilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_profiles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_profiles"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityProfileDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityProfiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<SecurityProfileDTO>& ListSecurityProfilesResponse::getSecurityProfiles()
{
    return securityProfiles_;
}

void ListSecurityProfilesResponse::setSecurityProfiles(const std::vector<SecurityProfileDTO>& value)
{
    securityProfiles_ = value;
    securityProfilesIsSet_ = true;
}

bool ListSecurityProfilesResponse::securityProfilesIsSet() const
{
    return securityProfilesIsSet_;
}

void ListSecurityProfilesResponse::unsetsecurityProfiles()
{
    securityProfilesIsSet_ = false;
}

Page ListSecurityProfilesResponse::getPage() const
{
    return page_;
}

void ListSecurityProfilesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListSecurityProfilesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListSecurityProfilesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


