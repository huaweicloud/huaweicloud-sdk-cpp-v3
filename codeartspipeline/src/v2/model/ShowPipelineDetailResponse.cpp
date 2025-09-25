

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineDetailResponse::ShowPipelineDetailResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    updaterId_ = "";
    updaterIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    isCollect_ = false;
    isCollectIsSet_ = false;
    sourcesIsSet_ = false;
    variablesIsSet_ = false;
    schedulesIsSet_ = false;
    triggersIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    definition_ = "";
    definitionIsSet_ = false;
    securityLevel_ = 0;
    securityLevelIsSet_ = false;
}

ShowPipelineDetailResponse::~ShowPipelineDetailResponse() = default;

void ShowPipelineDetailResponse::validate()
{
}

web::json::value ShowPipelineDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(updaterIdIsSet_) {
        val[utility::conversions::to_string_t("updater_id")] = ModelBase::toJson(updaterId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(isCollectIsSet_) {
        val[utility::conversions::to_string_t("is_collect")] = ModelBase::toJson(isCollect_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(schedulesIsSet_) {
        val[utility::conversions::to_string_t("schedules")] = ModelBase::toJson(schedules_);
    }
    if(triggersIsSet_) {
        val[utility::conversions::to_string_t("triggers")] = ModelBase::toJson(triggers_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(definitionIsSet_) {
        val[utility::conversions::to_string_t("definition")] = ModelBase::toJson(definition_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }

    return val;
}
bool ShowPipelineDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_publish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_publish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_collect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCollect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineSchedule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggers"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineTrigger> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    return ok;
}


std::string ShowPipelineDetailResponse::getId() const
{
    return id_;
}

void ShowPipelineDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPipelineDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowPipelineDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getName() const
{
    return name_;
}

void ShowPipelineDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPipelineDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPipelineDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDescription() const
{
    return description_;
}

void ShowPipelineDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowPipelineDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowPipelineDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getManifestVersion() const
{
    return manifestVersion_;
}

void ShowPipelineDetailResponse::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool ShowPipelineDetailResponse::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void ShowPipelineDetailResponse::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getRegion() const
{
    return region_;
}

void ShowPipelineDetailResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowPipelineDetailResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowPipelineDetailResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowPipelineDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPipelineDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowPipelineDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getComponentId() const
{
    return componentId_;
}

void ShowPipelineDetailResponse::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ShowPipelineDetailResponse::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

bool ShowPipelineDetailResponse::isIsPublish() const
{
    return isPublish_;
}

void ShowPipelineDetailResponse::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool ShowPipelineDetailResponse::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void ShowPipelineDetailResponse::unsetisPublish()
{
    isPublishIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowPipelineDetailResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowPipelineDetailResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getCreatorName() const
{
    return creatorName_;
}

void ShowPipelineDetailResponse::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool ShowPipelineDetailResponse::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void ShowPipelineDetailResponse::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getUpdaterId() const
{
    return updaterId_;
}

void ShowPipelineDetailResponse::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void ShowPipelineDetailResponse::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

int64_t ShowPipelineDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowPipelineDetailResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowPipelineDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowPipelineDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowPipelineDetailResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowPipelineDetailResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowPipelineDetailResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowPipelineDetailResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool ShowPipelineDetailResponse::isIsCollect() const
{
    return isCollect_;
}

void ShowPipelineDetailResponse::setIsCollect(bool value)
{
    isCollect_ = value;
    isCollectIsSet_ = true;
}

bool ShowPipelineDetailResponse::isCollectIsSet() const
{
    return isCollectIsSet_;
}

void ShowPipelineDetailResponse::unsetisCollect()
{
    isCollectIsSet_ = false;
}

std::vector<PipelineSource>& ShowPipelineDetailResponse::getSources()
{
    return sources_;
}

void ShowPipelineDetailResponse::setSources(const std::vector<PipelineSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ShowPipelineDetailResponse::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ShowPipelineDetailResponse::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<PipelineVariable>& ShowPipelineDetailResponse::getVariables()
{
    return variables_;
}

void ShowPipelineDetailResponse::setVariables(const std::vector<PipelineVariable>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool ShowPipelineDetailResponse::variablesIsSet() const
{
    return variablesIsSet_;
}

void ShowPipelineDetailResponse::unsetvariables()
{
    variablesIsSet_ = false;
}

std::vector<PipelineSchedule>& ShowPipelineDetailResponse::getSchedules()
{
    return schedules_;
}

void ShowPipelineDetailResponse::setSchedules(const std::vector<PipelineSchedule>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ShowPipelineDetailResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ShowPipelineDetailResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

std::vector<PipelineTrigger>& ShowPipelineDetailResponse::getTriggers()
{
    return triggers_;
}

void ShowPipelineDetailResponse::setTriggers(const std::vector<PipelineTrigger>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool ShowPipelineDetailResponse::triggersIsSet() const
{
    return triggersIsSet_;
}

void ShowPipelineDetailResponse::unsettriggers()
{
    triggersIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getGroupId() const
{
    return groupId_;
}

void ShowPipelineDetailResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowPipelineDetailResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDefinition() const
{
    return definition_;
}

void ShowPipelineDetailResponse::setDefinition(const std::string& value)
{
    definition_ = value;
    definitionIsSet_ = true;
}

bool ShowPipelineDetailResponse::definitionIsSet() const
{
    return definitionIsSet_;
}

void ShowPipelineDetailResponse::unsetdefinition()
{
    definitionIsSet_ = false;
}

int32_t ShowPipelineDetailResponse::getSecurityLevel() const
{
    return securityLevel_;
}

void ShowPipelineDetailResponse::setSecurityLevel(int32_t value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool ShowPipelineDetailResponse::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void ShowPipelineDetailResponse::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

}
}
}
}
}


