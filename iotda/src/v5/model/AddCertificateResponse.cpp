

#include "huaweicloud/iotda/v5/model/AddCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddCertificateResponse::AddCertificateResponse()
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

AddCertificateResponse::~AddCertificateResponse() = default;

void AddCertificateResponse::validate()
{
}

web::json::value AddCertificateResponse::toJson() const
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
bool AddCertificateResponse::fromJson(const web::json::value& val)
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


std::string AddCertificateResponse::getCertificateId() const
{
    return certificateId_;
}

void AddCertificateResponse::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool AddCertificateResponse::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void AddCertificateResponse::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string AddCertificateResponse::getCnName() const
{
    return cnName_;
}

void AddCertificateResponse::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool AddCertificateResponse::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void AddCertificateResponse::unsetcnName()
{
    cnNameIsSet_ = false;
}

std::string AddCertificateResponse::getOwner() const
{
    return owner_;
}

void AddCertificateResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool AddCertificateResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void AddCertificateResponse::unsetowner()
{
    ownerIsSet_ = false;
}

bool AddCertificateResponse::isStatus() const
{
    return status_;
}

void AddCertificateResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddCertificateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddCertificateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AddCertificateResponse::getVerifyCode() const
{
    return verifyCode_;
}

void AddCertificateResponse::setVerifyCode(const std::string& value)
{
    verifyCode_ = value;
    verifyCodeIsSet_ = true;
}

bool AddCertificateResponse::verifyCodeIsSet() const
{
    return verifyCodeIsSet_;
}

void AddCertificateResponse::unsetverifyCode()
{
    verifyCodeIsSet_ = false;
}

bool AddCertificateResponse::isProvisionEnable() const
{
    return provisionEnable_;
}

void AddCertificateResponse::setProvisionEnable(bool value)
{
    provisionEnable_ = value;
    provisionEnableIsSet_ = true;
}

bool AddCertificateResponse::provisionEnableIsSet() const
{
    return provisionEnableIsSet_;
}

void AddCertificateResponse::unsetprovisionEnable()
{
    provisionEnableIsSet_ = false;
}

std::string AddCertificateResponse::getTemplateId() const
{
    return templateId_;
}

void AddCertificateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool AddCertificateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void AddCertificateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

bool AddCertificateResponse::isOcspEnable() const
{
    return ocspEnable_;
}

void AddCertificateResponse::setOcspEnable(bool value)
{
    ocspEnable_ = value;
    ocspEnableIsSet_ = true;
}

bool AddCertificateResponse::ocspEnableIsSet() const
{
    return ocspEnableIsSet_;
}

void AddCertificateResponse::unsetocspEnable()
{
    ocspEnableIsSet_ = false;
}

std::string AddCertificateResponse::getOcspServerCaId() const
{
    return ocspServerCaId_;
}

void AddCertificateResponse::setOcspServerCaId(const std::string& value)
{
    ocspServerCaId_ = value;
    ocspServerCaIdIsSet_ = true;
}

bool AddCertificateResponse::ocspServerCaIdIsSet() const
{
    return ocspServerCaIdIsSet_;
}

void AddCertificateResponse::unsetocspServerCaId()
{
    ocspServerCaIdIsSet_ = false;
}

bool AddCertificateResponse::isOcspSslEnable() const
{
    return ocspSslEnable_;
}

void AddCertificateResponse::setOcspSslEnable(bool value)
{
    ocspSslEnable_ = value;
    ocspSslEnableIsSet_ = true;
}

bool AddCertificateResponse::ocspSslEnableIsSet() const
{
    return ocspSslEnableIsSet_;
}

void AddCertificateResponse::unsetocspSslEnable()
{
    ocspSslEnableIsSet_ = false;
}

std::string AddCertificateResponse::getCreateDate() const
{
    return createDate_;
}

void AddCertificateResponse::setCreateDate(const std::string& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool AddCertificateResponse::createDateIsSet() const
{
    return createDateIsSet_;
}

void AddCertificateResponse::unsetcreateDate()
{
    createDateIsSet_ = false;
}

std::string AddCertificateResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void AddCertificateResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool AddCertificateResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void AddCertificateResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string AddCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void AddCertificateResponse::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool AddCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void AddCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

}
}
}
}
}


