

#include "huaweicloud/identitycenter/v1/model/CreateApplicationInstanceCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationInstanceCertificateRequest::CreateApplicationInstanceCertificateRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
}

CreateApplicationInstanceCertificateRequest::~CreateApplicationInstanceCertificateRequest() = default;

void CreateApplicationInstanceCertificateRequest::validate()
{
}

web::json::value CreateApplicationInstanceCertificateRequest::toJson() const
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

    return val;
}
bool CreateApplicationInstanceCertificateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateApplicationInstanceCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateApplicationInstanceCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateApplicationInstanceCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateApplicationInstanceCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateApplicationInstanceCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateApplicationInstanceCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateApplicationInstanceCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateApplicationInstanceCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateApplicationInstanceCertificateRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void CreateApplicationInstanceCertificateRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool CreateApplicationInstanceCertificateRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void CreateApplicationInstanceCertificateRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

}
}
}
}
}


