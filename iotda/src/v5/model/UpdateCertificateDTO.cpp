

#include "huaweicloud/iotda/v5/model/UpdateCertificateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateCertificateDTO::UpdateCertificateDTO()
{
    provisionEnable_ = false;
    provisionEnableIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    ocspEnable_ = false;
    ocspEnableIsSet_ = false;
    ocspSslEnable_ = false;
    ocspSslEnableIsSet_ = false;
    ocspServerCaId_ = "";
    ocspServerCaIdIsSet_ = false;
}

UpdateCertificateDTO::~UpdateCertificateDTO() = default;

void UpdateCertificateDTO::validate()
{
}

web::json::value UpdateCertificateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(provisionEnableIsSet_) {
        val[utility::conversions::to_string_t("provision_enable")] = ModelBase::toJson(provisionEnable_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(ocspEnableIsSet_) {
        val[utility::conversions::to_string_t("ocsp_enable")] = ModelBase::toJson(ocspEnable_);
    }
    if(ocspSslEnableIsSet_) {
        val[utility::conversions::to_string_t("ocsp_ssl_enable")] = ModelBase::toJson(ocspSslEnable_);
    }
    if(ocspServerCaIdIsSet_) {
        val[utility::conversions::to_string_t("ocsp_server_ca_id")] = ModelBase::toJson(ocspServerCaId_);
    }

    return val;
}
bool UpdateCertificateDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("ocsp_ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspSslEnable(refVal);
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
    return ok;
}


bool UpdateCertificateDTO::isProvisionEnable() const
{
    return provisionEnable_;
}

void UpdateCertificateDTO::setProvisionEnable(bool value)
{
    provisionEnable_ = value;
    provisionEnableIsSet_ = true;
}

bool UpdateCertificateDTO::provisionEnableIsSet() const
{
    return provisionEnableIsSet_;
}

void UpdateCertificateDTO::unsetprovisionEnable()
{
    provisionEnableIsSet_ = false;
}

std::string UpdateCertificateDTO::getTemplateId() const
{
    return templateId_;
}

void UpdateCertificateDTO::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateCertificateDTO::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateCertificateDTO::unsettemplateId()
{
    templateIdIsSet_ = false;
}

bool UpdateCertificateDTO::isOcspEnable() const
{
    return ocspEnable_;
}

void UpdateCertificateDTO::setOcspEnable(bool value)
{
    ocspEnable_ = value;
    ocspEnableIsSet_ = true;
}

bool UpdateCertificateDTO::ocspEnableIsSet() const
{
    return ocspEnableIsSet_;
}

void UpdateCertificateDTO::unsetocspEnable()
{
    ocspEnableIsSet_ = false;
}

bool UpdateCertificateDTO::isOcspSslEnable() const
{
    return ocspSslEnable_;
}

void UpdateCertificateDTO::setOcspSslEnable(bool value)
{
    ocspSslEnable_ = value;
    ocspSslEnableIsSet_ = true;
}

bool UpdateCertificateDTO::ocspSslEnableIsSet() const
{
    return ocspSslEnableIsSet_;
}

void UpdateCertificateDTO::unsetocspSslEnable()
{
    ocspSslEnableIsSet_ = false;
}

std::string UpdateCertificateDTO::getOcspServerCaId() const
{
    return ocspServerCaId_;
}

void UpdateCertificateDTO::setOcspServerCaId(const std::string& value)
{
    ocspServerCaId_ = value;
    ocspServerCaIdIsSet_ = true;
}

bool UpdateCertificateDTO::ocspServerCaIdIsSet() const
{
    return ocspServerCaIdIsSet_;
}

void UpdateCertificateDTO::unsetocspServerCaId()
{
    ocspServerCaIdIsSet_ = false;
}

}
}
}
}
}


