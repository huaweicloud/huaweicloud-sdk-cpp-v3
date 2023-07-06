

#include "huaweicloud/cdn/v1/model/ShowDomainDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainDetailResponse::ShowDomainDetailResponse()
{
    domainIsSet_ = false;
}

ShowDomainDetailResponse::~ShowDomainDetailResponse() = default;

void ShowDomainDetailResponse::validate()
{
}

web::json::value ShowDomainDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}

bool ShowDomainDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            DomainsWithPort refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}

DomainsWithPort ShowDomainDetailResponse::getDomain() const
{
    return domain_;
}

void ShowDomainDetailResponse::setDomain(const DomainsWithPort& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowDomainDetailResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowDomainDetailResponse::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


