

#include "huaweicloud/organizations/v1/model/ListDelegatedServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListDelegatedServicesResponse::ListDelegatedServicesResponse()
{
    delegatedServicesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListDelegatedServicesResponse::~ListDelegatedServicesResponse() = default;

void ListDelegatedServicesResponse::validate()
{
}

web::json::value ListDelegatedServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delegatedServicesIsSet_) {
        val[utility::conversions::to_string_t("delegated_services")] = ModelBase::toJson(delegatedServices_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListDelegatedServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delegated_services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delegated_services"));
        if(!fieldValue.is_null())
        {
            std::vector<DelegatedServiceDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelegatedServices(refVal);
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


std::vector<DelegatedServiceDto>& ListDelegatedServicesResponse::getDelegatedServices()
{
    return delegatedServices_;
}

void ListDelegatedServicesResponse::setDelegatedServices(const std::vector<DelegatedServiceDto>& value)
{
    delegatedServices_ = value;
    delegatedServicesIsSet_ = true;
}

bool ListDelegatedServicesResponse::delegatedServicesIsSet() const
{
    return delegatedServicesIsSet_;
}

void ListDelegatedServicesResponse::unsetdelegatedServices()
{
    delegatedServicesIsSet_ = false;
}

PageInfoDto ListDelegatedServicesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListDelegatedServicesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListDelegatedServicesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListDelegatedServicesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


