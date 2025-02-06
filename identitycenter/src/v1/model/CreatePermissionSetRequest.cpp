

#include "huaweicloud/identitycenter/v1/model/CreatePermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreatePermissionSetRequest::CreatePermissionSetRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePermissionSetRequest::~CreatePermissionSetRequest() = default;

void CreatePermissionSetRequest::validate()
{
}

web::json::value CreatePermissionSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePermissionSetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void CreatePermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreatePermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreatePermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreatePermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreatePermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreatePermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreatePermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreatePermissionSetReqBody CreatePermissionSetRequest::getBody() const
{
    return body_;
}

void CreatePermissionSetRequest::setBody(const CreatePermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


