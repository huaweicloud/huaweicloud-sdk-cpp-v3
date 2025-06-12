

#include "huaweicloud/metastudio/v1/model/CreateDigitalAssetRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDigitalAssetRequestBody::CreateDigitalAssetRequestBody()
{
    assetName_ = "";
    assetNameIsSet_ = false;
    assetDescription_ = "";
    assetDescriptionIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    reviewConfigIsSet_ = false;
    tagsIsSet_ = false;
    assetExtraMetaIsSet_ = false;
    systemPropertiesIsSet_ = false;
    sharedConfigIsSet_ = false;
    isNeedGenerateCover_ = false;
    isNeedGenerateCoverIsSet_ = false;
    assetOrder_ = 0;
    assetOrderIsSet_ = false;
    supportedServiceIsSet_ = false;
}

CreateDigitalAssetRequestBody::~CreateDigitalAssetRequestBody() = default;

void CreateDigitalAssetRequestBody::validate()
{
}

web::json::value CreateDigitalAssetRequestBody::toJson() const
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
    if(isNeedGenerateCoverIsSet_) {
        val[utility::conversions::to_string_t("is_need_generate_cover")] = ModelBase::toJson(isNeedGenerateCover_);
    }
    if(assetOrderIsSet_) {
        val[utility::conversions::to_string_t("asset_order")] = ModelBase::toJson(assetOrder_);
    }
    if(supportedServiceIsSet_) {
        val[utility::conversions::to_string_t("supported_service")] = ModelBase::toJson(supportedService_);
    }

    return val;
}
bool CreateDigitalAssetRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_need_generate_cover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_generate_cover"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedGenerateCover(refVal);
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
    return ok;
}


std::string CreateDigitalAssetRequestBody::getAssetName() const
{
    return assetName_;
}

void CreateDigitalAssetRequestBody::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void CreateDigitalAssetRequestBody::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string CreateDigitalAssetRequestBody::getAssetDescription() const
{
    return assetDescription_;
}

void CreateDigitalAssetRequestBody::setAssetDescription(const std::string& value)
{
    assetDescription_ = value;
    assetDescriptionIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::assetDescriptionIsSet() const
{
    return assetDescriptionIsSet_;
}

void CreateDigitalAssetRequestBody::unsetassetDescription()
{
    assetDescriptionIsSet_ = false;
}

std::string CreateDigitalAssetRequestBody::getAssetType() const
{
    return assetType_;
}

void CreateDigitalAssetRequestBody::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void CreateDigitalAssetRequestBody::unsetassetType()
{
    assetTypeIsSet_ = false;
}

ReviewConfig CreateDigitalAssetRequestBody::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateDigitalAssetRequestBody::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateDigitalAssetRequestBody::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

std::vector<std::string>& CreateDigitalAssetRequestBody::getTags()
{
    return tags_;
}

void CreateDigitalAssetRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateDigitalAssetRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

AssetExtraMeta CreateDigitalAssetRequestBody::getAssetExtraMeta() const
{
    return assetExtraMeta_;
}

void CreateDigitalAssetRequestBody::setAssetExtraMeta(const AssetExtraMeta& value)
{
    assetExtraMeta_ = value;
    assetExtraMetaIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::assetExtraMetaIsSet() const
{
    return assetExtraMetaIsSet_;
}

void CreateDigitalAssetRequestBody::unsetassetExtraMeta()
{
    assetExtraMetaIsSet_ = false;
}

std::vector<SystemProperty>& CreateDigitalAssetRequestBody::getSystemProperties()
{
    return systemProperties_;
}

void CreateDigitalAssetRequestBody::setSystemProperties(const std::vector<SystemProperty>& value)
{
    systemProperties_ = value;
    systemPropertiesIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::systemPropertiesIsSet() const
{
    return systemPropertiesIsSet_;
}

void CreateDigitalAssetRequestBody::unsetsystemProperties()
{
    systemPropertiesIsSet_ = false;
}

AssetSharedConfig CreateDigitalAssetRequestBody::getSharedConfig() const
{
    return sharedConfig_;
}

void CreateDigitalAssetRequestBody::setSharedConfig(const AssetSharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void CreateDigitalAssetRequestBody::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

bool CreateDigitalAssetRequestBody::isIsNeedGenerateCover() const
{
    return isNeedGenerateCover_;
}

void CreateDigitalAssetRequestBody::setIsNeedGenerateCover(bool value)
{
    isNeedGenerateCover_ = value;
    isNeedGenerateCoverIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::isNeedGenerateCoverIsSet() const
{
    return isNeedGenerateCoverIsSet_;
}

void CreateDigitalAssetRequestBody::unsetisNeedGenerateCover()
{
    isNeedGenerateCoverIsSet_ = false;
}

int32_t CreateDigitalAssetRequestBody::getAssetOrder() const
{
    return assetOrder_;
}

void CreateDigitalAssetRequestBody::setAssetOrder(int32_t value)
{
    assetOrder_ = value;
    assetOrderIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::assetOrderIsSet() const
{
    return assetOrderIsSet_;
}

void CreateDigitalAssetRequestBody::unsetassetOrder()
{
    assetOrderIsSet_ = false;
}

std::vector<SupportedServiceEnum>& CreateDigitalAssetRequestBody::getSupportedService()
{
    return supportedService_;
}

void CreateDigitalAssetRequestBody::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool CreateDigitalAssetRequestBody::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void CreateDigitalAssetRequestBody::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

}
}
}
}
}


