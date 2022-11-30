

#include "huaweicloud/frs/v2/model/LiveDetectUrlReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




LiveDetectUrlReq::LiveDetectUrlReq()
{
    actionTime_ = "";
    actionTimeIsSet_ = false;
    videoUrl_ = "";
    videoUrlIsSet_ = false;
    actions_ = "";
    actionsIsSet_ = false;
}

LiveDetectUrlReq::~LiveDetectUrlReq() = default;

void LiveDetectUrlReq::validate()
{
}

web::json::value LiveDetectUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTimeIsSet_) {
        val[utility::conversions::to_string_t("action_time")] = ModelBase::toJson(actionTime_);
    }
    if(videoUrlIsSet_) {
        val[utility::conversions::to_string_t("video_url")] = ModelBase::toJson(videoUrl_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}

bool LiveDetectUrlReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("video_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoUrl(refVal);
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


std::string LiveDetectUrlReq::getActionTime() const
{
    return actionTime_;
}

void LiveDetectUrlReq::setActionTime(const std::string& value)
{
    actionTime_ = value;
    actionTimeIsSet_ = true;
}

bool LiveDetectUrlReq::actionTimeIsSet() const
{
    return actionTimeIsSet_;
}

void LiveDetectUrlReq::unsetactionTime()
{
    actionTimeIsSet_ = false;
}

std::string LiveDetectUrlReq::getVideoUrl() const
{
    return videoUrl_;
}

void LiveDetectUrlReq::setVideoUrl(const std::string& value)
{
    videoUrl_ = value;
    videoUrlIsSet_ = true;
}

bool LiveDetectUrlReq::videoUrlIsSet() const
{
    return videoUrlIsSet_;
}

void LiveDetectUrlReq::unsetvideoUrl()
{
    videoUrlIsSet_ = false;
}

std::string LiveDetectUrlReq::getActions() const
{
    return actions_;
}

void LiveDetectUrlReq::setActions(const std::string& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool LiveDetectUrlReq::actionsIsSet() const
{
    return actionsIsSet_;
}

void LiveDetectUrlReq::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


