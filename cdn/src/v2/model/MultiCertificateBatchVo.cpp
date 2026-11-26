

#include "huaweicloud/cdn/v2/model/MultiCertificateBatchVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




MultiCertificateBatchVo::MultiCertificateBatchVo()
{
    certName_ = "";
    certNameIsSet_ = false;
    certificateCategory_ = 0;
    certificateCategoryIsSet_ = false;
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    encCertificate_ = "";
    encCertificateIsSet_ = false;
    encPrivateKey_ = "";
    encPrivateKeyIsSet_ = false;
    scmCertificateId_ = "";
    scmCertificateIdIsSet_ = false;
}

MultiCertificateBatchVo::~MultiCertificateBatchVo() = default;

void MultiCertificateBatchVo::validate()
{
}

web::json::value MultiCertificateBatchVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certificateCategoryIsSet_) {
        val[utility::conversions::to_string_t("certificate_category")] = ModelBase::toJson(certificateCategory_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(encCertificateIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate")] = ModelBase::toJson(encCertificate_);
    }
    if(encPrivateKeyIsSet_) {
        val[utility::conversions::to_string_t("enc_private_key")] = ModelBase::toJson(encPrivateKey_);
    }
    if(scmCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("scm_certificate_id")] = ModelBase::toJson(scmCertificateId_);
    }

    return val;
}
bool MultiCertificateBatchVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_category"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enc_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncCertificate(refVal);
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


std::string MultiCertificateBatchVo::getCertName() const
{
    return certName_;
}

void MultiCertificateBatchVo::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool MultiCertificateBatchVo::certNameIsSet() const
{
    return certNameIsSet_;
}

void MultiCertificateBatchVo::unsetcertName()
{
    certNameIsSet_ = false;
}

int32_t MultiCertificateBatchVo::getCertificateCategory() const
{
    return certificateCategory_;
}

void MultiCertificateBatchVo::setCertificateCategory(int32_t value)
{
    certificateCategory_ = value;
    certificateCategoryIsSet_ = true;
}

bool MultiCertificateBatchVo::certificateCategoryIsSet() const
{
    return certificateCategoryIsSet_;
}

void MultiCertificateBatchVo::unsetcertificateCategory()
{
    certificateCategoryIsSet_ = false;
}

int32_t MultiCertificateBatchVo::getCertificateType() const
{
    return certificateType_;
}

void MultiCertificateBatchVo::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool MultiCertificateBatchVo::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void MultiCertificateBatchVo::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string MultiCertificateBatchVo::getCertificate() const
{
    return certificate_;
}

void MultiCertificateBatchVo::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool MultiCertificateBatchVo::certificateIsSet() const
{
    return certificateIsSet_;
}

void MultiCertificateBatchVo::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string MultiCertificateBatchVo::getPrivateKey() const
{
    return privateKey_;
}

void MultiCertificateBatchVo::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool MultiCertificateBatchVo::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void MultiCertificateBatchVo::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

std::string MultiCertificateBatchVo::getEncCertificate() const
{
    return encCertificate_;
}

void MultiCertificateBatchVo::setEncCertificate(const std::string& value)
{
    encCertificate_ = value;
    encCertificateIsSet_ = true;
}

bool MultiCertificateBatchVo::encCertificateIsSet() const
{
    return encCertificateIsSet_;
}

void MultiCertificateBatchVo::unsetencCertificate()
{
    encCertificateIsSet_ = false;
}

std::string MultiCertificateBatchVo::getEncPrivateKey() const
{
    return encPrivateKey_;
}

void MultiCertificateBatchVo::setEncPrivateKey(const std::string& value)
{
    encPrivateKey_ = value;
    encPrivateKeyIsSet_ = true;
}

bool MultiCertificateBatchVo::encPrivateKeyIsSet() const
{
    return encPrivateKeyIsSet_;
}

void MultiCertificateBatchVo::unsetencPrivateKey()
{
    encPrivateKeyIsSet_ = false;
}

std::string MultiCertificateBatchVo::getScmCertificateId() const
{
    return scmCertificateId_;
}

void MultiCertificateBatchVo::setScmCertificateId(const std::string& value)
{
    scmCertificateId_ = value;
    scmCertificateIdIsSet_ = true;
}

bool MultiCertificateBatchVo::scmCertificateIdIsSet() const
{
    return scmCertificateIdIsSet_;
}

void MultiCertificateBatchVo::unsetscmCertificateId()
{
    scmCertificateIdIsSet_ = false;
}

}
}
}
}
}


