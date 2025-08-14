

#include "huaweicloud/iotda/v5/model/ListDeviceProxiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceProxiesRequest::ListDeviceProxiesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    proxyName_ = "";
    proxyNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDeviceProxiesRequest::~ListDeviceProxiesRequest() = default;

void ListDeviceProxiesRequest::validate()
{
}

web::json::value ListDeviceProxiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(proxyNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_name")] = ModelBase::toJson(proxyName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDeviceProxiesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListDeviceProxiesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceProxiesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceProxiesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceProxiesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceProxiesRequest::getAppId() const
{
    return appId_;
}

void ListDeviceProxiesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListDeviceProxiesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListDeviceProxiesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListDeviceProxiesRequest::getProxyName() const
{
    return proxyName_;
}

void ListDeviceProxiesRequest::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool ListDeviceProxiesRequest::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void ListDeviceProxiesRequest::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

int32_t ListDeviceProxiesRequest::getLimit() const
{
    return limit_;
}

void ListDeviceProxiesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDeviceProxiesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDeviceProxiesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDeviceProxiesRequest::getMarker() const
{
    return marker_;
}

void ListDeviceProxiesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDeviceProxiesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDeviceProxiesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDeviceProxiesRequest::getOffset() const
{
    return offset_;
}

void ListDeviceProxiesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDeviceProxiesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDeviceProxiesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


