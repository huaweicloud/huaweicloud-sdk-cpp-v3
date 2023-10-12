

#include "huaweicloud/live/v1/model/ShowDomainHttpsCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainHttpsCertRequest::ShowDomainHttpsCertRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

ShowDomainHttpsCertRequest::~ShowDomainHttpsCertRequest() = default;

void ShowDomainHttpsCertRequest::validate()
{
}

web::json::value ShowDomainHttpsCertRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool ShowDomainHttpsCertRequest::fromJson(const web::json::value& val)
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


std::string ShowDomainHttpsCertRequest::getDomain() const
{
    return domain_;
}

void ShowDomainHttpsCertRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowDomainHttpsCertRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowDomainHttpsCertRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


