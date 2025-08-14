

#include "huaweicloud/identitycenter/v1/model/DisassociateProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DisassociateProfileRequest::DisassociateProfileRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateProfileRequest::~DisassociateProfileRequest() = default;

void DisassociateProfileRequest::validate()
{
}

web::json::value DisassociateProfileRequest::toJson() const
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
bool DisassociateProfileRequest::fromJson(const web::json::value& val)
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
            DisassociateProfileReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateProfileRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DisassociateProfileRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DisassociateProfileRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DisassociateProfileRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DisassociateProfileRequest::getInstanceId() const
{
    return instanceId_;
}

void DisassociateProfileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DisassociateProfileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DisassociateProfileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DisassociateProfileReqBody DisassociateProfileRequest::getBody() const
{
    return body_;
}

void DisassociateProfileRequest::setBody(const DisassociateProfileReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateProfileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateProfileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


