

#include "huaweicloud/vod/v1/model/ObjectTaskResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectTaskResult::ObjectTaskResult()
{
    taskType_ = "";
    taskTypeIsSet_ = false;
    transcodeTaskIsSet_ = false;
    thumbnailTaskIsSet_ = false;
    imageSpriteTaskIsSet_ = false;
}

ObjectTaskResult::~ObjectTaskResult() = default;

void ObjectTaskResult::validate()
{
}

web::json::value ObjectTaskResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(transcodeTaskIsSet_) {
        val[utility::conversions::to_string_t("transcode_task")] = ModelBase::toJson(transcodeTask_);
    }
    if(thumbnailTaskIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_task")] = ModelBase::toJson(thumbnailTask_);
    }
    if(imageSpriteTaskIsSet_) {
        val[utility::conversions::to_string_t("image_sprite_task")] = ModelBase::toJson(imageSpriteTask_);
    }

    return val;
}
bool ObjectTaskResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_task"));
        if(!fieldValue.is_null())
        {
            TranscodeTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_task"));
        if(!fieldValue.is_null())
        {
            ThumbnailTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_sprite_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_sprite_task"));
        if(!fieldValue.is_null())
        {
            ImageSpriteTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSpriteTask(refVal);
        }
    }
    return ok;
}


std::string ObjectTaskResult::getTaskType() const
{
    return taskType_;
}

void ObjectTaskResult::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ObjectTaskResult::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ObjectTaskResult::unsettaskType()
{
    taskTypeIsSet_ = false;
}

TranscodeTask ObjectTaskResult::getTranscodeTask() const
{
    return transcodeTask_;
}

void ObjectTaskResult::setTranscodeTask(const TranscodeTask& value)
{
    transcodeTask_ = value;
    transcodeTaskIsSet_ = true;
}

bool ObjectTaskResult::transcodeTaskIsSet() const
{
    return transcodeTaskIsSet_;
}

void ObjectTaskResult::unsettranscodeTask()
{
    transcodeTaskIsSet_ = false;
}

ThumbnailTask ObjectTaskResult::getThumbnailTask() const
{
    return thumbnailTask_;
}

void ObjectTaskResult::setThumbnailTask(const ThumbnailTask& value)
{
    thumbnailTask_ = value;
    thumbnailTaskIsSet_ = true;
}

bool ObjectTaskResult::thumbnailTaskIsSet() const
{
    return thumbnailTaskIsSet_;
}

void ObjectTaskResult::unsetthumbnailTask()
{
    thumbnailTaskIsSet_ = false;
}

ImageSpriteTask ObjectTaskResult::getImageSpriteTask() const
{
    return imageSpriteTask_;
}

void ObjectTaskResult::setImageSpriteTask(const ImageSpriteTask& value)
{
    imageSpriteTask_ = value;
    imageSpriteTaskIsSet_ = true;
}

bool ObjectTaskResult::imageSpriteTaskIsSet() const
{
    return imageSpriteTaskIsSet_;
}

void ObjectTaskResult::unsetimageSpriteTask()
{
    imageSpriteTaskIsSet_ = false;
}

}
}
}
}
}


