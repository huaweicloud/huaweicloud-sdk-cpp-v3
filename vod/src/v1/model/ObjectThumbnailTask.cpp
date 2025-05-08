

#include "huaweicloud/vod/v1/model/ObjectThumbnailTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectThumbnailTask::ObjectThumbnailTask()
{
    type_ = "";
    typeIsSet_ = false;
    percent_ = 0;
    percentIsSet_ = false;
    dotsIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    fillType_ = "";
    fillTypeIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    outputIsSet_ = false;
}

ObjectThumbnailTask::~ObjectThumbnailTask() = default;

void ObjectThumbnailTask::validate()
{
}

web::json::value ObjectThumbnailTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(percentIsSet_) {
        val[utility::conversions::to_string_t("percent")] = ModelBase::toJson(percent_);
    }
    if(dotsIsSet_) {
        val[utility::conversions::to_string_t("dots")] = ModelBase::toJson(dots_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(fillTypeIsSet_) {
        val[utility::conversions::to_string_t("fill_type")] = ModelBase::toJson(fillType_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool ObjectThumbnailTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dots"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDots(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFilename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fill_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fill_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFillType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
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
    return ok;
}


std::string ObjectThumbnailTask::getType() const
{
    return type_;
}

void ObjectThumbnailTask::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ObjectThumbnailTask::typeIsSet() const
{
    return typeIsSet_;
}

void ObjectThumbnailTask::unsettype()
{
    typeIsSet_ = false;
}

int32_t ObjectThumbnailTask::getPercent() const
{
    return percent_;
}

void ObjectThumbnailTask::setPercent(int32_t value)
{
    percent_ = value;
    percentIsSet_ = true;
}

bool ObjectThumbnailTask::percentIsSet() const
{
    return percentIsSet_;
}

void ObjectThumbnailTask::unsetpercent()
{
    percentIsSet_ = false;
}

std::vector<int32_t>& ObjectThumbnailTask::getDots()
{
    return dots_;
}

void ObjectThumbnailTask::setDots(std::vector<int32_t> value)
{
    dots_ = value;
    dotsIsSet_ = true;
}

bool ObjectThumbnailTask::dotsIsSet() const
{
    return dotsIsSet_;
}

void ObjectThumbnailTask::unsetdots()
{
    dotsIsSet_ = false;
}

std::string ObjectThumbnailTask::getOutputFilename() const
{
    return outputFilename_;
}

void ObjectThumbnailTask::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool ObjectThumbnailTask::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void ObjectThumbnailTask::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

std::string ObjectThumbnailTask::getFormat() const
{
    return format_;
}

void ObjectThumbnailTask::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ObjectThumbnailTask::formatIsSet() const
{
    return formatIsSet_;
}

void ObjectThumbnailTask::unsetformat()
{
    formatIsSet_ = false;
}

std::string ObjectThumbnailTask::getFillType() const
{
    return fillType_;
}

void ObjectThumbnailTask::setFillType(const std::string& value)
{
    fillType_ = value;
    fillTypeIsSet_ = true;
}

bool ObjectThumbnailTask::fillTypeIsSet() const
{
    return fillTypeIsSet_;
}

void ObjectThumbnailTask::unsetfillType()
{
    fillTypeIsSet_ = false;
}

int32_t ObjectThumbnailTask::getWidth() const
{
    return width_;
}

void ObjectThumbnailTask::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ObjectThumbnailTask::widthIsSet() const
{
    return widthIsSet_;
}

void ObjectThumbnailTask::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ObjectThumbnailTask::getHeight() const
{
    return height_;
}

void ObjectThumbnailTask::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ObjectThumbnailTask::heightIsSet() const
{
    return heightIsSet_;
}

void ObjectThumbnailTask::unsetheight()
{
    heightIsSet_ = false;
}

ObsInfo ObjectThumbnailTask::getOutput() const
{
    return output_;
}

void ObjectThumbnailTask::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ObjectThumbnailTask::outputIsSet() const
{
    return outputIsSet_;
}

void ObjectThumbnailTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


