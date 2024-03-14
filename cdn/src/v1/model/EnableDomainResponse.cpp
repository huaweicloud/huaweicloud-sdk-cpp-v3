

#include "huaweicloud/cdn/v1/model/EnableDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




EnableDomainResponse::EnableDomainResponse()
{
    domainIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
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

std::string EnableDomainResponse::getXRequestId() const
{
    return xRequestId_;
}

void EnableDomainResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool EnableDomainResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void EnableDomainResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


