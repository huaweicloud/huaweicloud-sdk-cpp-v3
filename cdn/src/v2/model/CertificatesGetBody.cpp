

#include "huaweicloud/cdn/v2/model/CertificatesGetBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CertificatesGetBody::CertificatesGetBody()
{
    certificateSource_ = 0;
    certificateSourceIsSet_ = false;
    scmCertificateId_ = "";
    scmCertificateIdIsSet_ = false;
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    certificateName_ = "";
    certificateNameIsSet_ = false;
    certificateValue_ = "";
    certificateValueIsSet_ = false;
    encCertificateValue_ = "";
    encCertificateValueIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
}

CertificatesGetBody::~CertificatesGetBody() = default;

void CertificatesGetBody::validate()
{
}

web::json::value CertificatesGetBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateSourceIsSet_) {
        val[utility::conversions::to_string_t("certificate_source")] = ModelBase::toJson(certificateSource_);
    }
    if(scmCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("scm_certificate_id")] = ModelBase::toJson(scmCertificateId_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(certificateNameIsSet_) {
        val[utility::conversions::to_string_t("certificate_name")] = ModelBase::toJson(certificateName_);
    }
    if(certificateValueIsSet_) {
        val[utility::conversions::to_string_t("certificate_value")] = ModelBase::toJson(certificateValue_);
    }
    if(encCertificateValueIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate_value")] = ModelBase::toJson(encCertificateValue_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}
bool CertificatesGetBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_source"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enc_certificate_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_certificate_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncCertificateValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}


int32_t CertificatesGetBody::getCertificateSource() const
{
    return certificateSource_;
}

void CertificatesGetBody::setCertificateSource(int32_t value)
{
    certificateSource_ = value;
    certificateSourceIsSet_ = true;
}

bool CertificatesGetBody::certificateSourceIsSet() const
{
    return certificateSourceIsSet_;
}

void CertificatesGetBody::unsetcertificateSource()
{
    certificateSourceIsSet_ = false;
}

std::string CertificatesGetBody::getScmCertificateId() const
{
    return scmCertificateId_;
}

void CertificatesGetBody::setScmCertificateId(const std::string& value)
{
    scmCertificateId_ = value;
    scmCertificateIdIsSet_ = true;
}

bool CertificatesGetBody::scmCertificateIdIsSet() const
{
    return scmCertificateIdIsSet_;
}

void CertificatesGetBody::unsetscmCertificateId()
{
    scmCertificateIdIsSet_ = false;
}

std::string CertificatesGetBody::getCertificateType() const
{
    return certificateType_;
}

void CertificatesGetBody::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool CertificatesGetBody::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void CertificatesGetBody::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string CertificatesGetBody::getCertificateName() const
{
    return certificateName_;
}

void CertificatesGetBody::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool CertificatesGetBody::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void CertificatesGetBody::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string CertificatesGetBody::getCertificateValue() const
{
    return certificateValue_;
}

void CertificatesGetBody::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool CertificatesGetBody::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void CertificatesGetBody::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

std::string CertificatesGetBody::getEncCertificateValue() const
{
    return encCertificateValue_;
}

void CertificatesGetBody::setEncCertificateValue(const std::string& value)
{
    encCertificateValue_ = value;
    encCertificateValueIsSet_ = true;
}

bool CertificatesGetBody::encCertificateValueIsSet() const
{
    return encCertificateValueIsSet_;
}

void CertificatesGetBody::unsetencCertificateValue()
{
    encCertificateValueIsSet_ = false;
}

int64_t CertificatesGetBody::getExpireTime() const
{
    return expireTime_;
}

void CertificatesGetBody::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CertificatesGetBody::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CertificatesGetBody::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


