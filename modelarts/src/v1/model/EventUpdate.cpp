

#include "huaweicloud/modelarts/v1/model/EventUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




EventUpdate::EventUpdate()
{
    notBefore_ = "";
    notBeforeIsSet_ = false;
    redeployConfigIsSet_ = false;
}

EventUpdate::~EventUpdate() = default;

void EventUpdate::validate()
{
}

web::json::value EventUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("notBefore")] = ModelBase::toJson(notBefore_);
    }
    if(redeployConfigIsSet_) {
        val[utility::conversions::to_string_t("redeployConfig")] = ModelBase::toJson(redeployConfig_);
    }

    return val;
}
bool EventUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notBefore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notBefore"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redeployConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redeployConfig"));
        if(!fieldValue.is_null())
        {
            RedeployConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedeployConfig(refVal);
        }
    }
    return ok;
}


std::string EventUpdate::getNotBefore() const
{
    return notBefore_;
}

void EventUpdate::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool EventUpdate::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void EventUpdate::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

RedeployConfig EventUpdate::getRedeployConfig() const
{
    return redeployConfig_;
}

void EventUpdate::setRedeployConfig(const RedeployConfig& value)
{
    redeployConfig_ = value;
    redeployConfigIsSet_ = true;
}

bool EventUpdate::redeployConfigIsSet() const
{
    return redeployConfigIsSet_;
}

void EventUpdate::unsetredeployConfig()
{
    redeployConfigIsSet_ = false;
}

}
}
}
}
}


