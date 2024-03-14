

#include "huaweicloud/cdn/v2/model/DeleteDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DeleteDomainResponse::DeleteDomainResponse()
{
    domainIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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

std::string DeleteDomainResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteDomainResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteDomainResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteDomainResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


