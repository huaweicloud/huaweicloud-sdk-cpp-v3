

#include "huaweicloud/metastudio/v1/model/HumanModel2DAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HumanModel2DAssetMeta::HumanModel2DAssetMeta()
{
    isActionEditable_ = false;
    isActionEditableIsSet_ = false;
    isLiveCopy_ = false;
    isLiveCopyIsSet_ = false;
    isRealBackground_ = false;
    isRealBackgroundIsSet_ = false;
    supportLive_ = false;
    supportLiveIsSet_ = false;
    modelVersion_ = "";
    modelVersionIsSet_ = false;
    modelResolution_ = "";
    modelResolutionIsSet_ = false;
    deviceNamesIsSet_ = false;
    isWithActionLibrary_ = false;
    isWithActionLibraryIsSet_ = false;
    actionTagMapIsSet_ = false;
    isFlexus_ = false;
    isFlexusIsSet_ = false;
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
}

HumanModel2DAssetMeta::~HumanModel2DAssetMeta() = default;

void HumanModel2DAssetMeta::validate()
{
}

web::json::value HumanModel2DAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isActionEditableIsSet_) {
        val[utility::conversions::to_string_t("is_action_editable")] = ModelBase::toJson(isActionEditable_);
    }
    if(isLiveCopyIsSet_) {
        val[utility::conversions::to_string_t("is_live_copy")] = ModelBase::toJson(isLiveCopy_);
    }
    if(isRealBackgroundIsSet_) {
        val[utility::conversions::to_string_t("is_real_background")] = ModelBase::toJson(isRealBackground_);
    }
    if(supportLiveIsSet_) {
        val[utility::conversions::to_string_t("support_live")] = ModelBase::toJson(supportLive_);
    }
    if(modelVersionIsSet_) {
        val[utility::conversions::to_string_t("model_version")] = ModelBase::toJson(modelVersion_);
    }
    if(modelResolutionIsSet_) {
        val[utility::conversions::to_string_t("model_resolution")] = ModelBase::toJson(modelResolution_);
    }
    if(deviceNamesIsSet_) {
        val[utility::conversions::to_string_t("device_names")] = ModelBase::toJson(deviceNames_);
    }
    if(isWithActionLibraryIsSet_) {
        val[utility::conversions::to_string_t("is_with_action_library")] = ModelBase::toJson(isWithActionLibrary_);
    }
    if(actionTagMapIsSet_) {
        val[utility::conversions::to_string_t("action_tag_map")] = ModelBase::toJson(actionTagMap_);
    }
    if(isFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_flexus")] = ModelBase::toJson(isFlexus_);
    }
    if(voiceAssetIdIsSet_) {
        val[utility::conversions::to_string_t("voice_asset_id")] = ModelBase::toJson(voiceAssetId_);
    }

    return val;
}
bool HumanModel2DAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_action_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_action_editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsActionEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_live_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_live_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLiveCopy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_real_background"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_real_background"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRealBackground(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_live"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_live"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportLive(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("model_resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_resolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_with_action_library"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_with_action_library"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsWithActionLibrary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_tag_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_tag_map"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionTagInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionTagMap(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("voice_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceAssetId(refVal);
        }
    }
    return ok;
}


bool HumanModel2DAssetMeta::isIsActionEditable() const
{
    return isActionEditable_;
}

void HumanModel2DAssetMeta::setIsActionEditable(bool value)
{
    isActionEditable_ = value;
    isActionEditableIsSet_ = true;
}

bool HumanModel2DAssetMeta::isActionEditableIsSet() const
{
    return isActionEditableIsSet_;
}

void HumanModel2DAssetMeta::unsetisActionEditable()
{
    isActionEditableIsSet_ = false;
}

bool HumanModel2DAssetMeta::isIsLiveCopy() const
{
    return isLiveCopy_;
}

void HumanModel2DAssetMeta::setIsLiveCopy(bool value)
{
    isLiveCopy_ = value;
    isLiveCopyIsSet_ = true;
}

bool HumanModel2DAssetMeta::isLiveCopyIsSet() const
{
    return isLiveCopyIsSet_;
}

void HumanModel2DAssetMeta::unsetisLiveCopy()
{
    isLiveCopyIsSet_ = false;
}

bool HumanModel2DAssetMeta::isIsRealBackground() const
{
    return isRealBackground_;
}

void HumanModel2DAssetMeta::setIsRealBackground(bool value)
{
    isRealBackground_ = value;
    isRealBackgroundIsSet_ = true;
}

bool HumanModel2DAssetMeta::isRealBackgroundIsSet() const
{
    return isRealBackgroundIsSet_;
}

void HumanModel2DAssetMeta::unsetisRealBackground()
{
    isRealBackgroundIsSet_ = false;
}

bool HumanModel2DAssetMeta::isSupportLive() const
{
    return supportLive_;
}

void HumanModel2DAssetMeta::setSupportLive(bool value)
{
    supportLive_ = value;
    supportLiveIsSet_ = true;
}

bool HumanModel2DAssetMeta::supportLiveIsSet() const
{
    return supportLiveIsSet_;
}

void HumanModel2DAssetMeta::unsetsupportLive()
{
    supportLiveIsSet_ = false;
}

std::string HumanModel2DAssetMeta::getModelVersion() const
{
    return modelVersion_;
}

void HumanModel2DAssetMeta::setModelVersion(const std::string& value)
{
    modelVersion_ = value;
    modelVersionIsSet_ = true;
}

bool HumanModel2DAssetMeta::modelVersionIsSet() const
{
    return modelVersionIsSet_;
}

void HumanModel2DAssetMeta::unsetmodelVersion()
{
    modelVersionIsSet_ = false;
}

std::string HumanModel2DAssetMeta::getModelResolution() const
{
    return modelResolution_;
}

void HumanModel2DAssetMeta::setModelResolution(const std::string& value)
{
    modelResolution_ = value;
    modelResolutionIsSet_ = true;
}

bool HumanModel2DAssetMeta::modelResolutionIsSet() const
{
    return modelResolutionIsSet_;
}

void HumanModel2DAssetMeta::unsetmodelResolution()
{
    modelResolutionIsSet_ = false;
}

std::vector<std::string>& HumanModel2DAssetMeta::getDeviceNames()
{
    return deviceNames_;
}

void HumanModel2DAssetMeta::setDeviceNames(const std::vector<std::string>& value)
{
    deviceNames_ = value;
    deviceNamesIsSet_ = true;
}

bool HumanModel2DAssetMeta::deviceNamesIsSet() const
{
    return deviceNamesIsSet_;
}

void HumanModel2DAssetMeta::unsetdeviceNames()
{
    deviceNamesIsSet_ = false;
}

bool HumanModel2DAssetMeta::isIsWithActionLibrary() const
{
    return isWithActionLibrary_;
}

void HumanModel2DAssetMeta::setIsWithActionLibrary(bool value)
{
    isWithActionLibrary_ = value;
    isWithActionLibraryIsSet_ = true;
}

bool HumanModel2DAssetMeta::isWithActionLibraryIsSet() const
{
    return isWithActionLibraryIsSet_;
}

void HumanModel2DAssetMeta::unsetisWithActionLibrary()
{
    isWithActionLibraryIsSet_ = false;
}

std::vector<ActionTagInfo>& HumanModel2DAssetMeta::getActionTagMap()
{
    return actionTagMap_;
}

void HumanModel2DAssetMeta::setActionTagMap(const std::vector<ActionTagInfo>& value)
{
    actionTagMap_ = value;
    actionTagMapIsSet_ = true;
}

bool HumanModel2DAssetMeta::actionTagMapIsSet() const
{
    return actionTagMapIsSet_;
}

void HumanModel2DAssetMeta::unsetactionTagMap()
{
    actionTagMapIsSet_ = false;
}

bool HumanModel2DAssetMeta::isIsFlexus() const
{
    return isFlexus_;
}

void HumanModel2DAssetMeta::setIsFlexus(bool value)
{
    isFlexus_ = value;
    isFlexusIsSet_ = true;
}

bool HumanModel2DAssetMeta::isFlexusIsSet() const
{
    return isFlexusIsSet_;
}

void HumanModel2DAssetMeta::unsetisFlexus()
{
    isFlexusIsSet_ = false;
}

std::string HumanModel2DAssetMeta::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void HumanModel2DAssetMeta::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool HumanModel2DAssetMeta::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void HumanModel2DAssetMeta::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

}
}
}
}
}


