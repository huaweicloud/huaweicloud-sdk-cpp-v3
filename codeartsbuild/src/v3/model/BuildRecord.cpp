

#include "huaweicloud/codeartsbuild/v3/model/BuildRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildRecord::BuildRecord()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusCode_ = 0;
    statusCodeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    scheduleTime_ = "";
    scheduleTimeIsSet_ = false;
    queuedTime_ = "";
    queuedTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    buildDuration_ = 0;
    buildDurationIsSet_ = false;
    pendingDuration_ = 0;
    pendingDurationIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    triggerName_ = "";
    triggerNameIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    parametersIsSet_ = false;
    repository_ = "";
    repositoryIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    buildYmlPath_ = "";
    buildYmlPathIsSet_ = false;
    buildYmlUrl_ = "";
    buildYmlUrlIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
    buildRecordTypeIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    scmType_ = "";
    scmTypeIsSet_ = false;
    scmWebUrl_ = "";
    scmWebUrlIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    buildNo_ = "";
    buildNoIsSet_ = false;
    dailyBuildNo_ = "";
    dailyBuildNoIsSet_ = false;
    devCloudBuildType_ = "";
    devCloudBuildTypeIsSet_ = false;
}

BuildRecord::~BuildRecord() = default;

void BuildRecord::validate()
{
}

