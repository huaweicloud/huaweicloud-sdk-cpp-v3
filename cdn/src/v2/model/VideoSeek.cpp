

#include "huaweicloud/cdn/v2/model/VideoSeek.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




VideoSeek::VideoSeek()
{
    enableVideoSeek_ = false;
    enableVideoSeekIsSet_ = false;
    enableFlvByTimeSeek_ = false;
    enableFlvByTimeSeekIsSet_ = false;
    startParameter_ = "";
    startParameterIsSet_ = false;
    endParameter_ = "";
    endParameterIsSet_ = false;
}

VideoSeek::~VideoSeek() = default;

void VideoSeek::validate()
{
}

web::json::value VideoSeek::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableVideoSeekIsSet_) {
        val[utility::conversions::to_string_t("enable_video_seek")] = ModelBase::toJson(enableVideoSeek_);
    }
    if(enableFlvByTimeSeekIsSet_) {
        val[utility::conversions::to_string_t("enable_flv_by_time_seek")] = ModelBase::toJson(enableFlvByTimeSeek_);
    }
    if(startParameterIsSet_) {
        val[utility::conversions::to_string_t("start_parameter")] = ModelBase::toJson(startParameter_);
    }
    if(endParameterIsSet_) {
        val[utility::conversions::to_string_t("end_parameter")] = ModelBase::toJson(endParameter_);
    }

    return val;
}

bool VideoSeek::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_video_seek"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_video_seek"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableVideoSeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_flv_by_time_seek"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_flv_by_time_seek"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableFlvByTimeSeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_parameter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_parameter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndParameter(refVal);
        }
    }
    return ok;
}

bool VideoSeek::isEnableVideoSeek() const
{
    return enableVideoSeek_;
}

void VideoSeek::setEnableVideoSeek(bool value)
{
    enableVideoSeek_ = value;
    enableVideoSeekIsSet_ = true;
}

bool VideoSeek::enableVideoSeekIsSet() const
{
    return enableVideoSeekIsSet_;
}

void VideoSeek::unsetenableVideoSeek()
{
    enableVideoSeekIsSet_ = false;
}

bool VideoSeek::isEnableFlvByTimeSeek() const
{
    return enableFlvByTimeSeek_;
}

void VideoSeek::setEnableFlvByTimeSeek(bool value)
{
    enableFlvByTimeSeek_ = value;
    enableFlvByTimeSeekIsSet_ = true;
}

bool VideoSeek::enableFlvByTimeSeekIsSet() const
{
    return enableFlvByTimeSeekIsSet_;
}

void VideoSeek::unsetenableFlvByTimeSeek()
{
    enableFlvByTimeSeekIsSet_ = false;
}

std::string VideoSeek::getStartParameter() const
{
    return startParameter_;
}

void VideoSeek::setStartParameter(const std::string& value)
{
    startParameter_ = value;
    startParameterIsSet_ = true;
}

bool VideoSeek::startParameterIsSet() const
{
    return startParameterIsSet_;
}

void VideoSeek::unsetstartParameter()
{
    startParameterIsSet_ = false;
}

std::string VideoSeek::getEndParameter() const
{
    return endParameter_;
}

void VideoSeek::setEndParameter(const std::string& value)
{
    endParameter_ = value;
    endParameterIsSet_ = true;
}

bool VideoSeek::endParameterIsSet() const
{
    return endParameterIsSet_;
}

void VideoSeek::unsetendParameter()
{
    endParameterIsSet_ = false;
}

}
}
}
}
}


