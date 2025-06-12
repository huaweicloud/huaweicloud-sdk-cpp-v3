

#include "huaweicloud/metastudio/v1/model/Create2dModelTrainingJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Create2dModelTrainingJobReq::Create2dModelTrainingJobReq()
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
    modelVersion_ = "";
    modelVersionIsSet_ = false;
    isFlexus_ = false;
    isFlexusIsSet_ = false;
    isOnlyHumanModel_ = false;
    isOnlyHumanModelIsSet_ = false;
    audioSourceType_ = "";
    audioSourceTypeIsSet_ = false;
    voicePropertiesIsSet_ = false;
    supportedServiceIsSet_ = false;
}

Create2dModelTrainingJobReq::~Create2dModelTrainingJobReq() = default;

void Create2dModelTrainingJobReq::validate()
{
}

web::json::value Create2dModelTrainingJobReq::toJson() const
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
    if(modelVersionIsSet_) {
        val[utility::conversions::to_string_t("model_version")] = ModelBase::toJson(modelVersion_);
    }
    if(isFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_flexus")] = ModelBase::toJson(isFlexus_);
    }
    if(isOnlyHumanModelIsSet_) {
        val[utility::conversions::to_string_t("is_only_human_model")] = ModelBase::toJson(isOnlyHumanModel_);
    }
    if(audioSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("audio_source_type")] = ModelBase::toJson(audioSourceType_);
    }
    if(voicePropertiesIsSet_) {
        val[utility::conversions::to_string_t("voice_properties")] = ModelBase::toJson(voiceProperties_);
    }
    if(supportedServiceIsSet_) {
        val[utility::conversions::to_string_t("supported_service")] = ModelBase::toJson(supportedService_);
    }

    return val;
}
bool Create2dModelTrainingJobReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("model_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_flexus"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_only_human_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_only_human_model"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOnlyHumanModel(refVal);
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
    return ok;
}


std::string Create2dModelTrainingJobReq::getName() const
{
    return name_;
}

void Create2dModelTrainingJobReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Create2dModelTrainingJobReq::nameIsSet() const
{
    return nameIsSet_;
}

void Create2dModelTrainingJobReq::unsetname()
{
    nameIsSet_ = false;
}

std::string Create2dModelTrainingJobReq::getContact() const
{
    return contact_;
}

void Create2dModelTrainingJobReq::setContact(const std::string& value)
{
    contact_ = value;
    contactIsSet_ = true;
}

bool Create2dModelTrainingJobReq::contactIsSet() const
{
    return contactIsSet_;
}

void Create2dModelTrainingJobReq::unsetcontact()
{
    contactIsSet_ = false;
}

std::string Create2dModelTrainingJobReq::getCommandMessage() const
{
    return commandMessage_;
}

void Create2dModelTrainingJobReq::setCommandMessage(const std::string& value)
{
    commandMessage_ = value;
    commandMessageIsSet_ = true;
}

bool Create2dModelTrainingJobReq::commandMessageIsSet() const
{
    return commandMessageIsSet_;
}

void Create2dModelTrainingJobReq::unsetcommandMessage()
{
    commandMessageIsSet_ = false;
}

int32_t Create2dModelTrainingJobReq::getVideoMultipartCount() const
{
    return videoMultipartCount_;
}

void Create2dModelTrainingJobReq::setVideoMultipartCount(int32_t value)
{
    videoMultipartCount_ = value;
    videoMultipartCountIsSet_ = true;
}

bool Create2dModelTrainingJobReq::videoMultipartCountIsSet() const
{
    return videoMultipartCountIsSet_;
}

void Create2dModelTrainingJobReq::unsetvideoMultipartCount()
{
    videoMultipartCountIsSet_ = false;
}

int32_t Create2dModelTrainingJobReq::getActionVideoMultipartCount() const
{
    return actionVideoMultipartCount_;
}

void Create2dModelTrainingJobReq::setActionVideoMultipartCount(int32_t value)
{
    actionVideoMultipartCount_ = value;
    actionVideoMultipartCountIsSet_ = true;
}

bool Create2dModelTrainingJobReq::actionVideoMultipartCountIsSet() const
{
    return actionVideoMultipartCountIsSet_;
}

