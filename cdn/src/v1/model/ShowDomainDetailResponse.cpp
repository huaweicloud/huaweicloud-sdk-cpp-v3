

#include "huaweicloud/cdn/v1/model/ShowDomainDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainDetailResponse::ShowDomainDetailResponse()
{
    domainIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowDomainDetailResponse::~ShowDomainDetailResponse() = default;

void ShowDomainDetailResponse::validate()
{
}

web::json::value ShowDomainDetailResponse::toJson() const
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
bool ShowDomainDetailResponse::fromJson(const web::json::value& val)
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


DomainsWithPort ShowDomainDetailResponse::getDomain() const
{
    return domain_;
}

void ShowDomainDetailResponse::setDomain(const DomainsWithPort& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowDomainDetailResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowDomainDetailResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ShowDomainDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowDomainDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDomainDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDomainDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


