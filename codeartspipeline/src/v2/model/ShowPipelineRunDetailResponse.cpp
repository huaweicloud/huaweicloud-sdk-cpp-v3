

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineRunDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineRunDetailResponse::ShowPipelineRunDetailResponse()
{
    id_ = "";
    idIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorName_ = "";
    executorNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    runNumber_ = 0;
    runNumberIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    stagesIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    sourcesIsSet_ = false;
    artifactsIsSet_ = false;
    subjectId_ = "";
    subjectIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
    currentSystemTime_ = 0L;
    currentSystemTimeIsSet_ = false;
}

ShowPipelineRunDetailResponse::~ShowPipelineRunDetailResponse() = default;

void ShowPipelineRunDetailResponse::validate()
{
}

web::json::value ShowPipelineRunDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNameIsSet_) {
        val[utility::conversions::to_string_t("executor_name")] = ModelBase::toJson(executorName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(runNumberIsSet_) {
        val[utility::conversions::to_string_t("run_number")] = ModelBase::toJson(runNumber_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(artifactsIsSet_) {
        val[utility::conversions::to_string_t("artifacts")] = ModelBase::toJson(artifacts_);
    }
    if(subjectIdIsSet_) {
        val[utility::conversions::to_string_t("subject_id")] = ModelBase::toJson(subjectId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }
    if(currentSystemTimeIsSet_) {
        val[utility::conversions::to_string_t("current_system_time")] = ModelBase::toJson(currentSystemTime_);
    }

    return val;
}
bool ShowPipelineRunDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("executor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<StageRun> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<RunPipelineSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifacts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifacts"));
        if(!fieldValue.is_null())
        {
            std::vector<PackageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifacts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_system_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_system_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentSystemTime(refVal);
        }
    }
    return ok;
}


std::string ShowPipelineRunDetailResponse::getId() const
{
    return id_;
}

void ShowPipelineRunDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowPipelineRunDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipelineRunDetailResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getManifestVersion() const
{
    return manifestVersion_;
}

void ShowPipelineRunDetailResponse::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void ShowPipelineRunDetailResponse::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getName() const
{
    return name_;
}

void ShowPipelineRunDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPipelineRunDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getDescription() const
{
    return description_;
}

void ShowPipelineRunDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowPipelineRunDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ShowPipelineRunDetailResponse::isIsPublish() const
{
    return isPublish_;
}

void ShowPipelineRunDetailResponse::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void ShowPipelineRunDetailResponse::unsetisPublish()
{
    isPublishIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getExecutorId() const
{
    return executorId_;
}

void ShowPipelineRunDetailResponse::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getExecutorName() const
{
    return executorName_;
}

void ShowPipelineRunDetailResponse::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void ShowPipelineRunDetailResponse::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getStatus() const
{
    return status_;
}

void ShowPipelineRunDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPipelineRunDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getTriggerType() const
{
    return triggerType_;
}

void ShowPipelineRunDetailResponse::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void ShowPipelineRunDetailResponse::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

int32_t ShowPipelineRunDetailResponse::getRunNumber() const
{
    return runNumber_;
}

void ShowPipelineRunDetailResponse::setRunNumber(int32_t value)
{
    runNumber_ = value;
    runNumberIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::runNumberIsSet() const
{
    return runNumberIsSet_;
}

void ShowPipelineRunDetailResponse::unsetrunNumber()
{
    runNumberIsSet_ = false;
}

int64_t ShowPipelineRunDetailResponse::getStartTime() const
{
    return startTime_;
}

void ShowPipelineRunDetailResponse::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowPipelineRunDetailResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowPipelineRunDetailResponse::getEndTime() const
{
    return endTime_;
}

void ShowPipelineRunDetailResponse::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowPipelineRunDetailResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<StageRun>& ShowPipelineRunDetailResponse::getStages()
{
    return stages_;
}

void ShowPipelineRunDetailResponse::setStages(const std::vector<StageRun>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::stagesIsSet() const
{
    return stagesIsSet_;
}

void ShowPipelineRunDetailResponse::unsetstages()
{
    stagesIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowPipelineRunDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowPipelineRunDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getRegion() const
{
    return region_;
}

void ShowPipelineRunDetailResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowPipelineRunDetailResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getComponentId() const
{
    return componentId_;
}

void ShowPipelineRunDetailResponse::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getLanguage() const
{
    return language_;
}

void ShowPipelineRunDetailResponse::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowPipelineRunDetailResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<RunPipelineSource>& ShowPipelineRunDetailResponse::getSources()
{
    return sources_;
}

void ShowPipelineRunDetailResponse::setSources(const std::vector<RunPipelineSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ShowPipelineRunDetailResponse::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<PackageInfo>& ShowPipelineRunDetailResponse::getArtifacts()
{
    return artifacts_;
}

void ShowPipelineRunDetailResponse::setArtifacts(const std::vector<PackageInfo>& value)
{
    artifacts_ = value;
    artifactsIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::artifactsIsSet() const
{
    return artifactsIsSet_;
}

void ShowPipelineRunDetailResponse::unsetartifacts()
{
    artifactsIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getSubjectId() const
{
    return subjectId_;
}

void ShowPipelineRunDetailResponse::setSubjectId(const std::string& value)
{
    subjectId_ = value;
    subjectIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::subjectIdIsSet() const
{
    return subjectIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetsubjectId()
{
    subjectIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getGroupId() const
{
    return groupId_;
}

void ShowPipelineRunDetailResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowPipelineRunDetailResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getGroupName() const
{
    return groupName_;
}

void ShowPipelineRunDetailResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowPipelineRunDetailResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string ShowPipelineRunDetailResponse::getDetailUrl() const
{
    return detailUrl_;
}

void ShowPipelineRunDetailResponse::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void ShowPipelineRunDetailResponse::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

int64_t ShowPipelineRunDetailResponse::getCurrentSystemTime() const
{
    return currentSystemTime_;
}

void ShowPipelineRunDetailResponse::setCurrentSystemTime(int64_t value)
{
    currentSystemTime_ = value;
    currentSystemTimeIsSet_ = true;
}

bool ShowPipelineRunDetailResponse::currentSystemTimeIsSet() const
{
    return currentSystemTimeIsSet_;
}

void ShowPipelineRunDetailResponse::unsetcurrentSystemTime()
{
    currentSystemTimeIsSet_ = false;
}

}
}
}
}
}


