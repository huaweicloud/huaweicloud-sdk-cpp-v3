

#include "huaweicloud/live/v1/model/DeleteDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteDomainRequest::DeleteDomainRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

DeleteDomainRequest::~DeleteDomainRequest() = default;

void DeleteDomainRequest::validate()
{
}

web::json::value DeleteDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool DeleteDomainRequest::fromJson(const web::json::value& val)
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


std::string DeleteDomainRequest::getDomain() const
{
    return domain_;
}

void DeleteDomainRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteDomainRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteDomainRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


