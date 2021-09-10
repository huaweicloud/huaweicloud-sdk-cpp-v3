

#include "huaweicloud/frs/v2/model/LiveDetectBase64Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




LiveDetectBase64Req::LiveDetectBase64Req()
{
    actionTime_ = "";
    actionTimeIsSet_ = false;
    videoBase64_ = "";
    videoBase64IsSet_ = false;
    actions_ = "";
    actionsIsSet_ = false;
}

LiveDetectBase64Req::~LiveDetectBase64Req() = default;

void LiveDetectBase64Req::validate()
{
}

web::json::value LiveDetectBase64Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTimeIsSet_) {
        val[utility::conversions::to_string_t("action_time")] = ModelBase::toJson(actionTime_);
    }
    if(videoBase64IsSet_) {
        val[utility::conversions::to_string_t("video_base64")] = ModelBase::toJson(videoBase64_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}

bool LiveDetectBase64Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoBase64(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::string LiveDetectBase64Req::getActionTime() const
{
    return actionTime_;
}

void LiveDetectBase64Req::setActionTime(const std::string& value)
{
    actionTime_ = value;
    actionTimeIsSet_ = true;
}

bool LiveDetectBase64Req::actionTimeIsSet() const
{
    return actionTimeIsSet_;
}

void LiveDetectBase64Req::unsetactionTime()
{
    actionTimeIsSet_ = false;
}

std::string LiveDetectBase64Req::getVideoBase64() const
{
    return videoBase64_;
}

void LiveDetectBase64Req::setVideoBase64(const std::string& value)
{
    videoBase64_ = value;
    videoBase64IsSet_ = true;
}

bool LiveDetectBase64Req::videoBase64IsSet() const
{
    return videoBase64IsSet_;
}

void LiveDetectBase64Req::unsetvideoBase64()
{
    videoBase64IsSet_ = false;
}

std::string LiveDetectBase64Req::getActions() const
{
    return actions_;
}

void LiveDetectBase64Req::setActions(const std::string& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool LiveDetectBase64Req::actionsIsSet() const
{
    return actionsIsSet_;
}

void LiveDetectBase64Req::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


