

#include "huaweicloud/live/v1/model/ShowDomainVerificationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainVerificationRequest::ShowDomainVerificationRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

ShowDomainVerificationRequest::~ShowDomainVerificationRequest() = default;

void ShowDomainVerificationRequest::validate()
{
}

web::json::value ShowDomainVerificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool ShowDomainVerificationRequest::fromJson(const web::json::value& val)
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


std::string ShowDomainVerificationRequest::getDomain() const
{
    return domain_;
}

void ShowDomainVerificationRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowDomainVerificationRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowDomainVerificationRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


