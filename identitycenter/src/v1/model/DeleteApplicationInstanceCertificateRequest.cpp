

#include "huaweicloud/identitycenter/v1/model/DeleteApplicationInstanceCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteApplicationInstanceCertificateRequest::DeleteApplicationInstanceCertificateRequest()
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

DeleteApplicationInstanceCertificateRequest::~DeleteApplicationInstanceCertificateRequest() = default;

void DeleteApplicationInstanceCertificateRequest::validate()
{
}

web::json::value DeleteApplicationInstanceCertificateRequest::toJson() const
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
bool DeleteApplicationInstanceCertificateRequest::fromJson(const web::json::value& val)
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


std::string DeleteApplicationInstanceCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteApplicationInstanceCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteApplicationInstanceCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteApplicationInstanceCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteApplicationInstanceCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteApplicationInstanceCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteApplicationInstanceCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteApplicationInstanceCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteApplicationInstanceCertificateRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void DeleteApplicationInstanceCertificateRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool DeleteApplicationInstanceCertificateRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void DeleteApplicationInstanceCertificateRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

std::string DeleteApplicationInstanceCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void DeleteApplicationInstanceCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DeleteApplicationInstanceCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DeleteApplicationInstanceCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


