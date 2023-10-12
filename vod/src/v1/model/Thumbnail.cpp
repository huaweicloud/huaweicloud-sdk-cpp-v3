

#include "huaweicloud/vod/v1/model/Thumbnail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Thumbnail::Thumbnail()
{
    type_ = "";
    typeIsSet_ = false;
    time_ = 0;
    timeIsSet_ = false;
    dotsIsSet_ = false;
    coverPosition_ = 0;
    coverPositionIsSet_ = false;
    format_ = 0;
    formatIsSet_ = false;
    aspectRatio_ = 0;
    aspectRatioIsSet_ = false;
    maxLength_ = 0;
    maxLengthIsSet_ = false;
}

Thumbnail::~Thumbnail() = default;

void Thumbnail::validate()
{
}

web::json::value Thumbnail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(dotsIsSet_) {
        val[utility::conversions::to_string_t("dots")] = ModelBase::toJson(dots_);
    }
    if(coverPositionIsSet_) {
        val[utility::conversions::to_string_t("cover_position")] = ModelBase::toJson(coverPosition_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(aspectRatioIsSet_) {
        val[utility::conversions::to_string_t("aspect_ratio")] = ModelBase::toJson(aspectRatio_);
    }
    if(maxLengthIsSet_) {
        val[utility::conversions::to_string_t("max_length")] = ModelBase::toJson(maxLength_);
    }

    return val;
}
bool Thumbnail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cover_position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_position"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aspect_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aspect_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAspectRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLength(refVal);
        }
    }
    return ok;
}


std::string Thumbnail::getType() const
{
    return type_;
}

void Thumbnail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Thumbnail::typeIsSet() const
{
    return typeIsSet_;
}

void Thumbnail::unsettype()
{
    typeIsSet_ = false;
}

int32_t Thumbnail::getTime() const
{
    return time_;
}

void Thumbnail::setTime(int32_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool Thumbnail::timeIsSet() const
{
    return timeIsSet_;
}

void Thumbnail::unsettime()
{
    timeIsSet_ = false;
}

std::vector<int32_t>& Thumbnail::getDots()
{
    return dots_;
}

void Thumbnail::setDots(std::vector<int32_t> value)
{
    dots_ = value;
    dotsIsSet_ = true;
}

bool Thumbnail::dotsIsSet() const
{
    return dotsIsSet_;
}

void Thumbnail::unsetdots()
{
    dotsIsSet_ = false;
}

int32_t Thumbnail::getCoverPosition() const
{
    return coverPosition_;
}

void Thumbnail::setCoverPosition(int32_t value)
{
    coverPosition_ = value;
    coverPositionIsSet_ = true;
}

bool Thumbnail::coverPositionIsSet() const
{
    return coverPositionIsSet_;
}

void Thumbnail::unsetcoverPosition()
{
    coverPositionIsSet_ = false;
}

int32_t Thumbnail::getFormat() const
{
    return format_;
}

void Thumbnail::setFormat(int32_t value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool Thumbnail::formatIsSet() const
{
    return formatIsSet_;
}

void Thumbnail::unsetformat()
{
    formatIsSet_ = false;
}

int32_t Thumbnail::getAspectRatio() const
{
    return aspectRatio_;
}

void Thumbnail::setAspectRatio(int32_t value)
{
    aspectRatio_ = value;
    aspectRatioIsSet_ = true;
}

bool Thumbnail::aspectRatioIsSet() const
{
    return aspectRatioIsSet_;
}

void Thumbnail::unsetaspectRatio()
{
    aspectRatioIsSet_ = false;
}

int32_t Thumbnail::getMaxLength() const
{
    return maxLength_;
}

void Thumbnail::setMaxLength(int32_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool Thumbnail::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void Thumbnail::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

}
}
}
}
}


