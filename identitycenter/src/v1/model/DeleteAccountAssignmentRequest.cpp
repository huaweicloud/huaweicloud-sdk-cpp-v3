

#include "huaweicloud/identitycenter/v1/model/DeleteAccountAssignmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteAccountAssignmentRequest::DeleteAccountAssignmentRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteAccountAssignmentRequest::~DeleteAccountAssignmentRequest() = default;

void DeleteAccountAssignmentRequest::validate()
{
}

web::json::value DeleteAccountAssignmentRequest::toJson() const
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
bool DeleteAccountAssignmentRequest::fromJson(const web::json::value& val)
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
            DeleteAccountAssignmentReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteAccountAssignmentRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteAccountAssignmentRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteAccountAssignmentRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteAccountAssignmentRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteAccountAssignmentRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAccountAssignmentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAccountAssignmentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAccountAssignmentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteAccountAssignmentReqBody DeleteAccountAssignmentRequest::getBody() const
{
    return body_;
}

void DeleteAccountAssignmentRequest::setBody(const DeleteAccountAssignmentReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAccountAssignmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAccountAssignmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


