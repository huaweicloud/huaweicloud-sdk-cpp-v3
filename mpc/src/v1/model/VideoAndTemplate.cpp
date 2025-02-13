

#include "huaweicloud/mpc/v1/model/VideoAndTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoAndTemplate::VideoAndTemplate()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
}

VideoAndTemplate::~VideoAndTemplate() = default;

void VideoAndTemplate::validate()
{
}

web::json::value VideoAndTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }

    return val;
}
bool VideoAndTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    return ok;
}


int32_t VideoAndTemplate::getTemplateId() const
{
    return templateId_;
}

void VideoAndTemplate::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool VideoAndTemplate::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void VideoAndTemplate::unsettemplateId()
{
    templateIdIsSet_ = false;
}

int32_t VideoAndTemplate::getWidth() const
{
    return width_;
}

void VideoAndTemplate::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VideoAndTemplate::widthIsSet() const
{
    return widthIsSet_;
}

void VideoAndTemplate::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VideoAndTemplate::getHeight() const
{
    return height_;
}

void VideoAndTemplate::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VideoAndTemplate::heightIsSet() const
{
    return heightIsSet_;
}

void VideoAndTemplate::unsetheight()
{
    heightIsSet_ = false;
}

int32_t VideoAndTemplate::getBitrate() const
{
    return bitrate_;
}

void VideoAndTemplate::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool VideoAndTemplate::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void VideoAndTemplate::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::string VideoAndTemplate::getStreamName() const
{
    return streamName_;
}

void VideoAndTemplate::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool VideoAndTemplate::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void VideoAndTemplate::unsetstreamName()
{
    streamNameIsSet_ = false;
}

}
}
}
}
}


