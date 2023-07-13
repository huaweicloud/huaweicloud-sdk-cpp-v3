

#include "huaweicloud/mpc/v1/model/ThumbnailPara.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ThumbnailPara::ThumbnailPara()
{
    type_ = "";
    typeIsSet_ = false;
    time_ = 0;
    timeIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    dotsIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
    format_ = 0;
    formatIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    maxLength_ = 0;
    maxLengthIsSet_ = false;
}

ThumbnailPara::~ThumbnailPara() = default;

void ThumbnailPara::validate()
{
}

web::json::value ThumbnailPara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
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
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(maxLengthIsSet_) {
        val[utility::conversions::to_string_t("max_length")] = ModelBase::toJson(maxLength_);
    }

    return val;
}

bool ThumbnailPara::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
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

std::string ThumbnailPara::getType() const
{
    return type_;
}

void ThumbnailPara::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ThumbnailPara::typeIsSet() const
{
    return typeIsSet_;
}

void ThumbnailPara::unsettype()
{
    typeIsSet_ = false;
}

int32_t ThumbnailPara::getTime() const
{
    return time_;
}

void ThumbnailPara::setTime(int32_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ThumbnailPara::timeIsSet() const
{
    return timeIsSet_;
}

void ThumbnailPara::unsettime()
{
    timeIsSet_ = false;
}

int32_t ThumbnailPara::getStartTime() const
{
    return startTime_;
}

void ThumbnailPara::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ThumbnailPara::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ThumbnailPara::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ThumbnailPara::getDuration() const
{
    return duration_;
}

void ThumbnailPara::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ThumbnailPara::durationIsSet() const
{
    return durationIsSet_;
}

void ThumbnailPara::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<int32_t>& ThumbnailPara::getDots()
{
    return dots_;
}

void ThumbnailPara::setDots(std::vector<int32_t> value)
{
    dots_ = value;
    dotsIsSet_ = true;
}

bool ThumbnailPara::dotsIsSet() const
{
    return dotsIsSet_;
}

void ThumbnailPara::unsetdots()
{
    dotsIsSet_ = false;
}

std::string ThumbnailPara::getOutputFilename() const
{
    return outputFilename_;
}

void ThumbnailPara::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool ThumbnailPara::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void ThumbnailPara::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

int32_t ThumbnailPara::getFormat() const
{
    return format_;
}

void ThumbnailPara::setFormat(int32_t value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ThumbnailPara::formatIsSet() const
{
    return formatIsSet_;
}

void ThumbnailPara::unsetformat()
{
    formatIsSet_ = false;
}

int32_t ThumbnailPara::getWidth() const
{
    return width_;
}

void ThumbnailPara::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ThumbnailPara::widthIsSet() const
{
    return widthIsSet_;
}

void ThumbnailPara::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ThumbnailPara::getHeight() const
{
    return height_;
}

void ThumbnailPara::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ThumbnailPara::heightIsSet() const
{
    return heightIsSet_;
}

void ThumbnailPara::unsetheight()
{
    heightIsSet_ = false;
}

int32_t ThumbnailPara::getMaxLength() const
{
    return maxLength_;
}

void ThumbnailPara::setMaxLength(int32_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool ThumbnailPara::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void ThumbnailPara::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

}
}
}
}
}


