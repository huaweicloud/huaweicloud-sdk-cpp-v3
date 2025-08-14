

#include "huaweicloud/identitycenter/v1/model/CreateApplicationAssignmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationAssignmentRequest::CreateApplicationAssignmentRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateApplicationAssignmentRequest::~CreateApplicationAssignmentRequest() = default;

void CreateApplicationAssignmentRequest::validate()
{
}

web::json::value CreateApplicationAssignmentRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateApplicationAssignmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateApplicationAssignmentReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateApplicationAssignmentRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateApplicationAssignmentRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateApplicationAssignmentRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateApplicationAssignmentRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateApplicationAssignmentRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateApplicationAssignmentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateApplicationAssignmentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateApplicationAssignmentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateApplicationAssignmentRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void CreateApplicationAssignmentRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool CreateApplicationAssignmentRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void CreateApplicationAssignmentRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

CreateApplicationAssignmentReqBody CreateApplicationAssignmentRequest::getBody() const
{
    return body_;
}

void CreateApplicationAssignmentRequest::setBody(const CreateApplicationAssignmentReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateApplicationAssignmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateApplicationAssignmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


