

#include "huaweicloud/metastudio/v1/model/ShowAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAssetResponse::ShowAssetResponse()
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
    reason_ = "";
    reasonIsSet_ = false;
    tagsIsSet_ = false;
    assetExtraMetaIsSet_ = false;
    systemPropertiesIsSet_ = false;
    filesIsSet_ = false;
    assetOrder_ = 0;
    assetOrderIsSet_ = false;
    supportedServiceIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowAssetResponse::~ShowAssetResponse() = default;

void ShowAssetResponse::validate()
{
}

web::json::value ShowAssetResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowAssetResponse::fromJson(const web::json::value& val)
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


std::string ShowAssetResponse::getProjectId() const
{
    return projectId_;
}

void ShowAssetResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAssetResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAssetResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowAssetResponse::getAssetId() const
{
    return assetId_;
}

void ShowAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetResponse::getAssetName() const
{
    return assetName_;
}

void ShowAssetResponse::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ShowAssetResponse::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ShowAssetResponse::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ShowAssetResponse::getAssetDescription() const
{
    return assetDescription_;
}

void ShowAssetResponse::setAssetDescription(const std::string& value)
{
    assetDescription_ = value;
    assetDescriptionIsSet_ = true;
}

bool ShowAssetResponse::assetDescriptionIsSet() const
{
    return assetDescriptionIsSet_;
}

void ShowAssetResponse::unsetassetDescription()
{
    assetDescriptionIsSet_ = false;
}

std::string ShowAssetResponse::getAppUserId() const
{
    return appUserId_;
}

void ShowAssetResponse::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool ShowAssetResponse::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void ShowAssetResponse::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

std::string ShowAssetResponse::getCreateTime() const
{
    return createTime_;
}

void ShowAssetResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowAssetResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowAssetResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowAssetResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowAssetResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowAssetResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowAssetResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowAssetResponse::getAssetType() const
{
    return assetType_;
}

void ShowAssetResponse::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowAssetResponse::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowAssetResponse::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ShowAssetResponse::getAssetState() const
{
    return assetState_;
}

void ShowAssetResponse::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool ShowAssetResponse::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void ShowAssetResponse::unsetassetState()
{
    assetStateIsSet_ = false;
}

std::string ShowAssetResponse::getFailType() const
{
    return failType_;
}

void ShowAssetResponse::setFailType(const std::string& value)
{
    failType_ = value;
    failTypeIsSet_ = true;
}

bool ShowAssetResponse::failTypeIsSet() const
{
    return failTypeIsSet_;
}

void ShowAssetResponse::unsetfailType()
{
    failTypeIsSet_ = false;
}

std::string ShowAssetResponse::getReason() const
{
    return reason_;
}

void ShowAssetResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ShowAssetResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ShowAssetResponse::unsetreason()
{
    reasonIsSet_ = false;
}

std::vector<std::string>& ShowAssetResponse::getTags()
{
    return tags_;
}

void ShowAssetResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowAssetResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowAssetResponse::unsettags()
{
    tagsIsSet_ = false;
}

AssetExtraMeta ShowAssetResponse::getAssetExtraMeta() const
{
    return assetExtraMeta_;
}

void ShowAssetResponse::setAssetExtraMeta(const AssetExtraMeta& value)
{
    assetExtraMeta_ = value;
    assetExtraMetaIsSet_ = true;
}

bool ShowAssetResponse::assetExtraMetaIsSet() const
{
    return assetExtraMetaIsSet_;
}

void ShowAssetResponse::unsetassetExtraMeta()
{
    assetExtraMetaIsSet_ = false;
}

std::vector<SystemProperty>& ShowAssetResponse::getSystemProperties()
{
    return systemProperties_;
}

void ShowAssetResponse::setSystemProperties(const std::vector<SystemProperty>& value)
{
    systemProperties_ = value;
    systemPropertiesIsSet_ = true;
}

bool ShowAssetResponse::systemPropertiesIsSet() const
{
    return systemPropertiesIsSet_;
}

void ShowAssetResponse::unsetsystemProperties()
{
    systemPropertiesIsSet_ = false;
}

std::vector<AssetFileInfo>& ShowAssetResponse::getFiles()
{
    return files_;
}

void ShowAssetResponse::setFiles(const std::vector<AssetFileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ShowAssetResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ShowAssetResponse::unsetfiles()
{
    filesIsSet_ = false;
}

int32_t ShowAssetResponse::getAssetOrder() const
{
    return assetOrder_;
}

void ShowAssetResponse::setAssetOrder(int32_t value)
{
    assetOrder_ = value;
    assetOrderIsSet_ = true;
}

bool ShowAssetResponse::assetOrderIsSet() const
{
    return assetOrderIsSet_;
}

void ShowAssetResponse::unsetassetOrder()
{
    assetOrderIsSet_ = false;
}

std::vector<SupportedServiceEnum>& ShowAssetResponse::getSupportedService()
{
    return supportedService_;
}

void ShowAssetResponse::setSupportedService(const std::vector<SupportedServiceEnum>& value)
{
    supportedService_ = value;
    supportedServiceIsSet_ = true;
}

bool ShowAssetResponse::supportedServiceIsSet() const
{
    return supportedServiceIsSet_;
}

void ShowAssetResponse::unsetsupportedService()
{
    supportedServiceIsSet_ = false;
}

std::string ShowAssetResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAssetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAssetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAssetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


