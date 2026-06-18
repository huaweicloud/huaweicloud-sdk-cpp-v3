

#include "huaweicloud/codeartsrepo/v4/model/WebHookEventCfgDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




WebHookEventCfgDto::WebHookEventCfgDto()
{
    eventType_ = "";
    eventTypeIsSet_ = false;
    cfgs_ = "";
    cfgsIsSet_ = false;
}

WebHookEventCfgDto::~WebHookEventCfgDto() = default;

void WebHookEventCfgDto::validate()
{
}

web::json::value WebHookEventCfgDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(cfgsIsSet_) {
        val[utility::conversions::to_string_t("cfgs")] = ModelBase::toJson(cfgs_);
    }

    return val;
}
bool WebHookEventCfgDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cfgs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCfgs(refVal);
        }
    }
    return ok;
}


std::string WebHookEventCfgDto::getEventType() const
{
    return eventType_;
}

void WebHookEventCfgDto::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool WebHookEventCfgDto::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void WebHookEventCfgDto::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string WebHookEventCfgDto::getCfgs() const
{
    return cfgs_;
}

void WebHookEventCfgDto::setCfgs(const std::string& value)
{
    cfgs_ = value;
    cfgsIsSet_ = true;
}

bool WebHookEventCfgDto::cfgsIsSet() const
{
    return cfgsIsSet_;
}

void WebHookEventCfgDto::unsetcfgs()
{
    cfgsIsSet_ = false;
}

}
}
}
}
}


