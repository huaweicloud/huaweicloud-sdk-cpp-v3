

#include "huaweicloud/live/v1/model/ListGeoBlockingConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListGeoBlockingConfigResponse::ListGeoBlockingConfigResponse()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    appsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGeoBlockingConfigResponse::~ListGeoBlockingConfigResponse() = default;

void ListGeoBlockingConfigResponse::validate()
{
}

web::json::value ListGeoBlockingConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(appsIsSet_) {
        val[utility::conversions::to_string_t("apps")] = ModelBase::toJson(apps_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGeoBlockingConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apps"));
        if(!fieldValue.is_null())
        {
            std::vector<GeoBlockingConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListGeoBlockingConfigResponse::getPlayDomain() const
{
    return playDomain_;
}

void ListGeoBlockingConfigResponse::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ListGeoBlockingConfigResponse::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ListGeoBlockingConfigResponse::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::vector<GeoBlockingConfigInfo>& ListGeoBlockingConfigResponse::getApps()
{
    return apps_;
}

void ListGeoBlockingConfigResponse::setApps(const std::vector<GeoBlockingConfigInfo>& value)
{
    apps_ = value;
    appsIsSet_ = true;
}

bool ListGeoBlockingConfigResponse::appsIsSet() const
{
    return appsIsSet_;
}

void ListGeoBlockingConfigResponse::unsetapps()
{
    appsIsSet_ = false;
}

std::string ListGeoBlockingConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGeoBlockingConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGeoBlockingConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGeoBlockingConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


