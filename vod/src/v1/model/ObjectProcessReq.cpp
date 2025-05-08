

#include "huaweicloud/vod/v1/model/ObjectProcessReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectProcessReq::ObjectProcessReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    transcodeTaskIsSet_ = false;
    videoProcessIsSet_ = false;
    watermarksIsSet_ = false;
    thumbnailTaskIsSet_ = false;
    imageSpriteTaskIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

ObjectProcessReq::~ObjectProcessReq() = default;

void ObjectProcessReq::validate()
{
}

web::json::value ObjectProcessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(transcodeTaskIsSet_) {
        val[utility::conversions::to_string_t("transcode_task")] = ModelBase::toJson(transcodeTask_);
    }
    if(videoProcessIsSet_) {
        val[utility::conversions::to_string_t("video_process")] = ModelBase::toJson(videoProcess_);
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
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool ObjectProcessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("video_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_process"));
        if(!fieldValue.is_null())
        {
            VideoProcess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoProcess(refVal);
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


ObsInfo ObjectProcessReq::getInput() const
{
    return input_;
}

void ObjectProcessReq::setInput(const ObsInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ObjectProcessReq::inputIsSet() const
{
    return inputIsSet_;
}

void ObjectProcessReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsInfo ObjectProcessReq::getOutput() const
{
    return output_;
}

void ObjectProcessReq::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ObjectProcessReq::outputIsSet() const
{
    return outputIsSet_;
}

void ObjectProcessReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<ObjectTranscodeTask>& ObjectProcessReq::getTranscodeTask()
{
    return transcodeTask_;
}

void ObjectProcessReq::setTranscodeTask(const std::vector<ObjectTranscodeTask>& value)
{
    transcodeTask_ = value;
    transcodeTaskIsSet_ = true;
}

bool ObjectProcessReq::transcodeTaskIsSet() const
{
    return transcodeTaskIsSet_;
}

void ObjectProcessReq::unsettranscodeTask()
{
    transcodeTaskIsSet_ = false;
}

VideoProcess ObjectProcessReq::getVideoProcess() const
{
    return videoProcess_;
}

void ObjectProcessReq::setVideoProcess(const VideoProcess& value)
{
    videoProcess_ = value;
    videoProcessIsSet_ = true;
}

bool ObjectProcessReq::videoProcessIsSet() const
{
    return videoProcessIsSet_;
}

void ObjectProcessReq::unsetvideoProcess()
{
    videoProcessIsSet_ = false;
}

std::vector<WatermarkRequest>& ObjectProcessReq::getWatermarks()
{
    return watermarks_;
}

void ObjectProcessReq::setWatermarks(const std::vector<WatermarkRequest>& value)
{
    watermarks_ = value;
    watermarksIsSet_ = true;
}

bool ObjectProcessReq::watermarksIsSet() const
{
    return watermarksIsSet_;
}

void ObjectProcessReq::unsetwatermarks()
{
    watermarksIsSet_ = false;
}

std::vector<ObjectThumbnailTask>& ObjectProcessReq::getThumbnailTask()
{
    return thumbnailTask_;
}

void ObjectProcessReq::setThumbnailTask(const std::vector<ObjectThumbnailTask>& value)
{
    thumbnailTask_ = value;
    thumbnailTaskIsSet_ = true;
}

bool ObjectProcessReq::thumbnailTaskIsSet() const
{
    return thumbnailTaskIsSet_;
}

void ObjectProcessReq::unsetthumbnailTask()
{
    thumbnailTaskIsSet_ = false;
}

std::vector<ObjectImageSpriteTask>& ObjectProcessReq::getImageSpriteTask()
{
    return imageSpriteTask_;
}

void ObjectProcessReq::setImageSpriteTask(const std::vector<ObjectImageSpriteTask>& value)
{
    imageSpriteTask_ = value;
    imageSpriteTaskIsSet_ = true;
}

bool ObjectProcessReq::imageSpriteTaskIsSet() const
{
    return imageSpriteTaskIsSet_;
}

void ObjectProcessReq::unsetimageSpriteTask()
{
    imageSpriteTaskIsSet_ = false;
}

std::string ObjectProcessReq::getCallbackUrl() const
{
    return callbackUrl_;
}

void ObjectProcessReq::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool ObjectProcessReq::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void ObjectProcessReq::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string ObjectProcessReq::getSessionContext() const
{
    return sessionContext_;
}

void ObjectProcessReq::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool ObjectProcessReq::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void ObjectProcessReq::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


