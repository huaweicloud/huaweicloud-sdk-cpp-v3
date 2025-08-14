

#include "huaweicloud/iotda/v5/model/QueryDeviceProxySimplify.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




QueryDeviceProxySimplify::QueryDeviceProxySimplify()
{
    proxyId_ = "";
    proxyIdIsSet_ = false;
    proxyName_ = "";
    proxyNameIsSet_ = false;
    effectiveTimeRangeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

QueryDeviceProxySimplify::~QueryDeviceProxySimplify() = default;

void QueryDeviceProxySimplify::validate()
{
}

web::json::value QueryDeviceProxySimplify::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(proxyNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_name")] = ModelBase::toJson(proxyName_);
    }
    if(effectiveTimeRangeIsSet_) {
        val[utility::conversions::to_string_t("effective_time_range")] = ModelBase::toJson(effectiveTimeRange_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool QueryDeviceProxySimplify::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("effective_time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_time_range"));
        if(!fieldValue.is_null())
        {
            EffectiveTimeRangeResponseDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveTimeRange(refVal);
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
    return ok;
}


std::string QueryDeviceProxySimplify::getProxyId() const
{
    return proxyId_;
}

void QueryDeviceProxySimplify::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool QueryDeviceProxySimplify::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void QueryDeviceProxySimplify::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string QueryDeviceProxySimplify::getProxyName() const
{
    return proxyName_;
}

void QueryDeviceProxySimplify::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool QueryDeviceProxySimplify::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void QueryDeviceProxySimplify::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

EffectiveTimeRangeResponseDTO QueryDeviceProxySimplify::getEffectiveTimeRange() const
{
    return effectiveTimeRange_;
}

void QueryDeviceProxySimplify::setEffectiveTimeRange(const EffectiveTimeRangeResponseDTO& value)
{
    effectiveTimeRange_ = value;
    effectiveTimeRangeIsSet_ = true;
}

bool QueryDeviceProxySimplify::effectiveTimeRangeIsSet() const
{
    return effectiveTimeRangeIsSet_;
}

void QueryDeviceProxySimplify::unseteffectiveTimeRange()
{
    effectiveTimeRangeIsSet_ = false;
}

std::string QueryDeviceProxySimplify::getAppId() const
{
    return appId_;
}

void QueryDeviceProxySimplify::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool QueryDeviceProxySimplify::appIdIsSet() const
{
    return appIdIsSet_;
}

void QueryDeviceProxySimplify::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


