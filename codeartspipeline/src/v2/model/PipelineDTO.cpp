

#include "huaweicloud/codeartspipeline/v2/model/PipelineDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineDTO::PipelineDTO()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    sourcesIsSet_ = false;
    variablesIsSet_ = false;
    schedulesIsSet_ = false;
    triggersIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    definition_ = "";
    definitionIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    concurrencyControlIsSet_ = false;
    securityLevel_ = 0;
    securityLevelIsSet_ = false;
}

PipelineDTO::~PipelineDTO() = default;

void PipelineDTO::validate()
{
}

web::json::value PipelineDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
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
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(definitionIsSet_) {
        val[utility::conversions::to_string_t("definition")] = ModelBase::toJson(definition_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(concurrencyControlIsSet_) {
        val[utility::conversions::to_string_t("concurrency_control")] = ModelBase::toJson(concurrencyControl_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }

    return val;
}
bool PipelineDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<CodeSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomVariable> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency_control"));
        if(!fieldValue.is_null())
        {
            PipelineConcurrencyMgmt refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrencyControl(refVal);
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


std::string PipelineDTO::getName() const
{
    return name_;
}

void PipelineDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineDTO::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineDTO::getDescription() const
{
    return description_;
}

void PipelineDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool PipelineDTO::isIsPublish() const
{
    return isPublish_;
}

void PipelineDTO::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool PipelineDTO::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void PipelineDTO::unsetisPublish()
{
    isPublishIsSet_ = false;
}

std::vector<CodeSource>& PipelineDTO::getSources()
{
    return sources_;
}

void PipelineDTO::setSources(const std::vector<CodeSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool PipelineDTO::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void PipelineDTO::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<CustomVariable>& PipelineDTO::getVariables()
{
    return variables_;
}

void PipelineDTO::setVariables(const std::vector<CustomVariable>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool PipelineDTO::variablesIsSet() const
{
    return variablesIsSet_;
}

void PipelineDTO::unsetvariables()
{
    variablesIsSet_ = false;
}

std::vector<PipelineSchedule>& PipelineDTO::getSchedules()
{
    return schedules_;
}

void PipelineDTO::setSchedules(const std::vector<PipelineSchedule>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool PipelineDTO::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void PipelineDTO::unsetschedules()
{
    schedulesIsSet_ = false;
}

std::vector<PipelineTrigger>& PipelineDTO::getTriggers()
{
    return triggers_;
}

void PipelineDTO::setTriggers(const std::vector<PipelineTrigger>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool PipelineDTO::triggersIsSet() const
{
    return triggersIsSet_;
}

void PipelineDTO::unsettriggers()
{
    triggersIsSet_ = false;
}

std::string PipelineDTO::getManifestVersion() const
{
    return manifestVersion_;
}

void PipelineDTO::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool PipelineDTO::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void PipelineDTO::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string PipelineDTO::getDefinition() const
{
    return definition_;
}

void PipelineDTO::setDefinition(const std::string& value)
{
    definition_ = value;
    definitionIsSet_ = true;
}

bool PipelineDTO::definitionIsSet() const
{
    return definitionIsSet_;
}

void PipelineDTO::unsetdefinition()
{
    definitionIsSet_ = false;
}

std::string PipelineDTO::getProjectName() const
{
    return projectName_;
}

void PipelineDTO::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool PipelineDTO::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void PipelineDTO::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string PipelineDTO::getGroupId() const
{
    return groupId_;
}

void PipelineDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool PipelineDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void PipelineDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string PipelineDTO::getId() const
{
    return id_;
}

void PipelineDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineDTO::idIsSet() const
{
    return idIsSet_;
}

void PipelineDTO::unsetid()
{
    idIsSet_ = false;
}

PipelineConcurrencyMgmt PipelineDTO::getConcurrencyControl() const
{
    return concurrencyControl_;
}

void PipelineDTO::setConcurrencyControl(const PipelineConcurrencyMgmt& value)
{
    concurrencyControl_ = value;
    concurrencyControlIsSet_ = true;
}

bool PipelineDTO::concurrencyControlIsSet() const
{
    return concurrencyControlIsSet_;
}

void PipelineDTO::unsetconcurrencyControl()
{
    concurrencyControlIsSet_ = false;
}

int32_t PipelineDTO::getSecurityLevel() const
{
    return securityLevel_;
}

void PipelineDTO::setSecurityLevel(int32_t value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool PipelineDTO::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void PipelineDTO::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

}
}
}
}
}


