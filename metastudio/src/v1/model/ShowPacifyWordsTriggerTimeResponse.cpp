

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsTriggerTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsTriggerTimeResponse::ShowPacifyWordsTriggerTimeResponse()
{
    triggerTime_ = 0;
    triggerTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPacifyWordsTriggerTimeResponse::~ShowPacifyWordsTriggerTimeResponse() = default;

void ShowPacifyWordsTriggerTimeResponse::validate()
{
}

web::json::value ShowPacifyWordsTriggerTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerTimeIsSet_) {
        val[utility::conversions::to_string_t("trigger_time")] = ModelBase::toJson(triggerTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPacifyWordsTriggerTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerTime(refVal);
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


int32_t ShowPacifyWordsTriggerTimeResponse::getTriggerTime() const
{
    return triggerTime_;
}

void ShowPacifyWordsTriggerTimeResponse::setTriggerTime(int32_t value)
{
    triggerTime_ = value;
    triggerTimeIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeResponse::triggerTimeIsSet() const
{
    return triggerTimeIsSet_;
}

void ShowPacifyWordsTriggerTimeResponse::unsettriggerTime()
{
    triggerTimeIsSet_ = false;
}

std::string ShowPacifyWordsTriggerTimeResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPacifyWordsTriggerTimeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPacifyWordsTriggerTimeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


