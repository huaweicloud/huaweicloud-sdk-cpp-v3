

#include "huaweicloud/organizations/v1/model/ListTrustedServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTrustedServicesResponse::ListTrustedServicesResponse()
{
    trustedServicesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListTrustedServicesResponse::~ListTrustedServicesResponse() = default;

void ListTrustedServicesResponse::validate()
{
}

web::json::value ListTrustedServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trustedServicesIsSet_) {
        val[utility::conversions::to_string_t("trusted_services")] = ModelBase::toJson(trustedServices_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListTrustedServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trusted_services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trusted_services"));
        if(!fieldValue.is_null())
        {
            std::vector<TrustedServiceDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustedServices(refVal);
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


std::vector<TrustedServiceDto>& ListTrustedServicesResponse::getTrustedServices()
{
    return trustedServices_;
}

void ListTrustedServicesResponse::setTrustedServices(const std::vector<TrustedServiceDto>& value)
{
    trustedServices_ = value;
    trustedServicesIsSet_ = true;
}

bool ListTrustedServicesResponse::trustedServicesIsSet() const
{
    return trustedServicesIsSet_;
}

void ListTrustedServicesResponse::unsettrustedServices()
{
    trustedServicesIsSet_ = false;
}

PageInfoDto ListTrustedServicesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTrustedServicesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTrustedServicesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTrustedServicesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


