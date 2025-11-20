

#include "huaweicloud/aad/v1/model/CreateDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CreateDomainResponse::CreateDomainResponse()
{
    cname_ = "";
    cnameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CreateDomainResponse::~CreateDomainResponse() = default;

void CreateDomainResponse::validate()
{
}

web::json::value CreateDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cnameIsSet_) {
        val[utility::conversions::to_string_t("cname")] = ModelBase::toJson(cname_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domainId")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool CreateDomainResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domainId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string CreateDomainResponse::getCname() const
{
    return cname_;
}

void CreateDomainResponse::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool CreateDomainResponse::cnameIsSet() const
{
    return cnameIsSet_;
}

void CreateDomainResponse::unsetcname()
{
    cnameIsSet_ = false;
}

std::string CreateDomainResponse::getDomainId() const
{
    return domainId_;
}

void CreateDomainResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateDomainResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateDomainResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


