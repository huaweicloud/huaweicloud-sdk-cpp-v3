

#include "huaweicloud/iotda/v5/model/ShowCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowCertificateResponse::ShowCertificateResponse()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
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
    content_ = "";
    contentIsSet_ = false;
}

ShowCertificateResponse::~ShowCertificateResponse() = default;

void ShowCertificateResponse::validate()
{
}

web::json::value ShowCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ShowCertificateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string ShowCertificateResponse::getCertificateId() const
{
    return certificateId_;
}

void ShowCertificateResponse::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool ShowCertificateResponse::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void ShowCertificateResponse::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string ShowCertificateResponse::getName() const
{
    return name_;
}

void ShowCertificateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowCertificateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowCertificateResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowCertificateResponse::getCnName() const
{
    return cnName_;
}

void ShowCertificateResponse::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool ShowCertificateResponse::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void ShowCertificateResponse::unsetcnName()
{
    cnNameIsSet_ = false;
}

std::string ShowCertificateResponse::getOwner() const
{
    return owner_;
}

void ShowCertificateResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ShowCertificateResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void ShowCertificateResponse::unsetowner()
{
    ownerIsSet_ = false;
}

bool ShowCertificateResponse::isStatus() const
{
    return status_;
}

void ShowCertificateResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCertificateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCertificateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowCertificateResponse::getVerifyCode() const
{
    return verifyCode_;
}

void ShowCertificateResponse::setVerifyCode(const std::string& value)
{
    verifyCode_ = value;
    verifyCodeIsSet_ = true;
}

bool ShowCertificateResponse::verifyCodeIsSet() const
{
    return verifyCodeIsSet_;
}

void ShowCertificateResponse::unsetverifyCode()
{
    verifyCodeIsSet_ = false;
}

bool ShowCertificateResponse::isProvisionEnable() const
{
    return provisionEnable_;
}

void ShowCertificateResponse::setProvisionEnable(bool value)
{
    provisionEnable_ = value;
    provisionEnableIsSet_ = true;
}

bool ShowCertificateResponse::provisionEnableIsSet() const
{
    return provisionEnableIsSet_;
}

void ShowCertificateResponse::unsetprovisionEnable()
{
    provisionEnableIsSet_ = false;
}

std::string ShowCertificateResponse::getTemplateId() const
{
    return templateId_;
}

void ShowCertificateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowCertificateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowCertificateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

bool ShowCertificateResponse::isOcspEnable() const
{
    return ocspEnable_;
}

void ShowCertificateResponse::setOcspEnable(bool value)
{
    ocspEnable_ = value;
    ocspEnableIsSet_ = true;
}

bool ShowCertificateResponse::ocspEnableIsSet() const
{
    return ocspEnableIsSet_;
}

void ShowCertificateResponse::unsetocspEnable()
{
    ocspEnableIsSet_ = false;
}

std::string ShowCertificateResponse::getOcspServerCaId() const
{
    return ocspServerCaId_;
}

void ShowCertificateResponse::setOcspServerCaId(const std::string& value)
{
    ocspServerCaId_ = value;
    ocspServerCaIdIsSet_ = true;
}

bool ShowCertificateResponse::ocspServerCaIdIsSet() const
{
    return ocspServerCaIdIsSet_;
}

void ShowCertificateResponse::unsetocspServerCaId()
{
    ocspServerCaIdIsSet_ = false;
}

bool ShowCertificateResponse::isOcspSslEnable() const
{
    return ocspSslEnable_;
}

void ShowCertificateResponse::setOcspSslEnable(bool value)
{
    ocspSslEnable_ = value;
    ocspSslEnableIsSet_ = true;
}

bool ShowCertificateResponse::ocspSslEnableIsSet() const
{
    return ocspSslEnableIsSet_;
}

void ShowCertificateResponse::unsetocspSslEnable()
{
    ocspSslEnableIsSet_ = false;
}

std::string ShowCertificateResponse::getCreateDate() const
{
    return createDate_;
}

void ShowCertificateResponse::setCreateDate(const std::string& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool ShowCertificateResponse::createDateIsSet() const
{
    return createDateIsSet_;
}

void ShowCertificateResponse::unsetcreateDate()
{
    createDateIsSet_ = false;
}

std::string ShowCertificateResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void ShowCertificateResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool ShowCertificateResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void ShowCertificateResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string ShowCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void ShowCertificateResponse::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool ShowCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void ShowCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string ShowCertificateResponse::getContent() const
{
    return content_;
}

void ShowCertificateResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowCertificateResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowCertificateResponse::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


