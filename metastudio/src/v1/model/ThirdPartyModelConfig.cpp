

#include "huaweicloud/metastudio/v1/model/ThirdPartyModelConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ThirdPartyModelConfig::ThirdPartyModelConfig()
{
    appId_ = "";
    appIdIsSet_ = false;
    appKey_ = "";
    appKeyIsSet_ = false;
    llmUrl_ = "";
    llmUrlIsSet_ = false;
    isStream_ = false;
    isStreamIsSet_ = false;
    chatRounds_ = 0;
    chatRoundsIsSet_ = false;
    sisRegion_ = 0;
    sisRegionIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
    asrTypeIsSet_ = false;
    asrAccount_ = "";
    asrAccountIsSet_ = false;
    asrSecret_ = "";
    asrSecretIsSet_ = false;
}

ThirdPartyModelConfig::~ThirdPartyModelConfig() = default;

void ThirdPartyModelConfig::validate()
{
}

web::json::value ThirdPartyModelConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appKeyIsSet_) {
        val[utility::conversions::to_string_t("app_key")] = ModelBase::toJson(appKey_);
    }
    if(llmUrlIsSet_) {
        val[utility::conversions::to_string_t("llm_url")] = ModelBase::toJson(llmUrl_);
    }
    if(isStreamIsSet_) {
        val[utility::conversions::to_string_t("is_stream")] = ModelBase::toJson(isStream_);
    }
    if(chatRoundsIsSet_) {
        val[utility::conversions::to_string_t("chat_rounds")] = ModelBase::toJson(chatRounds_);
    }
    if(sisRegionIsSet_) {
        val[utility::conversions::to_string_t("sis_region")] = ModelBase::toJson(sisRegion_);
    }
    if(sisProjectIdIsSet_) {
        val[utility::conversions::to_string_t("sis_project_id")] = ModelBase::toJson(sisProjectId_);
    }
    if(enableHotWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_words")] = ModelBase::toJson(enableHotWords_);
    }
    if(asrTypeIsSet_) {
        val[utility::conversions::to_string_t("asr_type")] = ModelBase::toJson(asrType_);
    }
    if(asrAccountIsSet_) {
        val[utility::conversions::to_string_t("asr_account")] = ModelBase::toJson(asrAccount_);
    }
    if(asrSecretIsSet_) {
        val[utility::conversions::to_string_t("asr_secret")] = ModelBase::toJson(asrSecret_);
    }

    return val;
}
bool ThirdPartyModelConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("llm_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("llm_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLlmUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_stream"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_rounds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_rounds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatRounds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_type"));
        if(!fieldValue.is_null())
        {
            AsrTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asr_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asr_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrSecret(refVal);
        }
    }
    return ok;
}


std::string ThirdPartyModelConfig::getAppId() const
{
    return appId_;
}

void ThirdPartyModelConfig::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ThirdPartyModelConfig::appIdIsSet() const
{
    return appIdIsSet_;
}

void ThirdPartyModelConfig::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ThirdPartyModelConfig::getAppKey() const
{
    return appKey_;
}

void ThirdPartyModelConfig::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool ThirdPartyModelConfig::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void ThirdPartyModelConfig::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string ThirdPartyModelConfig::getLlmUrl() const
{
    return llmUrl_;
}

void ThirdPartyModelConfig::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool ThirdPartyModelConfig::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void ThirdPartyModelConfig::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

bool ThirdPartyModelConfig::isIsStream() const
{
    return isStream_;
}

void ThirdPartyModelConfig::setIsStream(bool value)
{
    isStream_ = value;
    isStreamIsSet_ = true;
}

bool ThirdPartyModelConfig::isStreamIsSet() const
{
    return isStreamIsSet_;
}

void ThirdPartyModelConfig::unsetisStream()
{
    isStreamIsSet_ = false;
}

int32_t ThirdPartyModelConfig::getChatRounds() const
{
    return chatRounds_;
}

void ThirdPartyModelConfig::setChatRounds(int32_t value)
{
    chatRounds_ = value;
    chatRoundsIsSet_ = true;
}

bool ThirdPartyModelConfig::chatRoundsIsSet() const
{
    return chatRoundsIsSet_;
}

void ThirdPartyModelConfig::unsetchatRounds()
{
    chatRoundsIsSet_ = false;
}

int32_t ThirdPartyModelConfig::getSisRegion() const
{
    return sisRegion_;
}

void ThirdPartyModelConfig::setSisRegion(int32_t value)
{
    sisRegion_ = value;
    sisRegionIsSet_ = true;
}

bool ThirdPartyModelConfig::sisRegionIsSet() const
{
    return sisRegionIsSet_;
}

void ThirdPartyModelConfig::unsetsisRegion()
{
    sisRegionIsSet_ = false;
}

std::string ThirdPartyModelConfig::getSisProjectId() const
{
    return sisProjectId_;
}

void ThirdPartyModelConfig::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool ThirdPartyModelConfig::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void ThirdPartyModelConfig::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

bool ThirdPartyModelConfig::isEnableHotWords() const
{
    return enableHotWords_;
}

void ThirdPartyModelConfig::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool ThirdPartyModelConfig::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void ThirdPartyModelConfig::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

AsrTypeEnum ThirdPartyModelConfig::getAsrType() const
{
    return asrType_;
}

void ThirdPartyModelConfig::setAsrType(const AsrTypeEnum& value)
{
    asrType_ = value;
    asrTypeIsSet_ = true;
}

bool ThirdPartyModelConfig::asrTypeIsSet() const
{
    return asrTypeIsSet_;
}

void ThirdPartyModelConfig::unsetasrType()
{
    asrTypeIsSet_ = false;
}

std::string ThirdPartyModelConfig::getAsrAccount() const
{
    return asrAccount_;
}

void ThirdPartyModelConfig::setAsrAccount(const std::string& value)
{
    asrAccount_ = value;
    asrAccountIsSet_ = true;
}

bool ThirdPartyModelConfig::asrAccountIsSet() const
{
    return asrAccountIsSet_;
}

void ThirdPartyModelConfig::unsetasrAccount()
{
    asrAccountIsSet_ = false;
}

std::string ThirdPartyModelConfig::getAsrSecret() const
{
    return asrSecret_;
}

void ThirdPartyModelConfig::setAsrSecret(const std::string& value)
{
    asrSecret_ = value;
    asrSecretIsSet_ = true;
}

bool ThirdPartyModelConfig::asrSecretIsSet() const
{
    return asrSecretIsSet_;
}

void ThirdPartyModelConfig::unsetasrSecret()
{
    asrSecretIsSet_ = false;
}

}
}
}
}
}


