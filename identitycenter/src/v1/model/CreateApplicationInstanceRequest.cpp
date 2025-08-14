

#include "huaweicloud/identitycenter/v1/model/CreateApplicationInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationInstanceRequest::CreateApplicationInstanceRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateApplicationInstanceRequest::~CreateApplicationInstanceRequest() = default;

void CreateApplicationInstanceRequest::validate()
{
}

web::json::value CreateApplicationInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateApplicationInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateApplicationInstanceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateApplicationInstanceRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateApplicationInstanceRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateApplicationInstanceRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateApplicationInstanceRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CreateApplicationInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateApplicationInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateApplicationInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateApplicationInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateApplicationInstanceReqBody CreateApplicationInstanceRequest::getBody() const
{
    return body_;
}

void CreateApplicationInstanceRequest::setBody(const CreateApplicationInstanceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateApplicationInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateApplicationInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


