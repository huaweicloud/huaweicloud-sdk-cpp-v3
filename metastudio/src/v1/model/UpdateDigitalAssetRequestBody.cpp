

#include "huaweicloud/metastudio/v1/model/UpdateDigitalAssetRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDigitalAssetRequestBody::UpdateDigitalAssetRequestBody()
{
    assetName_ = "";
    assetNameIsSet_ = false;
    assetDescription_ = "";
    assetDescriptionIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    assetState_ = "";
    assetStateIsSet_ = false;
    reviewConfigIsSet_ = false;
    tagsIsSet_ = false;
    assetExtraMetaIsSet_ = false;
    systemPropertiesIsSet_ = false;
    sharedConfigIsSet_ = false;
    assetOrder_ = 0;
    assetOrderIsSet_ = false;
    supportedServiceIsSet_ = false;
    autoOperationConfigIsSet_ = false;
}

UpdateDigitalAssetRequestBody::~UpdateDigitalAssetRequestBody() = default;

void UpdateDigitalAssetRequestBody::validate()
{
}

web::json::value UpdateDigitalAssetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetDescriptionIsSet_) {
        val[utility::conversions::to_string_t("asset_description")] = ModelBase::toJson(assetDescription_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(assetStateIsSet_) {
        val[utility::conversions::to_string_t("asset_state")] = ModelBase::toJson(assetState_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(assetExtraMetaIsSet_) {
        val[utility::conversions::to_string_t("asset_extra_meta")] = ModelBase::toJson(assetExtraMeta_);
    }
    if(systemPropertiesIsSet_) {
        val[utility::conversions::to_string_t("system_properties")] = ModelBase::toJson(systemProperties_);
    }
    if(sharedConfigIsSet_) {
        val[utility::conversions::to_string_t("shared_config")] = ModelBase::toJson(sharedConfig_);
    }
    if(assetOrderIsSet_) {
        val[utility::conversions::to_string_t("asset_order")] = ModelBase::toJson(assetOrder_);
    }
    if(supportedServiceIsSet_) {
        val[utility::conversions::to_string_t("supported_service")] = ModelBase::toJson(supportedService_);
    }
    if(autoOperationConfigIsSet_) {
        val[utility::conversions::to_string_t("auto_operation_config")] = ModelBase::toJson(autoOperationConfig_);
    }

    return val;
}
bool UpdateDigitalAssetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_extra_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_extra_meta"));
        if(!fieldValue.is_null())
        {
            AssetExtraMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetExtraMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_properties"));
        if(!fieldValue.is_null())
        {
            std::vector<SystemProperty> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_config"));
        if(!fieldValue.is_null())
        {
            AssetSharedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_operation_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_operation_config"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoOperationConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoOperationConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateDigitalAssetRequestBody::getAssetName() const
{
    return assetName_;
}

void UpdateDigitalAssetRequestBody::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string UpdateDigitalAssetRequestBody::getAssetDescription() const
{
    return assetDescription_;
}

void UpdateDigitalAssetRequestBody::setAssetDescription(const std::string& value)
{
    assetDescription_ = value;
    assetDescriptionIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::assetDescriptionIsSet() const
{
    return assetDescriptionIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetassetDescription()
{
    assetDescriptionIsSet_ = false;
}

std::string UpdateDigitalAssetRequestBody::getAssetType() const
{
    return assetType_;
}

void UpdateDigitalAssetRequestBody::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string UpdateDigitalAssetRequestBody::getAssetState() const
{
    return assetState_;
}

void UpdateDigitalAssetRequestBody::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetassetState()
{
    assetStateIsSet_ = false;
}

ReviewConfig UpdateDigitalAssetRequestBody::getReviewConfig() const
{
    return reviewConfig_;
}

void UpdateDigitalAssetRequestBody::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

std::vector<std::string>& UpdateDigitalAssetRequestBody::getTags()
{
    return tags_;
}

void UpdateDigitalAssetRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateDigitalAssetRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

AssetExtraMeta UpdateDigitalAssetRequestBody::getAssetExtraMeta() const
{
    return assetExtraMeta_;
}

void UpdateDigitalAssetRequestBody::setAssetExtraMeta(const AssetExtraMeta& value)
{
    assetExtraMeta_ = value;
    assetExtraMetaIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::assetExtraMetaIsSet() const
{
    return assetExtraMetaIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetassetExtraMeta()
{
    assetExtraMetaIsSet_ = false;
}

std::vector<SystemProperty>& UpdateDigitalAssetRequestBody::getSystemProperties()
{
    return systemProperties_;
}

void UpdateDigitalAssetRequestBody::setSystemProperties(const std::vector<SystemProperty>& value)
{
    systemProperties_ = value;
    systemPropertiesIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::systemPropertiesIsSet() const
{
    return systemPropertiesIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetsystemProperties()
{
    systemPropertiesIsSet_ = false;
}

AssetSharedConfig UpdateDigitalAssetRequestBody::getSharedConfig() const
{
    return sharedConfig_;
}

void UpdateDigitalAssetRequestBody::setSharedConfig(const AssetSharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

int32_t UpdateDigitalAssetRequestBody::getAssetOrder() const
{
    return assetOrder_;
}

void UpdateDigitalAssetRequestBody::setAssetOrder(int32_t value)
{
    assetOrder_ = value;
    assetOrderIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::assetOrderIsSet() const
{
    return assetOrderIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetassetOrder()
{
    assetOrderIsSet_ = false;
}

std::vector<SupportedServiceEnum>& UpdateDigitalAssetRequestBody::getSupportedService()
{
    return supportedService_;
}

void UpdateDigitalAssetRequestBody::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

std::vector<AutoOperationConfig>& UpdateDigitalAssetRequestBody::getAutoOperationConfig()
{
    return autoOperationConfig_;
}

void UpdateDigitalAssetRequestBody::setAutoOperationConfig(const std::vector<AutoOperationConfig>& value)
{
    autoOperationConfig_ = value;
    autoOperationConfigIsSet_ = true;
}

bool UpdateDigitalAssetRequestBody::autoOperationConfigIsSet() const
{
    return autoOperationConfigIsSet_;
}

void UpdateDigitalAssetRequestBody::unsetautoOperationConfig()
{
    autoOperationConfigIsSet_ = false;
}

}
}
}
}
}


