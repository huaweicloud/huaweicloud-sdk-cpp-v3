

#include "huaweicloud/live/v1/model/DeleteDomainKeyChainRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteDomainKeyChainRequest::DeleteDomainKeyChainRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

DeleteDomainKeyChainRequest::~DeleteDomainKeyChainRequest() = default;

void DeleteDomainKeyChainRequest::validate()
{
}

web::json::value DeleteDomainKeyChainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}

bool DeleteDomainKeyChainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}


std::string DeleteDomainKeyChainRequest::getDomain() const
{
    return domain_;
}

void DeleteDomainKeyChainRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteDomainKeyChainRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteDomainKeyChainRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


