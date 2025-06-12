

#include "huaweicloud/metastudio/v1/model/StartSmartChatJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartSmartChatJobResponse::StartSmartChatJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    languageIsSet_ = false;
    rtcRoomInfoIsSet_ = false;
    chatSubtitleConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    voiceConfigListIsSet_ = false;
    chatVideoType_ = "";
    chatVideoTypeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    chatAccessAddress_ = "";
    chatAccessAddressIsSet_ = false;
    chatAccessRestAddress_ = "";
    chatAccessRestAddressIsSet_ = false;
    isTransparent_ = false;
    isTransparentIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StartSmartChatJobResponse::~StartSmartChatJobResponse() = default;

void StartSmartChatJobResponse::validate()
{
}

web::json::value StartSmartChatJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(rtcRoomInfoIsSet_) {
        val[utility::conversions::to_string_t("rtc_room_info")] = ModelBase::toJson(rtcRoomInfo_);
    }
    if(chatSubtitleConfigIsSet_) {
        val[utility::conversions::to_string_t("chat_subtitle_config")] = ModelBase::toJson(chatSubtitleConfig_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(voiceConfigListIsSet_) {
        val[utility::conversions::to_string_t("voice_config_list")] = ModelBase::toJson(voiceConfigList_);
    }
    if(chatVideoTypeIsSet_) {
        val[utility::conversions::to_string_t("chat_video_type")] = ModelBase::toJson(chatVideoType_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(chatAccessAddressIsSet_) {
        val[utility::conversions::to_string_t("chat_access_address")] = ModelBase::toJson(chatAccessAddress_);
    }
    if(chatAccessRestAddressIsSet_) {
        val[utility::conversions::to_string_t("chat_access_rest_address")] = ModelBase::toJson(chatAccessRestAddress_);
    }
    if(isTransparentIsSet_) {
        val[utility::conversions::to_string_t("is_transparent")] = ModelBase::toJson(isTransparent_);
    }
    if(defaultLanguageIsSet_) {
        val[utility::conversions::to_string_t("default_language")] = ModelBase::toJson(defaultLanguage_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StartSmartChatJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rtc_room_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_room_info"));
        if(!fieldValue.is_null())
        {
            RTCRoomInfoList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcRoomInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_subtitle_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_subtitle_config"));
        if(!fieldValue.is_null())
        {
            SmartChatSubtitleConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatSubtitleConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            SmartChatVideoConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartChatVoiceConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfigList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_video_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_video_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatVideoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_access_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_access_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatAccessAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_access_rest_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_access_rest_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatAccessRestAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_transparent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_transparent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTransparent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultLanguage(refVal);
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


std::string StartSmartChatJobResponse::getJobId() const
{
    return jobId_;
}

void StartSmartChatJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartSmartChatJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartSmartChatJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

LanguageEnum StartSmartChatJobResponse::getLanguage() const
{
    return language_;
}

void StartSmartChatJobResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool StartSmartChatJobResponse::languageIsSet() const
{
    return languageIsSet_;
}

void StartSmartChatJobResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

RTCRoomInfoList StartSmartChatJobResponse::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void StartSmartChatJobResponse::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool StartSmartChatJobResponse::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void StartSmartChatJobResponse::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

SmartChatSubtitleConfig StartSmartChatJobResponse::getChatSubtitleConfig() const
{
    return chatSubtitleConfig_;
}

void StartSmartChatJobResponse::setChatSubtitleConfig(const SmartChatSubtitleConfig& value)
{
    chatSubtitleConfig_ = value;
    chatSubtitleConfigIsSet_ = true;
}

bool StartSmartChatJobResponse::chatSubtitleConfigIsSet() const
{
    return chatSubtitleConfigIsSet_;
}

void StartSmartChatJobResponse::unsetchatSubtitleConfig()
{
    chatSubtitleConfigIsSet_ = false;
}

SmartChatVideoConfig StartSmartChatJobResponse::getVideoConfig() const
{
    return videoConfig_;
}

void StartSmartChatJobResponse::setVideoConfig(const SmartChatVideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool StartSmartChatJobResponse::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void StartSmartChatJobResponse::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

std::vector<SmartChatVoiceConfig>& StartSmartChatJobResponse::getVoiceConfigList()
{
    return voiceConfigList_;
}

void StartSmartChatJobResponse::setVoiceConfigList(const std::vector<SmartChatVoiceConfig>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool StartSmartChatJobResponse::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void StartSmartChatJobResponse::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string StartSmartChatJobResponse::getChatVideoType() const
{
    return chatVideoType_;
}

void StartSmartChatJobResponse::setChatVideoType(const std::string& value)
{
    chatVideoType_ = value;
    chatVideoTypeIsSet_ = true;
}

bool StartSmartChatJobResponse::chatVideoTypeIsSet() const
{
    return chatVideoTypeIsSet_;
}

void StartSmartChatJobResponse::unsetchatVideoType()
{
    chatVideoTypeIsSet_ = false;
}

std::string StartSmartChatJobResponse::getRegion() const
{
    return region_;
}

void StartSmartChatJobResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool StartSmartChatJobResponse::regionIsSet() const
{
    return regionIsSet_;
}

void StartSmartChatJobResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string StartSmartChatJobResponse::getChatAccessAddress() const
{
    return chatAccessAddress_;
}

void StartSmartChatJobResponse::setChatAccessAddress(const std::string& value)
{
    chatAccessAddress_ = value;
    chatAccessAddressIsSet_ = true;
}

bool StartSmartChatJobResponse::chatAccessAddressIsSet() const
{
    return chatAccessAddressIsSet_;
}

void StartSmartChatJobResponse::unsetchatAccessAddress()
{
    chatAccessAddressIsSet_ = false;
}

std::string StartSmartChatJobResponse::getChatAccessRestAddress() const
{
    return chatAccessRestAddress_;
}

void StartSmartChatJobResponse::setChatAccessRestAddress(const std::string& value)
{
    chatAccessRestAddress_ = value;
    chatAccessRestAddressIsSet_ = true;
}

bool StartSmartChatJobResponse::chatAccessRestAddressIsSet() const
{
    return chatAccessRestAddressIsSet_;
}

void StartSmartChatJobResponse::unsetchatAccessRestAddress()
{
    chatAccessRestAddressIsSet_ = false;
}

bool StartSmartChatJobResponse::isIsTransparent() const
{
    return isTransparent_;
}

void StartSmartChatJobResponse::setIsTransparent(bool value)
{
    isTransparent_ = value;
    isTransparentIsSet_ = true;
}

bool StartSmartChatJobResponse::isTransparentIsSet() const
{
    return isTransparentIsSet_;
}

void StartSmartChatJobResponse::unsetisTransparent()
{
    isTransparentIsSet_ = false;
}

std::string StartSmartChatJobResponse::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void StartSmartChatJobResponse::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool StartSmartChatJobResponse::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void StartSmartChatJobResponse::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

std::string StartSmartChatJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void StartSmartChatJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StartSmartChatJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StartSmartChatJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


