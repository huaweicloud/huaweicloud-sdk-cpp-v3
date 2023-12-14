

#include "huaweicloud/live/v1/model/UpdateGeoBlockingConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateGeoBlockingConfigRequest::UpdateGeoBlockingConfigRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGeoBlockingConfigRequest::~UpdateGeoBlockingConfigRequest() = default;

void UpdateGeoBlockingConfigRequest::validate()
{
}

web::json::value UpdateGeoBlockingConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGeoBlockingConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GeoBlockingConfigInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGeoBlockingConfigRequest::getPlayDomain() const
{
    return playDomain_;
}

void UpdateGeoBlockingConfigRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool UpdateGeoBlockingConfigRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void UpdateGeoBlockingConfigRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

GeoBlockingConfigInfo UpdateGeoBlockingConfigRequest::getBody() const
{
    return body_;
}

void UpdateGeoBlockingConfigRequest::setBody(const GeoBlockingConfigInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGeoBlockingConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGeoBlockingConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


