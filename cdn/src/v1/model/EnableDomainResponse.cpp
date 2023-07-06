

#include "huaweicloud/cdn/v1/model/EnableDomainResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




EnableDomainResponse::EnableDomainResponse()
{
    domainIsSet_ = false;
}

EnableDomainResponse::~EnableDomainResponse() = default;

void EnableDomainResponse::validate()
{
}

web::json::value EnableDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}

bool EnableDomainResponse::fromJson(const web::json::value& val)
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

DomainsWithPort EnableDomainResponse::getDomain() const
{
    return domain_;
}

void EnableDomainResponse::setDomain(const DomainsWithPort& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool EnableDomainResponse::domainIsSet() const
{
    return domainIsSet_;
}

void EnableDomainResponse::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


