

#include "huaweicloud/iotda/v5/model/ShowDeviceProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceProxyRequest::ShowDeviceProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

ShowDeviceProxyRequest::~ShowDeviceProxyRequest() = default;

void ShowDeviceProxyRequest::validate()
{
}

web::json::value ShowDeviceProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }

    return val;
}
bool ShowDeviceProxyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceProxyRequest::getProxyId() const
{
    return proxyId_;
}

void ShowDeviceProxyRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowDeviceProxyRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowDeviceProxyRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


