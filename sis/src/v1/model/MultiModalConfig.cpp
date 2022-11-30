

#include "huaweicloud/sis/v1/model/MultiModalConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




MultiModalConfig::MultiModalConfig()
{
    videoFormat_ = "";
    videoFormatIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

MultiModalConfig::~MultiModalConfig() = default;

void MultiModalConfig::validate()
{
}

web::json::value MultiModalConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoFormatIsSet_) {
        val[utility::conversions::to_string_t("video_format")] = ModelBase::toJson(videoFormat_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}

bool MultiModalConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string MultiModalConfig::getVideoFormat() const
{
    return videoFormat_;
}

void MultiModalConfig::setVideoFormat(const std::string& value)
{
    videoFormat_ = value;
    videoFormatIsSet_ = true;
}

bool MultiModalConfig::videoFormatIsSet() const
{
    return videoFormatIsSet_;
}

void MultiModalConfig::unsetvideoFormat()
{
    videoFormatIsSet_ = false;
}

std::string MultiModalConfig::getLanguage() const
{
    return language_;
}

void MultiModalConfig::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool MultiModalConfig::languageIsSet() const
{
    return languageIsSet_;
}

void MultiModalConfig::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string MultiModalConfig::getMode() const
{
    return mode_;
}

void MultiModalConfig::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool MultiModalConfig::modeIsSet() const
{
    return modeIsSet_;
}

void MultiModalConfig::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


