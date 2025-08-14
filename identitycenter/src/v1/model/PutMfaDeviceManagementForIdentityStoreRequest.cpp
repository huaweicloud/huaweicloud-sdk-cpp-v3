

#include "huaweicloud/identitycenter/v1/model/PutMfaDeviceManagementForIdentityStoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PutMfaDeviceManagementForIdentityStoreRequest::PutMfaDeviceManagementForIdentityStoreRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

PutMfaDeviceManagementForIdentityStoreRequest::~PutMfaDeviceManagementForIdentityStoreRequest() = default;

void PutMfaDeviceManagementForIdentityStoreRequest::validate()
{
}

web::json::value PutMfaDeviceManagementForIdentityStoreRequest::toJson() const
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
bool PutMfaDeviceManagementForIdentityStoreRequest::fromJson(const web::json::value& val)
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
            PutMfaDeviceManagementForDirectoryReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PutMfaDeviceManagementForIdentityStoreRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void PutMfaDeviceManagementForIdentityStoreRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool PutMfaDeviceManagementForIdentityStoreRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void PutMfaDeviceManagementForIdentityStoreRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string PutMfaDeviceManagementForIdentityStoreRequest::getInstanceId() const
{
    return instanceId_;
}

void PutMfaDeviceManagementForIdentityStoreRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PutMfaDeviceManagementForIdentityStoreRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PutMfaDeviceManagementForIdentityStoreRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PutMfaDeviceManagementForDirectoryReqBody PutMfaDeviceManagementForIdentityStoreRequest::getBody() const
{
    return body_;
}

void PutMfaDeviceManagementForIdentityStoreRequest::setBody(const PutMfaDeviceManagementForDirectoryReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PutMfaDeviceManagementForIdentityStoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PutMfaDeviceManagementForIdentityStoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


