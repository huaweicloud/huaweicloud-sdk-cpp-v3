

#include "huaweicloud/vod/v1/model/AdditionalObjectProcessReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AdditionalObjectProcessReq::AdditionalObjectProcessReq()
{
    outputIsSet_ = false;
    transcodeTaskIsSet_ = false;
    watermarksIsSet_ = false;
    thumbnailTaskIsSet_ = false;
    imageSpriteTaskIsSet_ = false;
    videoProcessIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

AdditionalObjectProcessReq::~AdditionalObjectProcessReq() = default;

void AdditionalObjectProcessReq::validate()
{
}

web::json::value AdditionalObjectProcessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(transcodeTaskIsSet_) {
        val[utility::conversions::to_string_t("transcode_task")] = ModelBase::toJson(transcodeTask_);
    }
    if(watermarksIsSet_) {
        val[utility::conversions::to_string_t("watermarks")] = ModelBase::toJson(watermarks_);
    }
    if(thumbnailTaskIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_task")] = ModelBase::toJson(thumbnailTask_);
    }
    if(imageSpriteTaskIsSet_) {
        val[utility::conversions::to_string_t("image_sprite_task")] = ModelBase::toJson(imageSpriteTask_);
    }
    if(videoProcessIsSet_) {
        val[utility::conversions::to_string_t("video_process")] = ModelBase::toJson(videoProcess_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool AdditionalObjectProcessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_task"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectTranscodeTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watermarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermarks"));
        if(!fieldValue.is_null())
        {
            std::vector<WatermarkRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_task"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectThumbnailTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_sprite_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_sprite_task"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectImageSpriteTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSpriteTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_process"));
        if(!fieldValue.is_null())
        {
            VideoProcess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    return ok;
}


ObsInfo AdditionalObjectProcessReq::getOutput() const
{
    return output_;
}

void AdditionalObjectProcessReq::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool AdditionalObjectProcessReq::outputIsSet() const
{
    return outputIsSet_;
}

void AdditionalObjectProcessReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<ObjectTranscodeTask>& AdditionalObjectProcessReq::getTranscodeTask()
{
    return transcodeTask_;
}

void AdditionalObjectProcessReq::setTranscodeTask(const std::vector<ObjectTranscodeTask>& value)
{
    transcodeTask_ = value;
    transcodeTaskIsSet_ = true;
}

bool AdditionalObjectProcessReq::transcodeTaskIsSet() const
{
    return transcodeTaskIsSet_;
}

void AdditionalObjectProcessReq::unsettranscodeTask()
{
    transcodeTaskIsSet_ = false;
}

std::vector<WatermarkRequest>& AdditionalObjectProcessReq::getWatermarks()
{
    return watermarks_;
}

void AdditionalObjectProcessReq::setWatermarks(const std::vector<WatermarkRequest>& value)
{
    watermarks_ = value;
    watermarksIsSet_ = true;
}

bool AdditionalObjectProcessReq::watermarksIsSet() const
{
    return watermarksIsSet_;
}

void AdditionalObjectProcessReq::unsetwatermarks()
{
    watermarksIsSet_ = false;
}

std::vector<ObjectThumbnailTask>& AdditionalObjectProcessReq::getThumbnailTask()
{
    return thumbnailTask_;
}

void AdditionalObjectProcessReq::setThumbnailTask(const std::vector<ObjectThumbnailTask>& value)
{
    thumbnailTask_ = value;
    thumbnailTaskIsSet_ = true;
}

bool AdditionalObjectProcessReq::thumbnailTaskIsSet() const
{
    return thumbnailTaskIsSet_;
}

void AdditionalObjectProcessReq::unsetthumbnailTask()
{
    thumbnailTaskIsSet_ = false;
}

std::vector<ObjectImageSpriteTask>& AdditionalObjectProcessReq::getImageSpriteTask()
{
    return imageSpriteTask_;
}

void AdditionalObjectProcessReq::setImageSpriteTask(const std::vector<ObjectImageSpriteTask>& value)
{
    imageSpriteTask_ = value;
    imageSpriteTaskIsSet_ = true;
}

bool AdditionalObjectProcessReq::imageSpriteTaskIsSet() const
{
    return imageSpriteTaskIsSet_;
}

void AdditionalObjectProcessReq::unsetimageSpriteTask()
{
    imageSpriteTaskIsSet_ = false;
}

VideoProcess AdditionalObjectProcessReq::getVideoProcess() const
{
    return videoProcess_;
}

void AdditionalObjectProcessReq::setVideoProcess(const VideoProcess& value)
{
    videoProcess_ = value;
    videoProcessIsSet_ = true;
}

bool AdditionalObjectProcessReq::videoProcessIsSet() const
{
    return videoProcessIsSet_;
}

void AdditionalObjectProcessReq::unsetvideoProcess()
{
    videoProcessIsSet_ = false;
}

std::string AdditionalObjectProcessReq::getCallbackUrl() const
{
    return callbackUrl_;
}

void AdditionalObjectProcessReq::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool AdditionalObjectProcessReq::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void AdditionalObjectProcessReq::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string AdditionalObjectProcessReq::getSessionContext() const
{
    return sessionContext_;
}

void AdditionalObjectProcessReq::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool AdditionalObjectProcessReq::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void AdditionalObjectProcessReq::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


