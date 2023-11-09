

#include "huaweicloud/cfw/v1/model/DomainSetInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DomainSetInfoDto::DomainSetInfoDto()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

DomainSetInfoDto::~DomainSetInfoDto() = default;

void DomainSetInfoDto::validate()
{
}

web::json::value DomainSetInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool DomainSetInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string DomainSetInfoDto::getDomainName() const
{
    return domainName_;
}

void DomainSetInfoDto::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainSetInfoDto::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainSetInfoDto::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainSetInfoDto::getDescription() const
{
    return description_;
}

void DomainSetInfoDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DomainSetInfoDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DomainSetInfoDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


