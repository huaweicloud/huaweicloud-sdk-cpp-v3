

#include "huaweicloud/iotda/v5/model/UpdateDeviceAuthorizerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceAuthorizerRequest::UpdateDeviceAuthorizerRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    authorizerId_ = "";
    authorizerIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceAuthorizerRequest::~UpdateDeviceAuthorizerRequest() = default;

void UpdateDeviceAuthorizerRequest::validate()
{
}

web::json::value UpdateDeviceAuthorizerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(authorizerIdIsSet_) {
        val[utility::conversions::to_string_t("authorizer_id")] = ModelBase::toJson(authorizerId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeviceAuthorizerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorizer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDeviceAuthorizer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceAuthorizerRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceAuthorizerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceAuthorizerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceAuthorizerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceAuthorizerRequest::getAuthorizerId() const
{
    return authorizerId_;
}

void UpdateDeviceAuthorizerRequest::setAuthorizerId(const std::string& value)
{
    authorizerId_ = value;
    authorizerIdIsSet_ = true;
}

bool UpdateDeviceAuthorizerRequest::authorizerIdIsSet() const
{
    return authorizerIdIsSet_;
}

void UpdateDeviceAuthorizerRequest::unsetauthorizerId()
{
    authorizerIdIsSet_ = false;
}

UpdateDeviceAuthorizer UpdateDeviceAuthorizerRequest::getBody() const
{
    return body_;
}

void UpdateDeviceAuthorizerRequest::setBody(const UpdateDeviceAuthorizer& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceAuthorizerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceAuthorizerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


