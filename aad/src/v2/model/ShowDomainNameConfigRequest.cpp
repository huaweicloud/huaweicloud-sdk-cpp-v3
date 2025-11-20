

#include "huaweicloud/aad/v2/model/ShowDomainNameConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDomainNameConfigRequest::ShowDomainNameConfigRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowDomainNameConfigRequest::~ShowDomainNameConfigRequest() = default;

void ShowDomainNameConfigRequest::validate()
{
}

web::json::value ShowDomainNameConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowDomainNameConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowDomainNameConfigRequest::getDomainId() const
{
    return domainId_;
}

void ShowDomainNameConfigRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainNameConfigRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainNameConfigRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowDomainNameConfigRequest::getType() const
{
    return type_;
}

void ShowDomainNameConfigRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowDomainNameConfigRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowDomainNameConfigRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


