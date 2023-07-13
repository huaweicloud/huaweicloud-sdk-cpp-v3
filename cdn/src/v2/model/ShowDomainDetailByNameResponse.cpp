

#include "huaweicloud/cdn/v2/model/ShowDomainDetailByNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainDetailByNameResponse::ShowDomainDetailByNameResponse()
{
    domainIsSet_ = false;
}

ShowDomainDetailByNameResponse::~ShowDomainDetailByNameResponse() = default;

void ShowDomainDetailByNameResponse::validate()
{
}

web::json::value ShowDomainDetailByNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}

bool ShowDomainDetailByNameResponse::fromJson(const web::json::value& val)
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

DomainsWithPort ShowDomainDetailByNameResponse::getDomain() const
{
    return domain_;
}

void ShowDomainDetailByNameResponse::setDomain(const DomainsWithPort& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowDomainDetailByNameResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowDomainDetailByNameResponse::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


