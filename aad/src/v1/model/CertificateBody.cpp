

#include "huaweicloud/aad/v1/model/CertificateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CertificateBody::CertificateBody()
{
    opType_ = 0;
    opTypeIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certFile_ = "";
    certFileIsSet_ = false;
    certKeyFile_ = "";
    certKeyFileIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CertificateBody::~CertificateBody() = default;

void CertificateBody::validate()
{
}

web::json::value CertificateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(opTypeIsSet_) {
        val[utility::conversions::to_string_t("op_type")] = ModelBase::toJson(opType_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certFileIsSet_) {
        val[utility::conversions::to_string_t("cert_file")] = ModelBase::toJson(certFile_);
    }
    if(certKeyFileIsSet_) {
        val[utility::conversions::to_string_t("cert_key_file")] = ModelBase::toJson(certKeyFile_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool CertificateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("op_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_key_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_key_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertKeyFile(refVal);
        }
    }
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


int32_t CertificateBody::getOpType() const
{
    return opType_;
}

void CertificateBody::setOpType(int32_t value)
{
    opType_ = value;
    opTypeIsSet_ = true;
}

bool CertificateBody::opTypeIsSet() const
{
    return opTypeIsSet_;
}

void CertificateBody::unsetopType()
{
    opTypeIsSet_ = false;
}

std::string CertificateBody::getCertName() const
{
    return certName_;
}

void CertificateBody::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool CertificateBody::certNameIsSet() const
{
    return certNameIsSet_;
}

void CertificateBody::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string CertificateBody::getCertFile() const
{
    return certFile_;
}

void CertificateBody::setCertFile(const std::string& value)
{
    certFile_ = value;
    certFileIsSet_ = true;
}

bool CertificateBody::certFileIsSet() const
{
    return certFileIsSet_;
}

void CertificateBody::unsetcertFile()
{
    certFileIsSet_ = false;
}

std::string CertificateBody::getCertKeyFile() const
{
    return certKeyFile_;
}

void CertificateBody::setCertKeyFile(const std::string& value)
{
    certKeyFile_ = value;
    certKeyFileIsSet_ = true;
}

bool CertificateBody::certKeyFileIsSet() const
{
    return certKeyFileIsSet_;
}

void CertificateBody::unsetcertKeyFile()
{
    certKeyFileIsSet_ = false;
}

std::string CertificateBody::getDomainId() const
{
    return domainId_;
}

void CertificateBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CertificateBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CertificateBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


