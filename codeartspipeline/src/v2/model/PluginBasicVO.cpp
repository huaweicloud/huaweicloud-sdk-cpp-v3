

#include "huaweicloud/codeartspipeline/v2/model/PluginBasicVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginBasicVO::PluginBasicVO()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    dbRecordName_ = "";
    dbRecordNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    versionAttribution_ = "";
    versionAttributionIsSet_ = false;
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    opUser_ = "";
    opUserIsSet_ = false;
    opTime_ = "";
    opTimeIsSet_ = false;
    pluginCompositionType_ = "";
    pluginCompositionTypeIsSet_ = false;
    pluginAttribution_ = "";
    pluginAttributionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    businessTypeDisplayName_ = "";
    businessTypeDisplayNameIsSet_ = false;
    maintainers_ = "";
    maintainersIsSet_ = false;
    iconUrl_ = "";
    iconUrlIsSet_ = false;
    referCount_ = 0;
    referCountIsSet_ = false;
    usageCount_ = 0;
    usageCountIsSet_ = false;
    runtimeAttribution_ = "";
    runtimeAttributionIsSet_ = false;
    active_ = 0;
    activeIsSet_ = false;
    versionState_ = "";
    versionStateIsSet_ = false;
    publisherUniqueId_ = "";
    publisherUniqueIdIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
}

PluginBasicVO::~PluginBasicVO() = default;

void PluginBasicVO::validate()
{
}

