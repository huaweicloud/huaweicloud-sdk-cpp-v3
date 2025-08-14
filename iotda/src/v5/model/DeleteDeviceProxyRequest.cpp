

#include "huaweicloud/iotda/v5/model/DeleteDeviceProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceProxyRequest::DeleteDeviceProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

DeleteDeviceProxyRequest::~DeleteDeviceProxyRequest() = default;

void DeleteDeviceProxyRequest::validate()
{
}

web::json::value DeleteDeviceProxyRequest::toJson() const
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
bool DeleteDeviceProxyRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceProxyRequest::getProxyId() const
{
    return proxyId_;
}

void DeleteDeviceProxyRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool DeleteDeviceProxyRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void DeleteDeviceProxyRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


