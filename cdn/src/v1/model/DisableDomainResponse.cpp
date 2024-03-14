

#include "huaweicloud/cdn/v1/model/DisableDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DisableDomainResponse::DisableDomainResponse()
{
    domainIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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

std::string DisableDomainResponse::getXRequestId() const
{
    return xRequestId_;
}

void DisableDomainResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DisableDomainResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DisableDomainResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


