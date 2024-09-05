

#include "huaweicloud/live/v1/model/GmCertificateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




GmCertificateInfo::GmCertificateInfo()
{
    source_ = "";
    sourceIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
    signCertificate_ = "";
    signCertificateIsSet_ = false;
    signCertificateKey_ = "";
    signCertificateKeyIsSet_ = false;
    encCertificate_ = "";
    encCertificateIsSet_ = false;
    encCertificateKey_ = "";
    encCertificateKeyIsSet_ = false;
}

GmCertificateInfo::~GmCertificateInfo() = default;

void GmCertificateInfo::validate()
{
}

web::json::value GmCertificateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }
    if(signCertificateIsSet_) {
        val[utility::conversions::to_string_t("sign_certificate")] = ModelBase::toJson(signCertificate_);
    }
    if(signCertificateKeyIsSet_) {
        val[utility::conversions::to_string_t("sign_certificate_key")] = ModelBase::toJson(signCertificateKey_);
    }
    if(encCertificateIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate")] = ModelBase::toJson(encCertificate_);
    }
    if(encCertificateKeyIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate_key")] = ModelBase::toJson(encCertificateKey_);
    }

    return val;
}
bool GmCertificateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_certificate_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_certificate_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignCertificateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enc_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enc_certificate_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_certificate_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncCertificateKey(refVal);
        }
    }
    return ok;
}


std::string GmCertificateInfo::getSource() const
{
    return source_;
}

void GmCertificateInfo::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool GmCertificateInfo::sourceIsSet() const
{
    return sourceIsSet_;
}

void GmCertificateInfo::unsetsource()
{
    sourceIsSet_ = false;
}

std::string GmCertificateInfo::getCertName() const
{
    return certName_;
}

void GmCertificateInfo::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool GmCertificateInfo::certNameIsSet() const
{
    return certNameIsSet_;
}

void GmCertificateInfo::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string GmCertificateInfo::getCertId() const
{
    return certId_;
}

void GmCertificateInfo::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool GmCertificateInfo::certIdIsSet() const
{
    return certIdIsSet_;
}

void GmCertificateInfo::unsetcertId()
{
    certIdIsSet_ = false;
}

std::string GmCertificateInfo::getSignCertificate() const
{
    return signCertificate_;
}

void GmCertificateInfo::setSignCertificate(const std::string& value)
{
    signCertificate_ = value;
    signCertificateIsSet_ = true;
}

bool GmCertificateInfo::signCertificateIsSet() const
{
    return signCertificateIsSet_;
}

void GmCertificateInfo::unsetsignCertificate()
{
    signCertificateIsSet_ = false;
}

std::string GmCertificateInfo::getSignCertificateKey() const
{
    return signCertificateKey_;
}

void GmCertificateInfo::setSignCertificateKey(const std::string& value)
{
    signCertificateKey_ = value;
    signCertificateKeyIsSet_ = true;
}

bool GmCertificateInfo::signCertificateKeyIsSet() const
{
    return signCertificateKeyIsSet_;
}

void GmCertificateInfo::unsetsignCertificateKey()
{
    signCertificateKeyIsSet_ = false;
}

std::string GmCertificateInfo::getEncCertificate() const
{
    return encCertificate_;
}

void GmCertificateInfo::setEncCertificate(const std::string& value)
{
    encCertificate_ = value;
    encCertificateIsSet_ = true;
}

bool GmCertificateInfo::encCertificateIsSet() const
{
    return encCertificateIsSet_;
}

void GmCertificateInfo::unsetencCertificate()
{
    encCertificateIsSet_ = false;
}

std::string GmCertificateInfo::getEncCertificateKey() const
{
    return encCertificateKey_;
}

void GmCertificateInfo::setEncCertificateKey(const std::string& value)
{
    encCertificateKey_ = value;
    encCertificateKeyIsSet_ = true;
}

bool GmCertificateInfo::encCertificateKeyIsSet() const
{
    return encCertificateKeyIsSet_;
}

void GmCertificateInfo::unsetencCertificateKey()
{
    encCertificateKeyIsSet_ = false;
}

}
}
}
}
}


