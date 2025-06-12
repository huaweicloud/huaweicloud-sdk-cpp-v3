

#include "huaweicloud/metastudio/v1/model/LiveVideoScriptInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveVideoScriptInfo::LiveVideoScriptInfo()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    scriptName_ = "";
    scriptNameIsSet_ = false;
    scriptDescription_ = "";
    scriptDescriptionIsSet_ = false;
    dhId_ = "";
    dhIdIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    voiceConfigIsSet_ = false;
    backgroundConfigIsSet_ = false;
    layerConfigIsSet_ = false;
    shootScriptsIsSet_ = false;
}

LiveVideoScriptInfo::~LiveVideoScriptInfo() = default;

void LiveVideoScriptInfo::validate()
{
}

web::json::value LiveVideoScriptInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(scriptNameIsSet_) {
        val[utility::conversions::to_string_t("script_name")] = ModelBase::toJson(scriptName_);
    }
    if(scriptDescriptionIsSet_) {
        val[utility::conversions::to_string_t("script_description")] = ModelBase::toJson(scriptDescription_);
    }
    if(dhIdIsSet_) {
        val[utility::conversions::to_string_t("dh_id")] = ModelBase::toJson(dhId_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(backgroundConfigIsSet_) {
        val[utility::conversions::to_string_t("background_config")] = ModelBase::toJson(backgroundConfig_);
    }
    if(layerConfigIsSet_) {
        val[utility::conversions::to_string_t("layer_config")] = ModelBase::toJson(layerConfig_);
    }
    if(shootScriptsIsSet_) {
        val[utility::conversions::to_string_t("shoot_scripts")] = ModelBase::toJson(shootScripts_);
    }

    return val;
}
bool LiveVideoScriptInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dh_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dh_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDhId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config"));
        if(!fieldValue.is_null())
        {
            VoiceConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_config"));
        if(!fieldValue.is_null())
        {
            std::vector<BackgroundConfigInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_config"));
        if(!fieldValue.is_null())
        {
            std::vector<LayerConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shoot_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shoot_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveShootScriptItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShootScripts(refVal);
        }
    }
    return ok;
}


std::string LiveVideoScriptInfo::getScriptId() const
{
    return scriptId_;
}

void LiveVideoScriptInfo::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool LiveVideoScriptInfo::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void LiveVideoScriptInfo::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

std::string LiveVideoScriptInfo::getScriptName() const
{
    return scriptName_;
}

void LiveVideoScriptInfo::setScriptName(const std::string& value)
{
    scriptName_ = value;
    scriptNameIsSet_ = true;
}

bool LiveVideoScriptInfo::scriptNameIsSet() const
{
    return scriptNameIsSet_;
}

void LiveVideoScriptInfo::unsetscriptName()
{
    scriptNameIsSet_ = false;
}

std::string LiveVideoScriptInfo::getScriptDescription() const
{
    return scriptDescription_;
}

void LiveVideoScriptInfo::setScriptDescription(const std::string& value)
{
    scriptDescription_ = value;
    scriptDescriptionIsSet_ = true;
}

bool LiveVideoScriptInfo::scriptDescriptionIsSet() const
{
    return scriptDescriptionIsSet_;
}

void LiveVideoScriptInfo::unsetscriptDescription()
{
    scriptDescriptionIsSet_ = false;
}

std::string LiveVideoScriptInfo::getDhId() const
{
    return dhId_;
}

void LiveVideoScriptInfo::setDhId(const std::string& value)
{
    dhId_ = value;
    dhIdIsSet_ = true;
}

bool LiveVideoScriptInfo::dhIdIsSet() const
{
    return dhIdIsSet_;
}

void LiveVideoScriptInfo::unsetdhId()
{
    dhIdIsSet_ = false;
}

std::string LiveVideoScriptInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void LiveVideoScriptInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool LiveVideoScriptInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void LiveVideoScriptInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

VoiceConfig LiveVideoScriptInfo::getVoiceConfig() const
{
    return voiceConfig_;
}

void LiveVideoScriptInfo::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool LiveVideoScriptInfo::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void LiveVideoScriptInfo::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

std::vector<BackgroundConfigInfo>& LiveVideoScriptInfo::getBackgroundConfig()
{
    return backgroundConfig_;
}

void LiveVideoScriptInfo::setBackgroundConfig(const std::vector<BackgroundConfigInfo>& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool LiveVideoScriptInfo::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void LiveVideoScriptInfo::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::vector<LayerConfig>& LiveVideoScriptInfo::getLayerConfig()
{
    return layerConfig_;
}

void LiveVideoScriptInfo::setLayerConfig(const std::vector<LayerConfig>& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool LiveVideoScriptInfo::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void LiveVideoScriptInfo::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

std::vector<LiveShootScriptItem>& LiveVideoScriptInfo::getShootScripts()
{
    return shootScripts_;
}

void LiveVideoScriptInfo::setShootScripts(const std::vector<LiveShootScriptItem>& value)
{
    shootScripts_ = value;
    shootScriptsIsSet_ = true;
}

bool LiveVideoScriptInfo::shootScriptsIsSet() const
{
    return shootScriptsIsSet_;
}

void LiveVideoScriptInfo::unsetshootScripts()
{
    shootScriptsIsSet_ = false;
}

}
}
}
}
}


