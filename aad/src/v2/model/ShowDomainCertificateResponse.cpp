

#include "huaweicloud/aad/v2/model/ShowDomainCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDomainCertificateResponse::ShowDomainCertificateResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    certInfoIsSet_ = false;
}

ShowDomainCertificateResponse::~ShowDomainCertificateResponse() = default;

void ShowDomainCertificateResponse::validate()
{
}

web::json::value ShowDomainCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(certInfoIsSet_) {
        val[utility::conversions::to_string_t("cert_info")] = ModelBase::toJson(certInfo_);
    }

    return val;
}
bool ShowDomainCertificateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_info"));
        if(!fieldValue.is_null())
        {
            CertInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertInfo(refVal);
        }
    }
    return ok;
}


std::string ShowDomainCertificateResponse::getDomainId() const
{
    return domainId_;
}

void ShowDomainCertificateResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainCertificateResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainCertificateResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowDomainCertificateResponse::getDomainName() const
{
    return domainName_;
}

void ShowDomainCertificateResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowDomainCertificateResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowDomainCertificateResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

CertInfo ShowDomainCertificateResponse::getCertInfo() const
{
    return certInfo_;
}

void ShowDomainCertificateResponse::setCertInfo(const CertInfo& value)
{
    certInfo_ = value;
    certInfoIsSet_ = true;
}

bool ShowDomainCertificateResponse::certInfoIsSet() const
{
    return certInfoIsSet_;
}

void ShowDomainCertificateResponse::unsetcertInfo()
{
    certInfoIsSet_ = false;
}

}
}
}
}
}


