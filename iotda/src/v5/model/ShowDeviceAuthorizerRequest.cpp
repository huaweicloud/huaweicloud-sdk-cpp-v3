

#include "huaweicloud/iotda/v5/model/ShowDeviceAuthorizerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceAuthorizerRequest::ShowDeviceAuthorizerRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    authorizerId_ = "";
    authorizerIdIsSet_ = false;
}

ShowDeviceAuthorizerRequest::~ShowDeviceAuthorizerRequest() = default;

void ShowDeviceAuthorizerRequest::validate()
{
}

web::json::value ShowDeviceAuthorizerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(authorizerIdIsSet_) {
        val[utility::conversions::to_string_t("authorizer_id")] = ModelBase::toJson(authorizerId_);
    }

    return val;
}
bool ShowDeviceAuthorizerRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceAuthorizerRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceAuthorizerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceAuthorizerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceAuthorizerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceAuthorizerRequest::getAuthorizerId() const
{
    return authorizerId_;
}

void ShowDeviceAuthorizerRequest::setAuthorizerId(const std::string& value)
{
    authorizerId_ = value;
    authorizerIdIsSet_ = true;
}

bool ShowDeviceAuthorizerRequest::authorizerIdIsSet() const
{
    return authorizerIdIsSet_;
}

void ShowDeviceAuthorizerRequest::unsetauthorizerId()
{
    authorizerIdIsSet_ = false;
}

}
}
}
}
}


