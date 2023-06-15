

#include "huaweicloud/live/v1/model/ShowDomainKeyChainRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainKeyChainRequest::ShowDomainKeyChainRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

ShowDomainKeyChainRequest::~ShowDomainKeyChainRequest() = default;

void ShowDomainKeyChainRequest::validate()
{
}

web::json::value ShowDomainKeyChainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}

bool ShowDomainKeyChainRequest::fromJson(const web::json::value& val)
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


std::string ShowDomainKeyChainRequest::getDomain() const
{
    return domain_;
}

void ShowDomainKeyChainRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowDomainKeyChainRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowDomainKeyChainRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


