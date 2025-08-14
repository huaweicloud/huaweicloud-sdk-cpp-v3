

#include "huaweicloud/iotda/v5/model/UpdateCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateCertificateResponse::UpdateCertificateResponse()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
    cnName_ = "";
    cnNameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    status_ = false;
    statusIsSet_ = false;
    verifyCode_ = "";
    verifyCodeIsSet_ = false;
    provisionEnable_ = false;
    provisionEnableIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    ocspEnable_ = false;
    ocspEnableIsSet_ = false;
    ocspServerCaId_ = "";
    ocspServerCaIdIsSet_ = false;
    ocspSslEnable_ = false;
    ocspSslEnableIsSet_ = false;
    createDate_ = "";
    createDateIsSet_ = false;
    effectiveDate_ = "";
    effectiveDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
}

UpdateCertificateResponse::~UpdateCertificateResponse() = default;

void UpdateCertificateResponse::validate()
{
}

web::json::value UpdateCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(cnNameIsSet_) {
        val[utility::conversions::to_string_t("cn_name")] = ModelBase::toJson(cnName_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(verifyCodeIsSet_) {
        val[utility::conversions::to_string_t("verify_code")] = ModelBase::toJson(verifyCode_);
    }
    if(provisionEnableIsSet_) {
        val[utility::conversions::to_string_t("provision_enable")] = ModelBase::toJson(provisionEnable_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(ocspEnableIsSet_) {
        val[utility::conversions::to_string_t("ocsp_enable")] = ModelBase::toJson(ocspEnable_);
    }
    if(ocspServerCaIdIsSet_) {
        val[utility::conversions::to_string_t("ocsp_server_ca_id")] = ModelBase::toJson(ocspServerCaId_);
    }
    if(ocspSslEnableIsSet_) {
        val[utility::conversions::to_string_t("ocsp_ssl_enable")] = ModelBase::toJson(ocspSslEnable_);
    }
    if(createDateIsSet_) {
        val[utility::conversions::to_string_t("create_date")] = ModelBase::toJson(createDate_);
    }
    if(effectiveDateIsSet_) {
        val[utility::conversions::to_string_t("effective_date")] = ModelBase::toJson(effectiveDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }

    return val;
}
bool UpdateCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cn_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provision_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provision_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvisionEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ocsp_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ocsp_server_ca_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_server_ca_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspServerCaId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ocsp_ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspSslEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    return ok;
}


std::string UpdateCertificateResponse::getCertificateId() const
{
    return certificateId_;
}

void UpdateCertificateResponse::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool UpdateCertificateResponse::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void UpdateCertificateResponse::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string UpdateCertificateResponse::getCnName() const
{
    return cnName_;
}

void UpdateCertificateResponse::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool UpdateCertificateResponse::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void UpdateCertificateResponse::unsetcnName()
{
    cnNameIsSet_ = false;
}

std::string UpdateCertificateResponse::getOwner() const
{
    return owner_;
}

void UpdateCertificateResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UpdateCertificateResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void UpdateCertificateResponse::unsetowner()
{
    ownerIsSet_ = false;
}

bool UpdateCertificateResponse::isStatus() const
{
    return status_;
}

void UpdateCertificateResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateCertificateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateCertificateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateCertificateResponse::getVerifyCode() const
{
    return verifyCode_;
}

void UpdateCertificateResponse::setVerifyCode(const std::string& value)
{
    verifyCode_ = value;
    verifyCodeIsSet_ = true;
}

bool UpdateCertificateResponse::verifyCodeIsSet() const
{
    return verifyCodeIsSet_;
}

void UpdateCertificateResponse::unsetverifyCode()
{
    verifyCodeIsSet_ = false;
}

bool UpdateCertificateResponse::isProvisionEnable() const
{
    return provisionEnable_;
}

void UpdateCertificateResponse::setProvisionEnable(bool value)
{
    provisionEnable_ = value;
    provisionEnableIsSet_ = true;
}

bool UpdateCertificateResponse::provisionEnableIsSet() const
{
    return provisionEnableIsSet_;
}

void UpdateCertificateResponse::unsetprovisionEnable()
{
    provisionEnableIsSet_ = false;
}

std::string UpdateCertificateResponse::getTemplateId() const
{
    return templateId_;
}

void UpdateCertificateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateCertificateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateCertificateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

bool UpdateCertificateResponse::isOcspEnable() const
{
    return ocspEnable_;
}

void UpdateCertificateResponse::setOcspEnable(bool value)
{
    ocspEnable_ = value;
    ocspEnableIsSet_ = true;
}

bool UpdateCertificateResponse::ocspEnableIsSet() const
{
    return ocspEnableIsSet_;
}

void UpdateCertificateResponse::unsetocspEnable()
{
    ocspEnableIsSet_ = false;
}

std::string UpdateCertificateResponse::getOcspServerCaId() const
{
    return ocspServerCaId_;
}

void UpdateCertificateResponse::setOcspServerCaId(const std::string& value)
{
    ocspServerCaId_ = value;
    ocspServerCaIdIsSet_ = true;
}

bool UpdateCertificateResponse::ocspServerCaIdIsSet() const
{
    return ocspServerCaIdIsSet_;
}

void UpdateCertificateResponse::unsetocspServerCaId()
{
    ocspServerCaIdIsSet_ = false;
}

bool UpdateCertificateResponse::isOcspSslEnable() const
{
    return ocspSslEnable_;
}

void UpdateCertificateResponse::setOcspSslEnable(bool value)
{
    ocspSslEnable_ = value;
    ocspSslEnableIsSet_ = true;
}

bool UpdateCertificateResponse::ocspSslEnableIsSet() const
{
    return ocspSslEnableIsSet_;
}

void UpdateCertificateResponse::unsetocspSslEnable()
{
    ocspSslEnableIsSet_ = false;
}

std::string UpdateCertificateResponse::getCreateDate() const
{
    return createDate_;
}

void UpdateCertificateResponse::setCreateDate(const std::string& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool UpdateCertificateResponse::createDateIsSet() const
{
    return createDateIsSet_;
}

void UpdateCertificateResponse::unsetcreateDate()
{
    createDateIsSet_ = false;
}

std::string UpdateCertificateResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void UpdateCertificateResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool UpdateCertificateResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void UpdateCertificateResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string UpdateCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void UpdateCertificateResponse::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool UpdateCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void UpdateCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

}
}
}
}
}


