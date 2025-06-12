

#include "huaweicloud/metastudio/v1/model/ListTtsaDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtsaDataResponse::ListTtsaDataResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    isTail_ = false;
    isTailIsSet_ = false;
    audio_ = "";
    audioIsSet_ = false;
    blendshapesIsSet_ = false;
    animationsIsSet_ = false;
    motionsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTtsaDataResponse::~ListTtsaDataResponse() = default;

void ListTtsaDataResponse::validate()
{
}

web::json::value ListTtsaDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(isTailIsSet_) {
        val[utility::conversions::to_string_t("is_tail")] = ModelBase::toJson(isTail_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(blendshapesIsSet_) {
        val[utility::conversions::to_string_t("blendshapes")] = ModelBase::toJson(blendshapes_);
    }
    if(animationsIsSet_) {
        val[utility::conversions::to_string_t("animations")] = ModelBase::toJson(animations_);
    }
    if(motionsIsSet_) {
        val[utility::conversions::to_string_t("motions")] = ModelBase::toJson(motions_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTtsaDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_tail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_tail"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blendshapes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blendshapes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlendshapes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("animations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("animations"));
        if(!fieldValue.is_null())
        {
            std::vector<AnimationItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnimations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("motions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("motions"));
        if(!fieldValue.is_null())
        {
            std::vector<MotionItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMotions(refVal);
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


std::string ListTtsaDataResponse::getJobId() const
{
    return jobId_;
}

void ListTtsaDataResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListTtsaDataResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListTtsaDataResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListTtsaDataResponse::getStartTime() const
{
    return startTime_;
}

void ListTtsaDataResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTtsaDataResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTtsaDataResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTtsaDataResponse::getEndTime() const
{
    return endTime_;
}

void ListTtsaDataResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTtsaDataResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTtsaDataResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

bool ListTtsaDataResponse::isIsTail() const
{
    return isTail_;
}

void ListTtsaDataResponse::setIsTail(bool value)
{
    isTail_ = value;
    isTailIsSet_ = true;
}

bool ListTtsaDataResponse::isTailIsSet() const
{
    return isTailIsSet_;
}

void ListTtsaDataResponse::unsetisTail()
{
    isTailIsSet_ = false;
}

std::string ListTtsaDataResponse::getAudio() const
{
    return audio_;
}

void ListTtsaDataResponse::setAudio(const std::string& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool ListTtsaDataResponse::audioIsSet() const
{
    return audioIsSet_;
}

void ListTtsaDataResponse::unsetaudio()
{
    audioIsSet_ = false;
}

std::vector<std::string>& ListTtsaDataResponse::getBlendshapes()
{
    return blendshapes_;
}

void ListTtsaDataResponse::setBlendshapes(const std::vector<std::string>& value)
{
    blendshapes_ = value;
    blendshapesIsSet_ = true;
}

bool ListTtsaDataResponse::blendshapesIsSet() const
{
    return blendshapesIsSet_;
}

void ListTtsaDataResponse::unsetblendshapes()
{
    blendshapesIsSet_ = false;
}

std::vector<AnimationItem>& ListTtsaDataResponse::getAnimations()
{
    return animations_;
}

void ListTtsaDataResponse::setAnimations(const std::vector<AnimationItem>& value)
{
    animations_ = value;
    animationsIsSet_ = true;
}

bool ListTtsaDataResponse::animationsIsSet() const
{
    return animationsIsSet_;
}

void ListTtsaDataResponse::unsetanimations()
{
    animationsIsSet_ = false;
}

std::vector<MotionItem>& ListTtsaDataResponse::getMotions()
{
    return motions_;
}

void ListTtsaDataResponse::setMotions(const std::vector<MotionItem>& value)
{
    motions_ = value;
    motionsIsSet_ = true;
}

bool ListTtsaDataResponse::motionsIsSet() const
{
    return motionsIsSet_;
}

void ListTtsaDataResponse::unsetmotions()
{
    motionsIsSet_ = false;
}

std::string ListTtsaDataResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTtsaDataResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTtsaDataResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTtsaDataResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


