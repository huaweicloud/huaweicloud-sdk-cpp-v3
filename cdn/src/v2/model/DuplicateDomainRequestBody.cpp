

#include "huaweicloud/cdn/v2/model/DuplicateDomainRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DuplicateDomainRequestBody::DuplicateDomainRequestBody()
{
    referenceDomainName_ = "";
    referenceDomainNameIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
}

DuplicateDomainRequestBody::~DuplicateDomainRequestBody() = default;

void DuplicateDomainRequestBody::validate()
{
}

web::json::value DuplicateDomainRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(referenceDomainNameIsSet_) {
        val[utility::conversions::to_string_t("reference_domain_name")] = ModelBase::toJson(referenceDomainName_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool DuplicateDomainRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reference_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reference_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferenceDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}


std::string DuplicateDomainRequestBody::getReferenceDomainName() const
{
    return referenceDomainName_;
}

void DuplicateDomainRequestBody::setReferenceDomainName(const std::string& value)
{
    referenceDomainName_ = value;
    referenceDomainNameIsSet_ = true;
}

bool DuplicateDomainRequestBody::referenceDomainNameIsSet() const
{
    return referenceDomainNameIsSet_;
}

void DuplicateDomainRequestBody::unsetreferenceDomainName()
{
    referenceDomainNameIsSet_ = false;
}

std::string DuplicateDomainRequestBody::getDomainName() const
{
    return domainName_;
}

void DuplicateDomainRequestBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DuplicateDomainRequestBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DuplicateDomainRequestBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


