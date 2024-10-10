

#include "huaweicloud/aad/v2/model/ShowDomainCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDomainCertificateRequest::ShowDomainCertificateRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowDomainCertificateRequest::~ShowDomainCertificateRequest() = default;

void ShowDomainCertificateRequest::validate()
{
}

web::json::value ShowDomainCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowDomainCertificateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDomainCertificateRequest::getDomainId() const
{
    return domainId_;
}

void ShowDomainCertificateRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainCertificateRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainCertificateRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


