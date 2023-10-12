

#include "huaweicloud/cdn/v1/model/ShowDomainItemDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainItemDetailsResponse::ShowDomainItemDetailsResponse()
{
    domainItemDetailsIsSet_ = false;
}

ShowDomainItemDetailsResponse::~ShowDomainItemDetailsResponse() = default;

void ShowDomainItemDetailsResponse::validate()
{
}

web::json::value ShowDomainItemDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainItemDetailsIsSet_) {
        val[utility::conversions::to_string_t("domain_item_details")] = ModelBase::toJson(domainItemDetails_);
    }

    return val;
}
bool ShowDomainItemDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_item_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_item_details"));
        if(!fieldValue.is_null())
        {
            DomainItemDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainItemDetails(refVal);
        }
    }
    return ok;
}


DomainItemDetail ShowDomainItemDetailsResponse::getDomainItemDetails() const
{
    return domainItemDetails_;
}

void ShowDomainItemDetailsResponse::setDomainItemDetails(const DomainItemDetail& value)
{
    domainItemDetails_ = value;
    domainItemDetailsIsSet_ = true;
}

bool ShowDomainItemDetailsResponse::domainItemDetailsIsSet() const
{
    return domainItemDetailsIsSet_;
}

void ShowDomainItemDetailsResponse::unsetdomainItemDetails()
{
    domainItemDetailsIsSet_ = false;
}

}
}
}
}
}