web::json::value BuildRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("status_code")] = ModelBase::toJson(statusCode_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(scheduleTimeIsSet_) {
        val[utility::conversions::to_string_t("schedule_time")] = ModelBase::toJson(scheduleTime_);
    }
    if(queuedTimeIsSet_) {
        val[utility::conversions::to_string_t("queued_time")] = ModelBase::toJson(queuedTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(buildDurationIsSet_) {
        val[utility::conversions::to_string_t("build_duration")] = ModelBase::toJson(buildDuration_);
    }
    if(pendingDurationIsSet_) {
        val[utility::conversions::to_string_t("pending_duration")] = ModelBase::toJson(pendingDuration_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(triggerNameIsSet_) {
        val[utility::conversions::to_string_t("trigger_name")] = ModelBase::toJson(triggerName_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(repositoryIsSet_) {
        val[utility::conversions::to_string_t("repository")] = ModelBase::toJson(repository_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(revisionIsSet_) {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(revision_);
    }
    if(buildYmlPathIsSet_) {
        val[utility::conversions::to_string_t("build_yml_path")] = ModelBase::toJson(buildYmlPath_);
    }
    if(buildYmlUrlIsSet_) {
        val[utility::conversions::to_string_t("build_yml_url")] = ModelBase::toJson(buildYmlUrl_);
    }
    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }
    if(buildRecordTypeIsSet_) {
        val[utility::conversions::to_string_t("build_record_type")] = ModelBase::toJson(buildRecordType_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(scmTypeIsSet_) {
        val[utility::conversions::to_string_t("scm_type")] = ModelBase::toJson(scmType_);
    }
    if(scmWebUrlIsSet_) {
        val[utility::conversions::to_string_t("scm_web_url")] = ModelBase::toJson(scmWebUrl_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(dailyBuildNoIsSet_) {
        val[utility::conversions::to_string_t("daily_build_no")] = ModelBase::toJson(dailyBuildNo_);
    }
    if(devCloudBuildTypeIsSet_) {
        val[utility::conversions::to_string_t("dev_cloud_build_type")] = ModelBase::toJson(devCloudBuildType_);
    }

    return val;
}
bool BuildRecord::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("schedule_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queued_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queued_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueuedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pending_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pending_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPendingDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<BuildRecord_parameters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revision"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revision"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevision(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_yml_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_yml_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildYmlPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_yml_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_yml_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildYmlUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_record_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_record_type"));
        if(!fieldValue.is_null())
        {
            BuildRecord_build_record_type refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildRecordType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dev_cloud_build_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dev_cloud_build_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevCloudBuildType(refVal);
        }
    }
    return ok;
}


std::string BuildRecord::getId() const
{
    return id_;
}

void BuildRecord::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BuildRecord::idIsSet() const
{
    return idIsSet_;
}

void BuildRecord::unsetid()
{
    idIsSet_ = false;
}

std::string BuildRecord::getStatus() const
{
    return status_;
}

void BuildRecord::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BuildRecord::statusIsSet() const
{
    return statusIsSet_;
}

void BuildRecord::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t BuildRecord::getStatusCode() const
{
    return statusCode_;
}

void BuildRecord::setStatusCode(int32_t value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool BuildRecord::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void BuildRecord::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string BuildRecord::getCreateTime() const
{
    return createTime_;
}

void BuildRecord::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BuildRecord::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BuildRecord::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BuildRecord::getScheduleTime() const
{
    return scheduleTime_;
}

void BuildRecord::setScheduleTime(const std::string& value)
{
    scheduleTime_ = value;
    scheduleTimeIsSet_ = true;
}

bool BuildRecord::scheduleTimeIsSet() const
{
    return scheduleTimeIsSet_;
}

void BuildRecord::unsetscheduleTime()
{
    scheduleTimeIsSet_ = false;
}

std::string BuildRecord::getQueuedTime() const
{
    return queuedTime_;
}

void BuildRecord::setQueuedTime(const std::string& value)
{
    queuedTime_ = value;
    queuedTimeIsSet_ = true;
}

bool BuildRecord::queuedTimeIsSet() const
{
    return queuedTimeIsSet_;
}

void BuildRecord::unsetqueuedTime()
{
    queuedTimeIsSet_ = false;
}

std::string BuildRecord::getStartTime() const
{
    return startTime_;
}

void BuildRecord::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BuildRecord::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BuildRecord::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BuildRecord::getFinishTime() const
{
    return finishTime_;
}

void BuildRecord::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool BuildRecord::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void BuildRecord::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

int32_t BuildRecord::getDuration() const
{
    return duration_;
}

void BuildRecord::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool BuildRecord::durationIsSet() const
{
    return durationIsSet_;
}

void BuildRecord::unsetduration()
{
    durationIsSet_ = false;
}

int32_t BuildRecord::getBuildDuration() const
{
    return buildDuration_;
}

void BuildRecord::setBuildDuration(int32_t value)
{
    buildDuration_ = value;
    buildDurationIsSet_ = true;
}

bool BuildRecord::buildDurationIsSet() const
{
    return buildDurationIsSet_;
}

void BuildRecord::unsetbuildDuration()
{
    buildDurationIsSet_ = false;
}

int32_t BuildRecord::getPendingDuration() const
{
    return pendingDuration_;
}

void BuildRecord::setPendingDuration(int32_t value)
{
    pendingDuration_ = value;
    pendingDurationIsSet_ = true;
}

bool BuildRecord::pendingDurationIsSet() const
{
    return pendingDurationIsSet_;
}

void BuildRecord::unsetpendingDuration()
{
    pendingDurationIsSet_ = false;
}

std::string BuildRecord::getProjectId() const
{
    return projectId_;
}

void BuildRecord::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BuildRecord::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BuildRecord::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BuildRecord::getDisplayName() const
{
    return displayName_;
}

void BuildRecord::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool BuildRecord::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void BuildRecord::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string BuildRecord::getTriggerName() const
{
    return triggerName_;
}

void BuildRecord::setTriggerName(const std::string& value)
{
    triggerName_ = value;
    triggerNameIsSet_ = true;
}

bool BuildRecord::triggerNameIsSet() const
{
    return triggerNameIsSet_;
}

void BuildRecord::unsettriggerName()
{
    triggerNameIsSet_ = false;
}

std::string BuildRecord::getGroupName() const
{
    return groupName_;
}

void BuildRecord::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool BuildRecord::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void BuildRecord::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string BuildRecord::getExecutionId() const
{
    return executionId_;
}

void BuildRecord::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool BuildRecord::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void BuildRecord::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::vector<BuildRecord_parameters>& BuildRecord::getParameters()
{
    return parameters_;
}

void BuildRecord::setParameters(const std::vector<BuildRecord_parameters>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool BuildRecord::parametersIsSet() const
{
    return parametersIsSet_;
}

void BuildRecord::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string BuildRecord::getRepository() const
{
    return repository_;
}

void BuildRecord::setRepository(const std::string& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool BuildRecord::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void BuildRecord::unsetrepository()
{
    repositoryIsSet_ = false;
}

std::string BuildRecord::getBranch() const
{
    return branch_;
}

void BuildRecord::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool BuildRecord::branchIsSet() const
{
    return branchIsSet_;
}

void BuildRecord::unsetbranch()
{
    branchIsSet_ = false;
}

std::string BuildRecord::getRevision() const
{
    return revision_;
}

void BuildRecord::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool BuildRecord::revisionIsSet() const
{
    return revisionIsSet_;
}

void BuildRecord::unsetrevision()
{
    revisionIsSet_ = false;
}

std::string BuildRecord::getBuildYmlPath() const
{
    return buildYmlPath_;
}

void BuildRecord::setBuildYmlPath(const std::string& value)
{
    buildYmlPath_ = value;
    buildYmlPathIsSet_ = true;
}

bool BuildRecord::buildYmlPathIsSet() const
{
    return buildYmlPathIsSet_;
}

void BuildRecord::unsetbuildYmlPath()
{
    buildYmlPathIsSet_ = false;
}

std::string BuildRecord::getBuildYmlUrl() const
{
    return buildYmlUrl_;
}

void BuildRecord::setBuildYmlUrl(const std::string& value)
{
    buildYmlUrl_ = value;
    buildYmlUrlIsSet_ = true;
}

bool BuildRecord::buildYmlUrlIsSet() const
{
    return buildYmlUrlIsSet_;
}

void BuildRecord::unsetbuildYmlUrl()
{
    buildYmlUrlIsSet_ = false;
}

std::string BuildRecord::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void BuildRecord::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool BuildRecord::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void BuildRecord::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

BuildRecord_build_record_type BuildRecord::getBuildRecordType() const
{
    return buildRecordType_;
}

void BuildRecord::setBuildRecordType(const BuildRecord_build_record_type& value)
{
    buildRecordType_ = value;
    buildRecordTypeIsSet_ = true;
}

bool BuildRecord::buildRecordTypeIsSet() const
{
    return buildRecordTypeIsSet_;
}

void BuildRecord::unsetbuildRecordType()
{
    buildRecordTypeIsSet_ = false;
}

std::string BuildRecord::getTriggerType() const
{
    return triggerType_;
}

void BuildRecord::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool BuildRecord::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void BuildRecord::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

std::string BuildRecord::getScmType() const
{
    return scmType_;
}

void BuildRecord::setScmType(const std::string& value)
{
    scmType_ = value;
    scmTypeIsSet_ = true;
}

bool BuildRecord::scmTypeIsSet() const
{
    return scmTypeIsSet_;
}

void BuildRecord::unsetscmType()
{
    scmTypeIsSet_ = false;
}

std::string BuildRecord::getScmWebUrl() const
{
    return scmWebUrl_;
}

void BuildRecord::setScmWebUrl(const std::string& value)
{
    scmWebUrl_ = value;
    scmWebUrlIsSet_ = true;
}

bool BuildRecord::scmWebUrlIsSet() const
{
    return scmWebUrlIsSet_;
}

void BuildRecord::unsetscmWebUrl()
{
    scmWebUrlIsSet_ = false;
}

std::string BuildRecord::getUserId() const
{
    return userId_;
}

void BuildRecord::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool BuildRecord::userIdIsSet() const
{
    return userIdIsSet_;
}

void BuildRecord::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string BuildRecord::getBuildNo() const
{
    return buildNo_;
}

void BuildRecord::setBuildNo(const std::string& value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool BuildRecord::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void BuildRecord::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string BuildRecord::getDailyBuildNo() const
{
    return dailyBuildNo_;
}

void BuildRecord::setDailyBuildNo(const std::string& value)
{
    dailyBuildNo_ = value;
    dailyBuildNoIsSet_ = true;
}

bool BuildRecord::dailyBuildNoIsSet() const
{
    return dailyBuildNoIsSet_;
}

void BuildRecord::unsetdailyBuildNo()
{
    dailyBuildNoIsSet_ = false;
}

std::string BuildRecord::getDevCloudBuildType() const
{
    return devCloudBuildType_;
}

void BuildRecord::setDevCloudBuildType(const std::string& value)
{
    devCloudBuildType_ = value;
    devCloudBuildTypeIsSet_ = true;
}

bool BuildRecord::devCloudBuildTypeIsSet() const
{
    return devCloudBuildTypeIsSet_;
}

void BuildRecord::unsetdevCloudBuildType()
{
    devCloudBuildTypeIsSet_ = false;
}

}
}
}
}
}