web::json::value PluginBasicVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(dbRecordNameIsSet_) {
        val[utility::conversions::to_string_t("db_record_name")] = ModelBase::toJson(dbRecordName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionAttributionIsSet_) {
        val[utility::conversions::to_string_t("version_attribution")] = ModelBase::toJson(versionAttribution_);
    }
    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(opUserIsSet_) {
        val[utility::conversions::to_string_t("op_user")] = ModelBase::toJson(opUser_);
    }
    if(opTimeIsSet_) {
        val[utility::conversions::to_string_t("op_time")] = ModelBase::toJson(opTime_);
    }
    if(pluginCompositionTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_composition_type")] = ModelBase::toJson(pluginCompositionType_);
    }
    if(pluginAttributionIsSet_) {
        val[utility::conversions::to_string_t("plugin_attribution")] = ModelBase::toJson(pluginAttribution_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(businessTypeDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("business_type_display_name")] = ModelBase::toJson(businessTypeDisplayName_);
    }
    if(maintainersIsSet_) {
        val[utility::conversions::to_string_t("maintainers")] = ModelBase::toJson(maintainers_);
    }
    if(iconUrlIsSet_) {
        val[utility::conversions::to_string_t("icon_url")] = ModelBase::toJson(iconUrl_);
    }
    if(referCountIsSet_) {
        val[utility::conversions::to_string_t("refer_count")] = ModelBase::toJson(referCount_);
    }
    if(usageCountIsSet_) {
        val[utility::conversions::to_string_t("usage_count")] = ModelBase::toJson(usageCount_);
    }
    if(runtimeAttributionIsSet_) {
        val[utility::conversions::to_string_t("runtime_attribution")] = ModelBase::toJson(runtimeAttribution_);
    }
    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }
    if(versionStateIsSet_) {
        val[utility::conversions::to_string_t("version_state")] = ModelBase::toJson(versionState_);
    }
    if(publisherUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_unique_id")] = ModelBase::toJson(publisherUniqueId_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }

    return val;
}
bool PluginBasicVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_record_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_record_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbRecordName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("op_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("op_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_composition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_composition_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginCompositionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessTypeDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintainers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maintainers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaintainers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refer_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refer_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsageCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publisher_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherUniqueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    return ok;
}


std::string PluginBasicVO::getPluginName() const
{
    return pluginName_;
}

void PluginBasicVO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginBasicVO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginBasicVO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginBasicVO::getDisplayName() const
{
    return displayName_;
}

void PluginBasicVO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PluginBasicVO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PluginBasicVO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PluginBasicVO::getDbRecordName() const
{
    return dbRecordName_;
}

void PluginBasicVO::setDbRecordName(const std::string& value)
{
    dbRecordName_ = value;
    dbRecordNameIsSet_ = true;
}

bool PluginBasicVO::dbRecordNameIsSet() const
{
    return dbRecordNameIsSet_;
}

void PluginBasicVO::unsetdbRecordName()
{
    dbRecordNameIsSet_ = false;
}

std::string PluginBasicVO::getVersion() const
{
    return version_;
}

void PluginBasicVO::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginBasicVO::versionIsSet() const
{
    return versionIsSet_;
}

void PluginBasicVO::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginBasicVO::getVersionDescription() const
{
    return versionDescription_;
}

void PluginBasicVO::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool PluginBasicVO::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void PluginBasicVO::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

std::string PluginBasicVO::getDescription() const
{
    return description_;
}

void PluginBasicVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginBasicVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginBasicVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PluginBasicVO::getVersionAttribution() const
{
    return versionAttribution_;
}

void PluginBasicVO::setVersionAttribution(const std::string& value)
{
    versionAttribution_ = value;
    versionAttributionIsSet_ = true;
}

bool PluginBasicVO::versionAttributionIsSet() const
{
    return versionAttributionIsSet_;
}

void PluginBasicVO::unsetversionAttribution()
{
    versionAttributionIsSet_ = false;
}

std::string PluginBasicVO::getUniqueId() const
{
    return uniqueId_;
}

void PluginBasicVO::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PluginBasicVO::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PluginBasicVO::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PluginBasicVO::getOpUser() const
{
    return opUser_;
}

void PluginBasicVO::setOpUser(const std::string& value)
{
    opUser_ = value;
    opUserIsSet_ = true;
}

bool PluginBasicVO::opUserIsSet() const
{
    return opUserIsSet_;
}

void PluginBasicVO::unsetopUser()
{
    opUserIsSet_ = false;
}

std::string PluginBasicVO::getOpTime() const
{
    return opTime_;
}

void PluginBasicVO::setOpTime(const std::string& value)
{
    opTime_ = value;
    opTimeIsSet_ = true;
}

bool PluginBasicVO::opTimeIsSet() const
{
    return opTimeIsSet_;
}

void PluginBasicVO::unsetopTime()
{
    opTimeIsSet_ = false;
}

std::string PluginBasicVO::getPluginCompositionType() const
{
    return pluginCompositionType_;
}

void PluginBasicVO::setPluginCompositionType(const std::string& value)
{
    pluginCompositionType_ = value;
    pluginCompositionTypeIsSet_ = true;
}

bool PluginBasicVO::pluginCompositionTypeIsSet() const
{
    return pluginCompositionTypeIsSet_;
}

void PluginBasicVO::unsetpluginCompositionType()
{
    pluginCompositionTypeIsSet_ = false;
}

std::string PluginBasicVO::getPluginAttribution() const
{
    return pluginAttribution_;
}

void PluginBasicVO::setPluginAttribution(const std::string& value)
{
    pluginAttribution_ = value;
    pluginAttributionIsSet_ = true;
}

bool PluginBasicVO::pluginAttributionIsSet() const
{
    return pluginAttributionIsSet_;
}

void PluginBasicVO::unsetpluginAttribution()
{
    pluginAttributionIsSet_ = false;
}

std::string PluginBasicVO::getWorkspaceId() const
{
    return workspaceId_;
}

void PluginBasicVO::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool PluginBasicVO::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void PluginBasicVO::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string PluginBasicVO::getBusinessType() const
{
    return businessType_;
}

void PluginBasicVO::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool PluginBasicVO::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void PluginBasicVO::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string PluginBasicVO::getBusinessTypeDisplayName() const
{
    return businessTypeDisplayName_;
}

void PluginBasicVO::setBusinessTypeDisplayName(const std::string& value)
{
    businessTypeDisplayName_ = value;
    businessTypeDisplayNameIsSet_ = true;
}

bool PluginBasicVO::businessTypeDisplayNameIsSet() const
{
    return businessTypeDisplayNameIsSet_;
}

void PluginBasicVO::unsetbusinessTypeDisplayName()
{
    businessTypeDisplayNameIsSet_ = false;
}

std::string PluginBasicVO::getMaintainers() const
{
    return maintainers_;
}

void PluginBasicVO::setMaintainers(const std::string& value)
{
    maintainers_ = value;
    maintainersIsSet_ = true;
}

bool PluginBasicVO::maintainersIsSet() const
{
    return maintainersIsSet_;
}

void PluginBasicVO::unsetmaintainers()
{
    maintainersIsSet_ = false;
}

std::string PluginBasicVO::getIconUrl() const
{
    return iconUrl_;
}

void PluginBasicVO::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool PluginBasicVO::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void PluginBasicVO::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

int32_t PluginBasicVO::getReferCount() const
{
    return referCount_;
}

void PluginBasicVO::setReferCount(int32_t value)
{
    referCount_ = value;
    referCountIsSet_ = true;
}

bool PluginBasicVO::referCountIsSet() const
{
    return referCountIsSet_;
}

void PluginBasicVO::unsetreferCount()
{
    referCountIsSet_ = false;
}

int32_t PluginBasicVO::getUsageCount() const
{
    return usageCount_;
}

void PluginBasicVO::setUsageCount(int32_t value)
{
    usageCount_ = value;
    usageCountIsSet_ = true;
}

bool PluginBasicVO::usageCountIsSet() const
{
    return usageCountIsSet_;
}

void PluginBasicVO::unsetusageCount()
{
    usageCountIsSet_ = false;
}

std::string PluginBasicVO::getRuntimeAttribution() const
{
    return runtimeAttribution_;
}

void PluginBasicVO::setRuntimeAttribution(const std::string& value)
{
    runtimeAttribution_ = value;
    runtimeAttributionIsSet_ = true;
}

bool PluginBasicVO::runtimeAttributionIsSet() const
{
    return runtimeAttributionIsSet_;
}

void PluginBasicVO::unsetruntimeAttribution()
{
    runtimeAttributionIsSet_ = false;
}

int32_t PluginBasicVO::getActive() const
{
    return active_;
}

void PluginBasicVO::setActive(int32_t value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool PluginBasicVO::activeIsSet() const
{
    return activeIsSet_;
}

void PluginBasicVO::unsetactive()
{
    activeIsSet_ = false;
}

std::string PluginBasicVO::getVersionState() const
{
    return versionState_;
}

void PluginBasicVO::setVersionState(const std::string& value)
{
    versionState_ = value;
    versionStateIsSet_ = true;
}

bool PluginBasicVO::versionStateIsSet() const
{
    return versionStateIsSet_;
}

void PluginBasicVO::unsetversionState()
{
    versionStateIsSet_ = false;
}

std::string PluginBasicVO::getPublisherUniqueId() const
{
    return publisherUniqueId_;
}

void PluginBasicVO::setPublisherUniqueId(const std::string& value)
{
    publisherUniqueId_ = value;
    publisherUniqueIdIsSet_ = true;
}

bool PluginBasicVO::publisherUniqueIdIsSet() const
{
    return publisherUniqueIdIsSet_;
}

void PluginBasicVO::unsetpublisherUniqueId()
{
    publisherUniqueIdIsSet_ = false;
}

std::string PluginBasicVO::getCreator() const
{
    return creator_;
}

void PluginBasicVO::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool PluginBasicVO::creatorIsSet() const
{
    return creatorIsSet_;
}

void PluginBasicVO::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string PluginBasicVO::getCreateTime() const
{
    return createTime_;
}

void PluginBasicVO::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PluginBasicVO::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PluginBasicVO::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PluginBasicVO::getManifestVersion() const
{
    return manifestVersion_;
}

void PluginBasicVO::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool PluginBasicVO::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void PluginBasicVO::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

}
}
}
}
}


