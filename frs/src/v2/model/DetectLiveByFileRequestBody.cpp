

#include "huaweicloud/frs/v2/model/DetectLiveByFileRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByFileRequestBody::DetectLiveByFileRequestBody()
{
    videoFileIsSet_ = false;
    actions_ = "";
    actionsIsSet_ = false;
    actionTime_ = "";
    actionTimeIsSet_ = false;
    nodThreshold_ = 0.0;
    nodThresholdIsSet_ = false;
}

DetectLiveByFileRequestBody::~DetectLiveByFileRequestBody() = default;

void DetectLiveByFileRequestBody::validate()
{
}

web::json::value DetectLiveByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(actionTimeIsSet_) {
        val[utility::conversions::to_string_t("action_time")] = ModelBase::toJson(actionTime_);
    }
    if(nodThresholdIsSet_) {
        val[utility::conversions::to_string_t("nod_threshold")] = ModelBase::toJson(nodThreshold_);
    }

    return val;
}

bool DetectLiveByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("nod_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nod_threshold"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodThreshold(refVal);
        }
    }
    return ok;
}

HttpContent DetectLiveByFileRequestBody::getVideoFile() const
{
    return videoFile_;
}

void DetectLiveByFileRequestBody::setVideoFile(const HttpContent& value)
{
    videoFile_ = value;
    videoFileIsSet_ = true;
}

bool DetectLiveByFileRequestBody::videoFileIsSet() const
{
    return videoFileIsSet_;
}

void DetectLiveByFileRequestBody::unsetvideoFile()
{
    videoFileIsSet_ = false;
}

std::string DetectLiveByFileRequestBody::getActions() const
{
    return actions_;
}

void DetectLiveByFileRequestBody::setActions(const std::string& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool DetectLiveByFileRequestBody::actionsIsSet() const
{
    return actionsIsSet_;
}

void DetectLiveByFileRequestBody::unsetactions()
{
    actionsIsSet_ = false;
}

std::string DetectLiveByFileRequestBody::getActionTime() const
{
    return actionTime_;
}

void DetectLiveByFileRequestBody::setActionTime(const std::string& value)
{
    actionTime_ = value;
    actionTimeIsSet_ = true;
}

bool DetectLiveByFileRequestBody::actionTimeIsSet() const
{
    return actionTimeIsSet_;
}

void DetectLiveByFileRequestBody::unsetactionTime()
{
    actionTimeIsSet_ = false;
}

double DetectLiveByFileRequestBody::getNodThreshold() const
{
    return nodThreshold_;
}

void DetectLiveByFileRequestBody::setNodThreshold(double value)
{
    nodThreshold_ = value;
    nodThresholdIsSet_ = true;
}

bool DetectLiveByFileRequestBody::nodThresholdIsSet() const
{
    return nodThresholdIsSet_;
}

void DetectLiveByFileRequestBody::unsetnodThreshold()
{
    nodThresholdIsSet_ = false;
}

}
}
}
}
}


