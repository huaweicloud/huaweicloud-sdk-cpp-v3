

#include "huaweicloud/live/v1/model/DeleteDomainHttpsCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteDomainHttpsCertRequest::DeleteDomainHttpsCertRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

DeleteDomainHttpsCertRequest::~DeleteDomainHttpsCertRequest() = default;

void DeleteDomainHttpsCertRequest::validate()
{
}

web::json::value DeleteDomainHttpsCertRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool DeleteDomainHttpsCertRequest::fromJson(const web::json::value& val)
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


std::string DeleteDomainHttpsCertRequest::getDomain() const
{
    return domain_;
}

void DeleteDomainHttpsCertRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteDomainHttpsCertRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteDomainHttpsCertRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


