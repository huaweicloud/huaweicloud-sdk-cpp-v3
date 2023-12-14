

#include "huaweicloud/live/v1/model/ListGeoBlockingConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListGeoBlockingConfigRequest::ListGeoBlockingConfigRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
}

ListGeoBlockingConfigRequest::~ListGeoBlockingConfigRequest() = default;

void ListGeoBlockingConfigRequest::validate()
{
}

web::json::value ListGeoBlockingConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }

    return val;
}
bool ListGeoBlockingConfigRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListGeoBlockingConfigRequest::getPlayDomain() const
{
    return playDomain_;
}

void ListGeoBlockingConfigRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ListGeoBlockingConfigRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ListGeoBlockingConfigRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

}
}
}
}
}


