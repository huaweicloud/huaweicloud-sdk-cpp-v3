

#include "huaweicloud/live/v1/model/ShowPullSourcesConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowPullSourcesConfigRequest::ShowPullSourcesConfigRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
}

ShowPullSourcesConfigRequest::~ShowPullSourcesConfigRequest() = default;

void ShowPullSourcesConfigRequest::validate()
{
}

web::json::value ShowPullSourcesConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }

    return val;
}
bool ShowPullSourcesConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowPullSourcesConfigRequest::getPlayDomain() const
{
    return playDomain_;
}

void ShowPullSourcesConfigRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ShowPullSourcesConfigRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ShowPullSourcesConfigRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

}
}
}
}
}


