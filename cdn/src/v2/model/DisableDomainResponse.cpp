

#include "huaweicloud/cdn/v2/model/DisableDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DisableDomainResponse::DisableDomainResponse()
{
    domainIsSet_ = false;
}

DisableDomainResponse::~DisableDomainResponse() = default;

void DisableDomainResponse::validate()
{
}

web::json::value DisableDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool DisableDomainResponse::fromJson(const web::json::value& val)
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


DomainsWithPort DisableDomainResponse::getDomain() const
{
    return domain_;
}

void DisableDomainResponse::setDomain(const DomainsWithPort& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DisableDomainResponse::domainIsSet() const
{
    return domainIsSet_;
}

void DisableDomainResponse::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


