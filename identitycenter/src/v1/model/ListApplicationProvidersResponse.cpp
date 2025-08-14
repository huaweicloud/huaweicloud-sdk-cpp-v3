

#include "huaweicloud/identitycenter/v1/model/ListApplicationProvidersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationProvidersResponse::ListApplicationProvidersResponse()
{
    applicationProvidersIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListApplicationProvidersResponse::~ListApplicationProvidersResponse() = default;

void ListApplicationProvidersResponse::validate()
{
}

web::json::value ListApplicationProvidersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationProvidersIsSet_) {
        val[utility::conversions::to_string_t("application_providers")] = ModelBase::toJson(applicationProviders_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListApplicationProvidersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_providers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_providers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationProviderDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationProviders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ApplicationProviderDto>& ListApplicationProvidersResponse::getApplicationProviders()
{
    return applicationProviders_;
}

void ListApplicationProvidersResponse::setApplicationProviders(const std::vector<ApplicationProviderDto>& value)
{
    applicationProviders_ = value;
    applicationProvidersIsSet_ = true;
}

bool ListApplicationProvidersResponse::applicationProvidersIsSet() const
{
    return applicationProvidersIsSet_;
}

void ListApplicationProvidersResponse::unsetapplicationProviders()
{
    applicationProvidersIsSet_ = false;
}

PageInfoDto ListApplicationProvidersResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListApplicationProvidersResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListApplicationProvidersResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListApplicationProvidersResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


