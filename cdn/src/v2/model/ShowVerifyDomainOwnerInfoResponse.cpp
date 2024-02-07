

#include "huaweicloud/cdn/v2/model/ShowVerifyDomainOwnerInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowVerifyDomainOwnerInfoResponse::ShowVerifyDomainOwnerInfoResponse()
{
    dnsVerifyType_ = "";
    dnsVerifyTypeIsSet_ = false;
    dnsVerifyName_ = "";
    dnsVerifyNameIsSet_ = false;
    fileVerifyUrl_ = "";
    fileVerifyUrlIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    verifyDomainName_ = "";
    verifyDomainNameIsSet_ = false;
    fileVerifyFilename_ = "";
    fileVerifyFilenameIsSet_ = false;
    verifyContent_ = "";
    verifyContentIsSet_ = false;
}

ShowVerifyDomainOwnerInfoResponse::~ShowVerifyDomainOwnerInfoResponse() = default;

void ShowVerifyDomainOwnerInfoResponse::validate()
{
}

web::json::value ShowVerifyDomainOwnerInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsVerifyTypeIsSet_) {
        val[utility::conversions::to_string_t("dns_verify_type")] = ModelBase::toJson(dnsVerifyType_);
    }
    if(dnsVerifyNameIsSet_) {
        val[utility::conversions::to_string_t("dns_verify_name")] = ModelBase::toJson(dnsVerifyName_);
    }
    if(fileVerifyUrlIsSet_) {
        val[utility::conversions::to_string_t("file_verify_url")] = ModelBase::toJson(fileVerifyUrl_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(verifyDomainNameIsSet_) {
        val[utility::conversions::to_string_t("verify_domain_name")] = ModelBase::toJson(verifyDomainName_);
    }
    if(fileVerifyFilenameIsSet_) {
        val[utility::conversions::to_string_t("file_verify_filename")] = ModelBase::toJson(fileVerifyFilename_);
    }
    if(verifyContentIsSet_) {
        val[utility::conversions::to_string_t("verify_content")] = ModelBase::toJson(verifyContent_);
    }

    return val;
}
bool ShowVerifyDomainOwnerInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dns_verify_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_verify_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsVerifyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dns_verify_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_verify_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsVerifyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_verify_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_verify_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileVerifyUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("verify_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_verify_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_verify_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileVerifyFilename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyContent(refVal);
        }
    }
    return ok;
}


std::string ShowVerifyDomainOwnerInfoResponse::getDnsVerifyType() const
{
    return dnsVerifyType_;
}

void ShowVerifyDomainOwnerInfoResponse::setDnsVerifyType(const std::string& value)
{
    dnsVerifyType_ = value;
    dnsVerifyTypeIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::dnsVerifyTypeIsSet() const
{
    return dnsVerifyTypeIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetdnsVerifyType()
{
    dnsVerifyTypeIsSet_ = false;
}

std::string ShowVerifyDomainOwnerInfoResponse::getDnsVerifyName() const
{
    return dnsVerifyName_;
}

void ShowVerifyDomainOwnerInfoResponse::setDnsVerifyName(const std::string& value)
{
    dnsVerifyName_ = value;
    dnsVerifyNameIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::dnsVerifyNameIsSet() const
{
    return dnsVerifyNameIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetdnsVerifyName()
{
    dnsVerifyNameIsSet_ = false;
}

std::string ShowVerifyDomainOwnerInfoResponse::getFileVerifyUrl() const
{
    return fileVerifyUrl_;
}

void ShowVerifyDomainOwnerInfoResponse::setFileVerifyUrl(const std::string& value)
{
    fileVerifyUrl_ = value;
    fileVerifyUrlIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::fileVerifyUrlIsSet() const
{
    return fileVerifyUrlIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetfileVerifyUrl()
{
    fileVerifyUrlIsSet_ = false;
}

std::string ShowVerifyDomainOwnerInfoResponse::getDomainName() const
{
    return domainName_;
}

void ShowVerifyDomainOwnerInfoResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowVerifyDomainOwnerInfoResponse::getVerifyDomainName() const
{
    return verifyDomainName_;
}

void ShowVerifyDomainOwnerInfoResponse::setVerifyDomainName(const std::string& value)
{
    verifyDomainName_ = value;
    verifyDomainNameIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::verifyDomainNameIsSet() const
{
    return verifyDomainNameIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetverifyDomainName()
{
    verifyDomainNameIsSet_ = false;
}

std::string ShowVerifyDomainOwnerInfoResponse::getFileVerifyFilename() const
{
    return fileVerifyFilename_;
}

void ShowVerifyDomainOwnerInfoResponse::setFileVerifyFilename(const std::string& value)
{
    fileVerifyFilename_ = value;
    fileVerifyFilenameIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::fileVerifyFilenameIsSet() const
{
    return fileVerifyFilenameIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetfileVerifyFilename()
{
    fileVerifyFilenameIsSet_ = false;
}

std::string ShowVerifyDomainOwnerInfoResponse::getVerifyContent() const
{
    return verifyContent_;
}

void ShowVerifyDomainOwnerInfoResponse::setVerifyContent(const std::string& value)
{
    verifyContent_ = value;
    verifyContentIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoResponse::verifyContentIsSet() const
{
    return verifyContentIsSet_;
}

void ShowVerifyDomainOwnerInfoResponse::unsetverifyContent()
{
    verifyContentIsSet_ = false;
}

}
}
}
}
}


