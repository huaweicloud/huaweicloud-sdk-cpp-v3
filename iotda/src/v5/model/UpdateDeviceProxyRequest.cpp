

#include "huaweicloud/iotda/v5/model/UpdateDeviceProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceProxyRequest::UpdateDeviceProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceProxyRequest::~UpdateDeviceProxyRequest() = default;

void UpdateDeviceProxyRequest::validate()
{
}

web::json::value UpdateDeviceProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeviceProxyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDeviceProxy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceProxyRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateDeviceProxyRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateDeviceProxyRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateDeviceProxyRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

UpdateDeviceProxy UpdateDeviceProxyRequest::getBody() const
{
    return body_;
}

void UpdateDeviceProxyRequest::setBody(const UpdateDeviceProxy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


