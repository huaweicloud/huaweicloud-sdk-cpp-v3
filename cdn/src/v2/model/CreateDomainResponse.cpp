

#include "huaweicloud/cdn/v2/model/CreateDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateDomainResponse::CreateDomainResponse()
{
    domainIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateDomainResponse::~CreateDomainResponse() = default;

void CreateDomainResponse::validate()
{
}

web::json::value CreateDomainResponse::toJson() const
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
bool CreateDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            CreateDomainResponseBodyContent refVal;
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


CreateDomainResponseBodyContent CreateDomainResponse::getDomain() const
{
    return domain_;
}

void CreateDomainResponse::setDomain(const CreateDomainResponseBodyContent& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateDomainResponse::domainIsSet() const
{
    return domainIsSet_;
}

void CreateDomainResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateDomainResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateDomainResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateDomainResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateDomainResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


