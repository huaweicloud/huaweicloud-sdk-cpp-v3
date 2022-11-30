

#include "huaweicloud/frs/v2/model/DetectLiveByFileIntlRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByFileIntlRequestBody::DetectLiveByFileIntlRequestBody()
{
    videoFileIsSet_ = false;
    actions_ = "";
    actionsIsSet_ = false;
    actionTime_ = "";
    actionTimeIsSet_ = false;
}

DetectLiveByFileIntlRequestBody::~DetectLiveByFileIntlRequestBody() = default;

void DetectLiveByFileIntlRequestBody::validate()
{
}

web::json::value DetectLiveByFileIntlRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoFileIsSet_) {
        val[utility::conversions::to_string_t("video_file")] = ModelBase::toJson(videoFile_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(actionTimeIsSet_) {
        val[utility::conversions::to_string_t("action_time")] = ModelBase::toJson(actionTime_);
    }

    return val;
}

bool DetectLiveByFileIntlRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_file"));
        if(!fieldValue.is_null())
        {
            HttpContent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoFile(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("action_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionTime(refVal);
        }
    }
    return ok;
}


HttpContent DetectLiveByFileIntlRequestBody::getVideoFile() const
{
    return videoFile_;
}

void DetectLiveByFileIntlRequestBody::setVideoFile(const HttpContent& value)
{
    videoFile_ = value;
    videoFileIsSet_ = true;
}

bool DetectLiveByFileIntlRequestBody::videoFileIsSet() const
{
    return videoFileIsSet_;
}

void DetectLiveByFileIntlRequestBody::unsetvideoFile()
{
    videoFileIsSet_ = false;
}

std::string DetectLiveByFileIntlRequestBody::getActions() const
{
    return actions_;
}

void DetectLiveByFileIntlRequestBody::setActions(const std::string& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool DetectLiveByFileIntlRequestBody::actionsIsSet() const
{
    return actionsIsSet_;
}

void DetectLiveByFileIntlRequestBody::unsetactions()
{
    actionsIsSet_ = false;
}

std::string DetectLiveByFileIntlRequestBody::getActionTime() const
{
    return actionTime_;
}

void DetectLiveByFileIntlRequestBody::setActionTime(const std::string& value)
{
    actionTime_ = value;
    actionTimeIsSet_ = true;
}

bool DetectLiveByFileIntlRequestBody::actionTimeIsSet() const
{
    return actionTimeIsSet_;
}

void DetectLiveByFileIntlRequestBody::unsetactionTime()
{
    actionTimeIsSet_ = false;
}

}
}
}
}
}


