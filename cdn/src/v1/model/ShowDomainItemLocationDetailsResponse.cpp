

#include "huaweicloud/cdn/v1/model/ShowDomainItemLocationDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainItemLocationDetailsResponse::ShowDomainItemLocationDetailsResponse()
{
    domainItemLocationDetailsIsSet_ = false;
}

ShowDomainItemLocationDetailsResponse::~ShowDomainItemLocationDetailsResponse() = default;

void ShowDomainItemLocationDetailsResponse::validate()
{
}

web::json::value ShowDomainItemLocationDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainItemLocationDetailsIsSet_) {
        val[utility::conversions::to_string_t("domain_item_location_details")] = ModelBase::toJson(domainItemLocationDetails_);
    }

    return val;
}

bool ShowDomainItemLocationDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_item_location_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_item_location_details"));
        if(!fieldValue.is_null())
        {
            DomainItemLocationDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainItemLocationDetails(refVal);
        }
    }
    return ok;
}

DomainItemLocationDetails ShowDomainItemLocationDetailsResponse::getDomainItemLocationDetails() const
{
    return domainItemLocationDetails_;
}

void ShowDomainItemLocationDetailsResponse::setDomainItemLocationDetails(const DomainItemLocationDetails& value)
{
    domainItemLocationDetails_ = value;
    domainItemLocationDetailsIsSet_ = true;
}

bool ShowDomainItemLocationDetailsResponse::domainItemLocationDetailsIsSet() const
{
    return domainItemLocationDetailsIsSet_;
}

void ShowDomainItemLocationDetailsResponse::unsetdomainItemLocationDetails()
{
    domainItemLocationDetailsIsSet_ = false;
}

}
}
}
}
}


