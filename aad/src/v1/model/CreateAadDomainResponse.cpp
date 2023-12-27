

#include "huaweicloud/aad/v1/model/CreateAadDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CreateAadDomainResponse::CreateAadDomainResponse()
{
    cname_ = "";
    cnameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CreateAadDomainResponse::~CreateAadDomainResponse() = default;

void CreateAadDomainResponse::validate()
{
}

web::json::value CreateAadDomainResponse::toJson() const
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
bool CreateAadDomainResponse::fromJson(const web::json::value& val)
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


std::string CreateAadDomainResponse::getCname() const
{
    return cname_;
}

void CreateAadDomainResponse::setCname(const std::string& value)
{
    cname_ = value;
    cnameIsSet_ = true;
}

bool CreateAadDomainResponse::cnameIsSet() const
{
    return cnameIsSet_;
}

void CreateAadDomainResponse::unsetcname()
{
    cnameIsSet_ = false;
}

std::string CreateAadDomainResponse::getDomainId() const
{
    return domainId_;
}

void CreateAadDomainResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateAadDomainResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateAadDomainResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


