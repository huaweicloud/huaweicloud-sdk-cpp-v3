

#include "huaweicloud/metastudio/v1/model/Update2dModelTrainingJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Update2dModelTrainingJobReq::Update2dModelTrainingJobReq()
{
    name_ = "";
    nameIsSet_ = false;
    contact_ = "";
    contactIsSet_ = false;
    commandMessage_ = "";
    commandMessageIsSet_ = false;
    videoMultipartCount_ = 0;
    videoMultipartCountIsSet_ = false;
    actionVideoMultipartCount_ = 0;
    actionVideoMultipartCountIsSet_ = false;
    isBackgroundReplacement_ = false;
    isBackgroundReplacementIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    tagsIsSet_ = false;
    isFastFlexus_ = false;
    isFastFlexusIsSet_ = false;
    samplesBasicInfoIsSet_ = false;
    voicePropertiesIsSet_ = false;
    supportedServiceIsSet_ = false;
    audioSourceType_ = "";
    audioSourceTypeIsSet_ = false;
}

Update2dModelTrainingJobReq::~Update2dModelTrainingJobReq() = default;

void Update2dModelTrainingJobReq::validate()
{
}

web::json::value Update2dModelTrainingJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(contactIsSet_) {
        val[utility::conversions::to_string_t("contact")] = ModelBase::toJson(contact_);
    }
    if(commandMessageIsSet_) {
        val[utility::conversions::to_string_t("command_message")] = ModelBase::toJson(commandMessage_);
    }
    if(videoMultipartCountIsSet_) {
        val[utility::conversions::to_string_t("video_multipart_count")] = ModelBase::toJson(videoMultipartCount_);
    }
    if(actionVideoMultipartCountIsSet_) {
        val[utility::conversions::to_string_t("action_video_multipart_count")] = ModelBase::toJson(actionVideoMultipartCount_);
    }
    if(isBackgroundReplacementIsSet_) {
        val[utility::conversions::to_string_t("is_background_replacement")] = ModelBase::toJson(isBackgroundReplacement_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(isFastFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_fast_flexus")] = ModelBase::toJson(isFastFlexus_);
    }
    if(samplesBasicInfoIsSet_) {
        val[utility::conversions::to_string_t("samples_basic_info")] = ModelBase::toJson(samplesBasicInfo_);
    }
    if(voicePropertiesIsSet_) {
        val[utility::conversions::to_string_t("voice_properties")] = ModelBase::toJson(voiceProperties_);
    }
    if(supportedServiceIsSet_) {
        val[utility::conversions::to_string_t("supported_service")] = ModelBase::toJson(supportedService_);
    }
    if(audioSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("audio_source_type")] = ModelBase::toJson(audioSourceType_);
    }

    return val;
}
bool Update2dModelTrainingJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContact(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_multipart_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_multipart_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoMultipartCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_video_multipart_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_video_multipart_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionVideoMultipartCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_background_replacement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_background_replacement"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBackgroundReplacement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_fast_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_fast_flexus"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFastFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("samples_basic_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("samples_basic_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionBasicSampleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSamplesBasicInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_properties"));
        if(!fieldValue.is_null())
        {
            VoiceProperties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_service"));
        if(!fieldValue.is_null())
        {
            std::vector<SupportedServiceEnum> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioSourceType(refVal);
        }
    }
    return ok;
}


std::string Update2dModelTrainingJobReq::getName() const
{
    return name_;
}

void Update2dModelTrainingJobReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Update2dModelTrainingJobReq::nameIsSet() const
{
    return nameIsSet_;
}

void Update2dModelTrainingJobReq::unsetname()
{
    nameIsSet_ = false;
}

std::string Update2dModelTrainingJobReq::getContact() const
{
    return contact_;
}

void Update2dModelTrainingJobReq::setContact(const std::string& value)
{
    contact_ = value;
    contactIsSet_ = true;
}

bool Update2dModelTrainingJobReq::contactIsSet() const
{
    return contactIsSet_;
}

void Update2dModelTrainingJobReq::unsetcontact()
{
    contactIsSet_ = false;
}

std::string Update2dModelTrainingJobReq::getCommandMessage() const
{
    return commandMessage_;
}

void Update2dModelTrainingJobReq::setCommandMessage(const std::string& value)
{
    commandMessage_ = value;
    commandMessageIsSet_ = true;
}

bool Update2dModelTrainingJobReq::commandMessageIsSet() const
{
    return commandMessageIsSet_;
}

void Update2dModelTrainingJobReq::unsetcommandMessage()
{
    commandMessageIsSet_ = false;
}

int32_t Update2dModelTrainingJobReq::getVideoMultipartCount() const
{
    return videoMultipartCount_;
}

void Update2dModelTrainingJobReq::setVideoMultipartCount(int32_t value)
{
    videoMultipartCount_ = value;
    videoMultipartCountIsSet_ = true;
}

bool Update2dModelTrainingJobReq::videoMultipartCountIsSet() const
{
    return videoMultipartCountIsSet_;
}

void Update2dModelTrainingJobReq::unsetvideoMultipartCount()
{
    videoMultipartCountIsSet_ = false;
}

int32_t Update2dModelTrainingJobReq::getActionVideoMultipartCount() const
{
    return actionVideoMultipartCount_;
}

void Update2dModelTrainingJobReq::setActionVideoMultipartCount(int32_t value)
{
    actionVideoMultipartCount_ = value;
    actionVideoMultipartCountIsSet_ = true;
}

bool Update2dModelTrainingJobReq::actionVideoMultipartCountIsSet() const
{
    return actionVideoMultipartCountIsSet_;
}

void Update2dModelTrainingJobReq::unsetactionVideoMultipartCount()
{
    actionVideoMultipartCountIsSet_ = false;
}

bool Update2dModelTrainingJobReq::isIsBackgroundReplacement() const
{
    return isBackgroundReplacement_;
}

void Update2dModelTrainingJobReq::setIsBackgroundReplacement(bool value)
{
    isBackgroundReplacement_ = value;
    isBackgroundReplacementIsSet_ = true;
}

bool Update2dModelTrainingJobReq::isBackgroundReplacementIsSet() const
{
    return isBackgroundReplacementIsSet_;
}

void Update2dModelTrainingJobReq::unsetisBackgroundReplacement()
{
    isBackgroundReplacementIsSet_ = false;
}

std::string Update2dModelTrainingJobReq::getBatchName() const
{
    return batchName_;
}

void Update2dModelTrainingJobReq::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool Update2dModelTrainingJobReq::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void Update2dModelTrainingJobReq::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::vector<std::string>& Update2dModelTrainingJobReq::getTags()
{
    return tags_;
}

void Update2dModelTrainingJobReq::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Update2dModelTrainingJobReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void Update2dModelTrainingJobReq::unsettags()
{
    tagsIsSet_ = false;
}

bool Update2dModelTrainingJobReq::isIsFastFlexus() const
{
    return isFastFlexus_;
}

void Update2dModelTrainingJobReq::setIsFastFlexus(bool value)
{
    isFastFlexus_ = value;
    isFastFlexusIsSet_ = true;
}

bool Update2dModelTrainingJobReq::isFastFlexusIsSet() const
{
    return isFastFlexusIsSet_;
}

void Update2dModelTrainingJobReq::unsetisFastFlexus()
{
    isFastFlexusIsSet_ = false;
}

std::vector<ActionBasicSampleInfo>& Update2dModelTrainingJobReq::getSamplesBasicInfo()
{
    return samplesBasicInfo_;
}

void Update2dModelTrainingJobReq::setSamplesBasicInfo(const std::vector<ActionBasicSampleInfo>& value)
{
    samplesBasicInfo_ = value;
    samplesBasicInfoIsSet_ = true;
}

bool Update2dModelTrainingJobReq::samplesBasicInfoIsSet() const
{
    return samplesBasicInfoIsSet_;
}

void Update2dModelTrainingJobReq::unsetsamplesBasicInfo()
{
    samplesBasicInfoIsSet_ = false;
}

VoiceProperties Update2dModelTrainingJobReq::getVoiceProperties() const
{
    return voiceProperties_;
}

void Update2dModelTrainingJobReq::setVoiceProperties(const VoiceProperties& value)
{
    voiceProperties_ = value;
    voicePropertiesIsSet_ = true;
}

bool Update2dModelTrainingJobReq::voicePropertiesIsSet() const
{
    return voicePropertiesIsSet_;
}

void Update2dModelTrainingJobReq::unsetvoiceProperties()
{
    voicePropertiesIsSet_ = false;
}

std::vector<SupportedServiceEnum>& Update2dModelTrainingJobReq::getSupportedService()
{
    return supportedService_;
}

void Update2dModelTrainingJobReq::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool Update2dModelTrainingJobReq::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void Update2dModelTrainingJobReq::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

std::string Update2dModelTrainingJobReq::getAudioSourceType() const
{
    return audioSourceType_;
}

void Update2dModelTrainingJobReq::setAudioSourceType(const std::string& value)
{
    audioSourceType_ = value;
    audioSourceTypeIsSet_ = true;
}

bool Update2dModelTrainingJobReq::audioSourceTypeIsSet() const
{
    return audioSourceTypeIsSet_;
}

void Update2dModelTrainingJobReq::unsetaudioSourceType()
{
    audioSourceTypeIsSet_ = false;
}

}
}
}
}
}


