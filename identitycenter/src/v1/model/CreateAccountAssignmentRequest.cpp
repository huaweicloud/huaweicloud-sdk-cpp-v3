

#include "huaweicloud/identitycenter/v1/model/CreateAccountAssignmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateAccountAssignmentRequest::CreateAccountAssignmentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAccountAssignmentRequest::~CreateAccountAssignmentRequest() = default;

void CreateAccountAssignmentRequest::validate()
{
}

web::json::value CreateAccountAssignmentRequest::toJson() const
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
bool CreateAccountAssignmentRequest::fromJson(const web::json::value& val)
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
            CreateAccountAssignmentReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAccountAssignmentRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAccountAssignmentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAccountAssignmentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAccountAssignmentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateAccountAssignmentRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateAccountAssignmentRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateAccountAssignmentRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateAccountAssignmentRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateAccountAssignmentReqBody CreateAccountAssignmentRequest::getBody() const
{
    return body_;
}

void CreateAccountAssignmentRequest::setBody(const CreateAccountAssignmentReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccountAssignmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccountAssignmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


