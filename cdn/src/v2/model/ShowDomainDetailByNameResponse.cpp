

#include "huaweicloud/cdn/v2/model/ShowDomainDetailByNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainDetailByNameResponse::ShowDomainDetailByNameResponse()
{
    domainIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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
            DomainsDetail refVal;
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


DomainsDetail ShowDomainDetailByNameResponse::getDomain() const
{
    return domain_;
}

void ShowDomainDetailByNameResponse::setDomain(const DomainsDetail& value)
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

std::string ShowDomainDetailByNameResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowDomainDetailByNameResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDomainDetailByNameResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDomainDetailByNameResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


