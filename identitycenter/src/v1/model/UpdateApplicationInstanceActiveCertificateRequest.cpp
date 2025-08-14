

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceActiveCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceActiveCertificateRequest::UpdateApplicationInstanceActiveCertificateRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

UpdateApplicationInstanceActiveCertificateRequest::~UpdateApplicationInstanceActiveCertificateRequest() = default;

void UpdateApplicationInstanceActiveCertificateRequest::validate()
{
}

web::json::value UpdateApplicationInstanceActiveCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }

    return val;
}
bool UpdateApplicationInstanceActiveCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationInstanceActiveCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateApplicationInstanceActiveCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateApplicationInstanceActiveCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateApplicationInstanceActiveCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateApplicationInstanceActiveCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateApplicationInstanceActiveCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceActiveCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateApplicationInstanceActiveCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateApplicationInstanceActiveCertificateRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void UpdateApplicationInstanceActiveCertificateRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceActiveCertificateRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void UpdateApplicationInstanceActiveCertificateRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

std::string UpdateApplicationInstanceActiveCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void UpdateApplicationInstanceActiveCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool UpdateApplicationInstanceActiveCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void UpdateApplicationInstanceActiveCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


