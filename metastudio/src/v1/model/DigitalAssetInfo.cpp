

#include "huaweicloud/metastudio/v1/model/DigitalAssetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DigitalAssetInfo::DigitalAssetInfo()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetDescription_ = "";
    assetDescriptionIsSet_ = false;
    appUserId_ = "";
    appUserIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    assetState_ = "";
    assetStateIsSet_ = false;
    failType_ = "";
    failTypeIsSet_ = false;
    blockReasonCode_ = "";
    blockReasonCodeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    tagsIsSet_ = false;
    assetExtraMetaIsSet_ = false;
    systemPropertiesIsSet_ = false;
    filesIsSet_ = false;
    assetOrder_ = 0;
    assetOrderIsSet_ = false;
    supportedServiceIsSet_ = false;
    autoOperationConfigIsSet_ = false;
}

DigitalAssetInfo::~DigitalAssetInfo() = default;

void DigitalAssetInfo::validate()
{
}

web::json::value DigitalAssetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetDescriptionIsSet_) {
        val[utility::conversions::to_string_t("asset_description")] = ModelBase::toJson(assetDescription_);
    }
    if(appUserIdIsSet_) {
        val[utility::conversions::to_string_t("app_user_id")] = ModelBase::toJson(appUserId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(assetStateIsSet_) {
        val[utility::conversions::to_string_t("asset_state")] = ModelBase::toJson(assetState_);
    }
    if(failTypeIsSet_) {
        val[utility::conversions::to_string_t("fail_type")] = ModelBase::toJson(failType_);
    }
    if(blockReasonCodeIsSet_) {
        val[utility::conversions::to_string_t("block_reason_code")] = ModelBase::toJson(blockReasonCode_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
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
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
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
bool DigitalAssetInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("app_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fail_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_reason_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_reason_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockReasonCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetFileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
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


std::string DigitalAssetInfo::getProjectId() const
{
    return projectId_;
}

void DigitalAssetInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DigitalAssetInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DigitalAssetInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DigitalAssetInfo::getAssetId() const
{
    return assetId_;
}

void DigitalAssetInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DigitalAssetInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DigitalAssetInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DigitalAssetInfo::getAssetName() const
{
    return assetName_;
}

void DigitalAssetInfo::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool DigitalAssetInfo::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void DigitalAssetInfo::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string DigitalAssetInfo::getAssetDescription() const
{
    return assetDescription_;
}

void DigitalAssetInfo::setAssetDescription(const std::string& value)
{
    assetDescription_ = value;
    assetDescriptionIsSet_ = true;
}

bool DigitalAssetInfo::assetDescriptionIsSet() const
{
    return assetDescriptionIsSet_;
}

void DigitalAssetInfo::unsetassetDescription()
{
    assetDescriptionIsSet_ = false;
}

std::string DigitalAssetInfo::getAppUserId() const
{
    return appUserId_;
}

void DigitalAssetInfo::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool DigitalAssetInfo::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void DigitalAssetInfo::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

std::string DigitalAssetInfo::getCreateTime() const
{
    return createTime_;
}

void DigitalAssetInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DigitalAssetInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DigitalAssetInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DigitalAssetInfo::getUpdateTime() const
{
    return updateTime_;
}

void DigitalAssetInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DigitalAssetInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DigitalAssetInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string DigitalAssetInfo::getAssetType() const
{
    return assetType_;
}

void DigitalAssetInfo::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool DigitalAssetInfo::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void DigitalAssetInfo::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string DigitalAssetInfo::getAssetState() const
{
    return assetState_;
}

void DigitalAssetInfo::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool DigitalAssetInfo::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void DigitalAssetInfo::unsetassetState()
{
    assetStateIsSet_ = false;
}

std::string DigitalAssetInfo::getFailType() const
{
    return failType_;
}

void DigitalAssetInfo::setFailType(const std::string& value)
{
    failType_ = value;
    failTypeIsSet_ = true;
}

bool DigitalAssetInfo::failTypeIsSet() const
{
    return failTypeIsSet_;
}

void DigitalAssetInfo::unsetfailType()
{
    failTypeIsSet_ = false;
}

std::string DigitalAssetInfo::getBlockReasonCode() const
{
    return blockReasonCode_;
}

void DigitalAssetInfo::setBlockReasonCode(const std::string& value)
{
    blockReasonCode_ = value;
    blockReasonCodeIsSet_ = true;
}

bool DigitalAssetInfo::blockReasonCodeIsSet() const
{
    return blockReasonCodeIsSet_;
}

void DigitalAssetInfo::unsetblockReasonCode()
{
    blockReasonCodeIsSet_ = false;
}

std::string DigitalAssetInfo::getReason() const
{
    return reason_;
}

void DigitalAssetInfo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool DigitalAssetInfo::reasonIsSet() const
{
    return reasonIsSet_;
}

void DigitalAssetInfo::unsetreason()
{
    reasonIsSet_ = false;
}

std::vector<std::string>& DigitalAssetInfo::getTags()
{
    return tags_;
}

void DigitalAssetInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DigitalAssetInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void DigitalAssetInfo::unsettags()
{
    tagsIsSet_ = false;
}

AssetExtraMeta DigitalAssetInfo::getAssetExtraMeta() const
{
    return assetExtraMeta_;
}

void DigitalAssetInfo::setAssetExtraMeta(const AssetExtraMeta& value)
{
    assetExtraMeta_ = value;
    assetExtraMetaIsSet_ = true;
}

bool DigitalAssetInfo::assetExtraMetaIsSet() const
{
    return assetExtraMetaIsSet_;
}

void DigitalAssetInfo::unsetassetExtraMeta()
{
    assetExtraMetaIsSet_ = false;
}

std::vector<SystemProperty>& DigitalAssetInfo::getSystemProperties()
{
    return systemProperties_;
}

void DigitalAssetInfo::setSystemProperties(const std::vector<SystemProperty>& value)
{
    systemProperties_ = value;
    systemPropertiesIsSet_ = true;
}

bool DigitalAssetInfo::systemPropertiesIsSet() const
{
    return systemPropertiesIsSet_;
}

void DigitalAssetInfo::unsetsystemProperties()
{
    systemPropertiesIsSet_ = false;
}

std::vector<AssetFileInfo>& DigitalAssetInfo::getFiles()
{
    return files_;
}

void DigitalAssetInfo::setFiles(const std::vector<AssetFileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool DigitalAssetInfo::filesIsSet() const
{
    return filesIsSet_;
}

void DigitalAssetInfo::unsetfiles()
{
    filesIsSet_ = false;
}

int32_t DigitalAssetInfo::getAssetOrder() const
{
    return assetOrder_;
}

void DigitalAssetInfo::setAssetOrder(int32_t value)
{
    assetOrder_ = value;
    assetOrderIsSet_ = true;
}

bool DigitalAssetInfo::assetOrderIsSet() const
{
    return assetOrderIsSet_;
}

void DigitalAssetInfo::unsetassetOrder()
{
    assetOrderIsSet_ = false;
}

std::vector<SupportedServiceEnum>& DigitalAssetInfo::getSupportedService()
{
    return supportedService_;
}

void DigitalAssetInfo::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool DigitalAssetInfo::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void DigitalAssetInfo::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

std::vector<AutoOperationConfig>& DigitalAssetInfo::getAutoOperationConfig()
{
    return autoOperationConfig_;
}

void DigitalAssetInfo::setAutoOperationConfig(const std::vector<AutoOperationConfig>& value)
{
    autoOperationConfig_ = value;
    autoOperationConfigIsSet_ = true;
}

bool DigitalAssetInfo::autoOperationConfigIsSet() const
{
    return autoOperationConfigIsSet_;
}

void DigitalAssetInfo::unsetautoOperationConfig()
{
    autoOperationConfigIsSet_ = false;
}

}
}
}
}
}


