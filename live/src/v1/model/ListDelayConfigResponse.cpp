

#include "huaweicloud/live/v1/model/ListDelayConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListDelayConfigResponse::ListDelayConfigResponse()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    delayConfigIsSet_ = false;
}

ListDelayConfigResponse::~ListDelayConfigResponse() = default;

void ListDelayConfigResponse::validate()
{
}

web::json::value ListDelayConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(delayConfigIsSet_) {
        val[utility::conversions::to_string_t("delay_config")] = ModelBase::toJson(delayConfig_);
    }

    return val;
}
bool ListDelayConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("delay_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay_config"));
        if(!fieldValue.is_null())
        {
            std::vector<DelayConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayConfig(refVal);
        }
    }
    return ok;
}


std::string ListDelayConfigResponse::getPlayDomain() const
{
    return playDomain_;
}

void ListDelayConfigResponse::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ListDelayConfigResponse::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ListDelayConfigResponse::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::vector<DelayConfig>& ListDelayConfigResponse::getDelayConfig()
{
    return delayConfig_;
}

void ListDelayConfigResponse::setDelayConfig(const std::vector<DelayConfig>& value)
{
    delayConfig_ = value;
    delayConfigIsSet_ = true;
}

bool ListDelayConfigResponse::delayConfigIsSet() const
{
    return delayConfigIsSet_;
}

void ListDelayConfigResponse::unsetdelayConfig()
{
    delayConfigIsSet_ = false;
}

}
}
}
}
}