void Create2dModelTrainingJobReq::unsetactionVideoMultipartCount()
{
    actionVideoMultipartCountIsSet_ = false;
}

bool Create2dModelTrainingJobReq::isIsBackgroundReplacement() const
{
    return isBackgroundReplacement_;
}

void Create2dModelTrainingJobReq::setIsBackgroundReplacement(bool value)
{
    isBackgroundReplacement_ = value;
    isBackgroundReplacementIsSet_ = true;
}

bool Create2dModelTrainingJobReq::isBackgroundReplacementIsSet() const
{
    return isBackgroundReplacementIsSet_;
}

void Create2dModelTrainingJobReq::unsetisBackgroundReplacement()
{
    isBackgroundReplacementIsSet_ = false;
}

std::string Create2dModelTrainingJobReq::getBatchName() const
{
    return batchName_;
}

void Create2dModelTrainingJobReq::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool Create2dModelTrainingJobReq::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void Create2dModelTrainingJobReq::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::vector<std::string>& Create2dModelTrainingJobReq::getTags()
{
    return tags_;
}

void Create2dModelTrainingJobReq::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Create2dModelTrainingJobReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void Create2dModelTrainingJobReq::unsettags()
{
    tagsIsSet_ = false;
}

std::string Create2dModelTrainingJobReq::getModelVersion() const
{
    return modelVersion_;
}

void Create2dModelTrainingJobReq::setModelVersion(const std::string& value)
{
    modelVersion_ = value;
    modelVersionIsSet_ = true;
}

bool Create2dModelTrainingJobReq::modelVersionIsSet() const
{
    return modelVersionIsSet_;
}

void Create2dModelTrainingJobReq::unsetmodelVersion()
{
    modelVersionIsSet_ = false;
}

bool Create2dModelTrainingJobReq::isIsFlexus() const
{
    return isFlexus_;
}

void Create2dModelTrainingJobReq::setIsFlexus(bool value)
{
    isFlexus_ = value;
    isFlexusIsSet_ = true;
}

bool Create2dModelTrainingJobReq::isFlexusIsSet() const
{
    return isFlexusIsSet_;
}

void Create2dModelTrainingJobReq::unsetisFlexus()
{
    isFlexusIsSet_ = false;
}

bool Create2dModelTrainingJobReq::isIsOnlyHumanModel() const
{
    return isOnlyHumanModel_;
}

void Create2dModelTrainingJobReq::setIsOnlyHumanModel(bool value)
{
    isOnlyHumanModel_ = value;
    isOnlyHumanModelIsSet_ = true;
}

bool Create2dModelTrainingJobReq::isOnlyHumanModelIsSet() const
{
    return isOnlyHumanModelIsSet_;
}

void Create2dModelTrainingJobReq::unsetisOnlyHumanModel()
{
    isOnlyHumanModelIsSet_ = false;
}

std::string Create2dModelTrainingJobReq::getAudioSourceType() const
{
    return audioSourceType_;
}

void Create2dModelTrainingJobReq::setAudioSourceType(const std::string& value)
{
    audioSourceType_ = value;
    audioSourceTypeIsSet_ = true;
}

bool Create2dModelTrainingJobReq::audioSourceTypeIsSet() const
{
    return audioSourceTypeIsSet_;
}

void Create2dModelTrainingJobReq::unsetaudioSourceType()
{
    audioSourceTypeIsSet_ = false;
}

VoiceProperties Create2dModelTrainingJobReq::getVoiceProperties() const
{
    return voiceProperties_;
}

void Create2dModelTrainingJobReq::setVoiceProperties(const VoiceProperties& value)
{
    voiceProperties_ = value;
    voicePropertiesIsSet_ = true;
}

bool Create2dModelTrainingJobReq::voicePropertiesIsSet() const
{
    return voicePropertiesIsSet_;
}

void Create2dModelTrainingJobReq::unsetvoiceProperties()
{
    voicePropertiesIsSet_ = false;
}

std::vector<SupportedServiceEnum>& Create2dModelTrainingJobReq::getSupportedService()
{
    return supportedService_;
}

void Create2dModelTrainingJobReq::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool Create2dModelTrainingJobReq::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void Create2dModelTrainingJobReq::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

}
}
}
}
}


