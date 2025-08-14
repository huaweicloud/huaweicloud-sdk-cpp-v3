

#include "huaweicloud/iotda/v5/model/DeleteDeviceAuthorizerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceAuthorizerRequest::DeleteDeviceAuthorizerRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    authorizerId_ = "";
    authorizerIdIsSet_ = false;
}

DeleteDeviceAuthorizerRequest::~DeleteDeviceAuthorizerRequest() = default;

void DeleteDeviceAuthorizerRequest::validate()
{
}

web::json::value DeleteDeviceAuthorizerRequest::toJson() const
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
bool DeleteDeviceAuthorizerRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceAuthorizerRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceAuthorizerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceAuthorizerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceAuthorizerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceAuthorizerRequest::getAuthorizerId() const
{
    return authorizerId_;
}

void DeleteDeviceAuthorizerRequest::setAuthorizerId(const std::string& value)
{
    authorizerId_ = value;
    authorizerIdIsSet_ = true;
}

bool DeleteDeviceAuthorizerRequest::authorizerIdIsSet() const
{
    return authorizerIdIsSet_;
}

void DeleteDeviceAuthorizerRequest::unsetauthorizerId()
{
    authorizerIdIsSet_ = false;
}

}
}
}
}
}


