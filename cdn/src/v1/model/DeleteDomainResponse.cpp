

#include "huaweicloud/cdn/v1/model/DeleteDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DeleteDomainResponse::DeleteDomainResponse()
{
    domainIsSet_ = false;
}

DeleteDomainResponse::~DeleteDomainResponse() = default;

void DeleteDomainResponse::validate()
{
}

web::json::value DeleteDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool DeleteDomainResponse::fromJson(const web::json::value& val)
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


DomainsWithPort DeleteDomainResponse::getDomain() const
{
    return domain_;
}

void DeleteDomainResponse::setDomain(const DomainsWithPort& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteDomainResponse::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteDomainResponse::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


