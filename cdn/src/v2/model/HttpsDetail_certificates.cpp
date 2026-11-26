

#include "huaweicloud/cdn/v2/model/HttpsDetail_certificates.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




HttpsDetail_certificates::HttpsDetail_certificates()
{
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    certificateSource_ = 0;
    certificateSourceIsSet_ = false;
    certificateName_ = "";
    certificateNameIsSet_ = false;
    certificateValue_ = "";
    certificateValueIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    encCertificateValue_ = "";
    encCertificateValueIsSet_ = false;
    encPrivateKey_ = "";
    encPrivateKeyIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    scmCertificateId_ = "";
    scmCertificateIdIsSet_ = false;
}

HttpsDetail_certificates::~HttpsDetail_certificates() = default;

void HttpsDetail_certificates::validate()
{
}

web::json::value HttpsDetail_certificates::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(certificateSourceIsSet_) {
        val[utility::conversions::to_string_t("certificate_source")] = ModelBase::toJson(certificateSource_);
    }
    if(certificateNameIsSet_) {
        val[utility::conversions::to_string_t("certificate_name")] = ModelBase::toJson(certificateName_);
    }
    if(certificateValueIsSet_) {
        val[utility::conversions::to_string_t("certificate_value")] = ModelBase::toJson(certificateValue_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(encCertificateValueIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate_value")] = ModelBase::toJson(encCertificateValue_);
    }
    if(encPrivateKeyIsSet_) {
        val[utility::conversions::to_string_t("enc_private_key")] = ModelBase::toJson(encPrivateKey_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(scmCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("scm_certificate_id")] = ModelBase::toJson(scmCertificateId_);
    }

    return val;
}
bool HttpsDetail_certificates::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_source"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateSource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enc_private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncPrivateKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scm_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmCertificateId(refVal);
        }
    }
    return ok;
}


std::string HttpsDetail_certificates::getCertificateType() const
{
    return certificateType_;
}

void HttpsDetail_certificates::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool HttpsDetail_certificates::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void HttpsDetail_certificates::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t HttpsDetail_certificates::getCertificateSource() const
{
    return certificateSource_;
}

void HttpsDetail_certificates::setCertificateSource(int32_t value)
{
    certificateSource_ = value;
    certificateSourceIsSet_ = true;
}

bool HttpsDetail_certificates::certificateSourceIsSet() const
{
    return certificateSourceIsSet_;
}

void HttpsDetail_certificates::unsetcertificateSource()
{
    certificateSourceIsSet_ = false;
}

std::string HttpsDetail_certificates::getCertificateName() const
{
    return certificateName_;
}

void HttpsDetail_certificates::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool HttpsDetail_certificates::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void HttpsDetail_certificates::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string HttpsDetail_certificates::getCertificateValue() const
{
    return certificateValue_;
}

void HttpsDetail_certificates::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool HttpsDetail_certificates::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void HttpsDetail_certificates::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

std::string HttpsDetail_certificates::getPrivateKey() const
{
    return privateKey_;
}

void HttpsDetail_certificates::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HttpsDetail_certificates::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HttpsDetail_certificates::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

std::string HttpsDetail_certificates::getEncCertificateValue() const
{
    return encCertificateValue_;
}

void HttpsDetail_certificates::setEncCertificateValue(const std::string& value)
{
    encCertificateValue_ = value;
    encCertificateValueIsSet_ = true;
}

bool HttpsDetail_certificates::encCertificateValueIsSet() const
{
    return encCertificateValueIsSet_;
}

void HttpsDetail_certificates::unsetencCertificateValue()
{
    encCertificateValueIsSet_ = false;
}

std::string HttpsDetail_certificates::getEncPrivateKey() const
{
    return encPrivateKey_;
}

void HttpsDetail_certificates::setEncPrivateKey(const std::string& value)
{
    encPrivateKey_ = value;
    encPrivateKeyIsSet_ = true;
}

bool HttpsDetail_certificates::encPrivateKeyIsSet() const
{
    return encPrivateKeyIsSet_;
}

void HttpsDetail_certificates::unsetencPrivateKey()
{
    encPrivateKeyIsSet_ = false;
}

int64_t HttpsDetail_certificates::getExpireTime() const
{
    return expireTime_;
}

void HttpsDetail_certificates::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool HttpsDetail_certificates::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void HttpsDetail_certificates::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string HttpsDetail_certificates::getScmCertificateId() const
{
    return scmCertificateId_;
}

void HttpsDetail_certificates::setScmCertificateId(const std::string& value)
{
    scmCertificateId_ = value;
    scmCertificateIdIsSet_ = true;
}

bool HttpsDetail_certificates::scmCertificateIdIsSet() const
{
    return scmCertificateIdIsSet_;
}

void HttpsDetail_certificates::unsetscmCertificateId()
{
    scmCertificateIdIsSet_ = false;
}

}
}
}
}
}


