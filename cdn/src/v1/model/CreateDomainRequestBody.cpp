

#include "huaweicloud/cdn/v1/model/CreateDomainRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateDomainRequestBody::CreateDomainRequestBody()
{
    domainIsSet_ = false;
}

CreateDomainRequestBody::~CreateDomainRequestBody() = default;

void CreateDomainRequestBody::validate()
{
}

web::json::value CreateDomainRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool CreateDomainRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            DomainBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}


DomainBody CreateDomainRequestBody::getDomain() const
{
    return domain_;
}

void CreateDomainRequestBody::setDomain(const DomainBody& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateDomainRequestBody::domainIsSet() const
{
    return domainIsSet_;
}

void CreateDomainRequestBody::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


