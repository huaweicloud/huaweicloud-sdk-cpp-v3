

#include "huaweicloud/codeartsbuild/v3/model/RecordInfo2_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RecordInfo2_result::RecordInfo2_result()
{
    id_ = "";
    idIsSet_ = false;
    buildProjectId_ = "";
    buildProjectIdIsSet_ = false;
    buildRecordId_ = "";
    buildRecordIdIsSet_ = false;
    parentRecordId_ = "";
    parentRecordIdIsSet_ = false;
    devcloudProjectId_ = "";
    devcloudProjectIdIsSet_ = false;
    codeciJobId_ = "";
    codeciJobIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    buildNo_ = 0;
    buildNoIsSet_ = false;
    dailyBuildNum_ = "";
    dailyBuildNumIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    commit_ = "";
    commitIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    commitCreateTime_ = "";
    commitCreateTimeIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    buildType_ = "";
    buildTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    scheduleTime_ = "";
    scheduleTimeIsSet_ = false;
    queuedTime_ = "";
    queuedTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    runnableTime_ = "";
    runnableTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    recordStatus_ = "";
    recordStatusIsSet_ = false;
    usePrivateSlave_ = 0;
    usePrivateSlaveIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    errMsg_ = "";
    errMsgIsSet_ = false;
    buildConfigType_ = "";
    buildConfigTypeIsSet_ = false;
}

RecordInfo2_result::~RecordInfo2_result() = default;

void RecordInfo2_result::validate()
{
}

web::json::value RecordInfo2_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(buildProjectIdIsSet_) {
        val[utility::conversions::to_string_t("build_project_id")] = ModelBase::toJson(buildProjectId_);
    }
    if(buildRecordIdIsSet_) {
        val[utility::conversions::to_string_t("build_record_id")] = ModelBase::toJson(buildRecordId_);
    }
    if(parentRecordIdIsSet_) {
        val[utility::conversions::to_string_t("parent_record_id")] = ModelBase::toJson(parentRecordId_);
    }
    if(devcloudProjectIdIsSet_) {
        val[utility::conversions::to_string_t("devcloud_project_id")] = ModelBase::toJson(devcloudProjectId_);
    }
    if(codeciJobIdIsSet_) {
        val[utility::conversions::to_string_t("codeci_job_id")] = ModelBase::toJson(codeciJobId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(dailyBuildNumIsSet_) {
        val[utility::conversions::to_string_t("daily_build_num")] = ModelBase::toJson(dailyBuildNum_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(commitCreateTimeIsSet_) {
        val[utility::conversions::to_string_t("commit_create_time")] = ModelBase::toJson(commitCreateTime_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(buildTypeIsSet_) {
        val[utility::conversions::to_string_t("build_type")] = ModelBase::toJson(buildType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
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
    if(runnableTimeIsSet_) {
        val[utility::conversions::to_string_t("runnable_time")] = ModelBase::toJson(runnableTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(recordStatusIsSet_) {
        val[utility::conversions::to_string_t("record_status")] = ModelBase::toJson(recordStatus_);
    }
    if(usePrivateSlaveIsSet_) {
        val[utility::conversions::to_string_t("use_private_slave")] = ModelBase::toJson(usePrivateSlave_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(errMsgIsSet_) {
        val[utility::conversions::to_string_t("err_msg")] = ModelBase::toJson(errMsg_);
    }
    if(buildConfigTypeIsSet_) {
        val[utility::conversions::to_string_t("build_config_type")] = ModelBase::toJson(buildConfigType_);
    }

    return val;
}
bool RecordInfo2_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("devcloud_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devcloud_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevcloudProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codeci_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codeci_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeciJobId(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("build_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("runnable_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runnable_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunnableTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("record_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use_private_slave"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_private_slave"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsePrivateSlave(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("err_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("err_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_config_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildConfigType(refVal);
        }
    }
    return ok;
}


std::string RecordInfo2_result::getId() const
{
    return id_;
}

void RecordInfo2_result::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecordInfo2_result::idIsSet() const
{
    return idIsSet_;
}

void RecordInfo2_result::unsetid()
{
    idIsSet_ = false;
}

std::string RecordInfo2_result::getBuildProjectId() const
{
    return buildProjectId_;
}

void RecordInfo2_result::setBuildProjectId(const std::string& value)
{
    buildProjectId_ = value;
    buildProjectIdIsSet_ = true;
}

bool RecordInfo2_result::buildProjectIdIsSet() const
{
    return buildProjectIdIsSet_;
}

void RecordInfo2_result::unsetbuildProjectId()
{
    buildProjectIdIsSet_ = false;
}

std::string RecordInfo2_result::getBuildRecordId() const
{
    return buildRecordId_;
}

void RecordInfo2_result::setBuildRecordId(const std::string& value)
{
    buildRecordId_ = value;
    buildRecordIdIsSet_ = true;
}

bool RecordInfo2_result::buildRecordIdIsSet() const
{
    return buildRecordIdIsSet_;
}

void RecordInfo2_result::unsetbuildRecordId()
{
    buildRecordIdIsSet_ = false;
}

std::string RecordInfo2_result::getParentRecordId() const
{
    return parentRecordId_;
}

void RecordInfo2_result::setParentRecordId(const std::string& value)
{
    parentRecordId_ = value;
    parentRecordIdIsSet_ = true;
}

bool RecordInfo2_result::parentRecordIdIsSet() const
{
    return parentRecordIdIsSet_;
}

void RecordInfo2_result::unsetparentRecordId()
{
    parentRecordIdIsSet_ = false;
}

std::string RecordInfo2_result::getDevcloudProjectId() const
{
    return devcloudProjectId_;
}

void RecordInfo2_result::setDevcloudProjectId(const std::string& value)
{
    devcloudProjectId_ = value;
    devcloudProjectIdIsSet_ = true;
}

bool RecordInfo2_result::devcloudProjectIdIsSet() const
{
    return devcloudProjectIdIsSet_;
}

void RecordInfo2_result::unsetdevcloudProjectId()
{
    devcloudProjectIdIsSet_ = false;
}

std::string RecordInfo2_result::getCodeciJobId() const
{
    return codeciJobId_;
}

void RecordInfo2_result::setCodeciJobId(const std::string& value)
{
    codeciJobId_ = value;
    codeciJobIdIsSet_ = true;
}

bool RecordInfo2_result::codeciJobIdIsSet() const
{
    return codeciJobIdIsSet_;
}

void RecordInfo2_result::unsetcodeciJobId()
{
    codeciJobIdIsSet_ = false;
}

std::string RecordInfo2_result::getUserId() const
{
    return userId_;
}

void RecordInfo2_result::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RecordInfo2_result::userIdIsSet() const
{
    return userIdIsSet_;
}

void RecordInfo2_result::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t RecordInfo2_result::getBuildNo() const
{
    return buildNo_;
}

void RecordInfo2_result::setBuildNo(int32_t value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool RecordInfo2_result::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void RecordInfo2_result::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

std::string RecordInfo2_result::getDailyBuildNum() const
{
    return dailyBuildNum_;
}

void RecordInfo2_result::setDailyBuildNum(const std::string& value)
{
    dailyBuildNum_ = value;
    dailyBuildNumIsSet_ = true;
}

bool RecordInfo2_result::dailyBuildNumIsSet() const
{
    return dailyBuildNumIsSet_;
}

void RecordInfo2_result::unsetdailyBuildNum()
{
    dailyBuildNumIsSet_ = false;
}

std::string RecordInfo2_result::getExecutionId() const
{
    return executionId_;
}

void RecordInfo2_result::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool RecordInfo2_result::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void RecordInfo2_result::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string RecordInfo2_result::getRepoName() const
{
    return repoName_;
}

void RecordInfo2_result::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool RecordInfo2_result::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void RecordInfo2_result::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string RecordInfo2_result::getRepoId() const
{
    return repoId_;
}

void RecordInfo2_result::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool RecordInfo2_result::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void RecordInfo2_result::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string RecordInfo2_result::getBranch() const
{
    return branch_;
}

void RecordInfo2_result::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool RecordInfo2_result::branchIsSet() const
{
    return branchIsSet_;
}

void RecordInfo2_result::unsetbranch()
{
    branchIsSet_ = false;
}

std::string RecordInfo2_result::getTag() const
{
    return tag_;
}

void RecordInfo2_result::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool RecordInfo2_result::tagIsSet() const
{
    return tagIsSet_;
}

void RecordInfo2_result::unsettag()
{
    tagIsSet_ = false;
}

std::string RecordInfo2_result::getCommit() const
{
    return commit_;
}

void RecordInfo2_result::setCommit(const std::string& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool RecordInfo2_result::commitIsSet() const
{
    return commitIsSet_;
}

void RecordInfo2_result::unsetcommit()
{
    commitIsSet_ = false;
}

std::string RecordInfo2_result::getCommitMessage() const
{
    return commitMessage_;
}

void RecordInfo2_result::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool RecordInfo2_result::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void RecordInfo2_result::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string RecordInfo2_result::getCommitCreateTime() const
{
    return commitCreateTime_;
}

void RecordInfo2_result::setCommitCreateTime(const std::string& value)
{
    commitCreateTime_ = value;
    commitCreateTimeIsSet_ = true;
}

bool RecordInfo2_result::commitCreateTimeIsSet() const
{
    return commitCreateTimeIsSet_;
}

void RecordInfo2_result::unsetcommitCreateTime()
{
    commitCreateTimeIsSet_ = false;
}

std::string RecordInfo2_result::getTriggerType() const
{
    return triggerType_;
}

void RecordInfo2_result::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool RecordInfo2_result::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void RecordInfo2_result::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

std::string RecordInfo2_result::getBuildType() const
{
    return buildType_;
}

void RecordInfo2_result::setBuildType(const std::string& value)
{
    buildType_ = value;
    buildTypeIsSet_ = true;
}

bool RecordInfo2_result::buildTypeIsSet() const
{
    return buildTypeIsSet_;
}

void RecordInfo2_result::unsetbuildType()
{
    buildTypeIsSet_ = false;
}

std::string RecordInfo2_result::getStatus() const
{
    return status_;
}

void RecordInfo2_result::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RecordInfo2_result::statusIsSet() const
{
    return statusIsSet_;
}

void RecordInfo2_result::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RecordInfo2_result::getDomainId() const
{
    return domainId_;
}

void RecordInfo2_result::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RecordInfo2_result::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RecordInfo2_result::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string RecordInfo2_result::getCreateTime() const
{
    return createTime_;
}

void RecordInfo2_result::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RecordInfo2_result::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RecordInfo2_result::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string RecordInfo2_result::getScheduleTime() const
{
    return scheduleTime_;
}

void RecordInfo2_result::setScheduleTime(const std::string& value)
{
    scheduleTime_ = value;
    scheduleTimeIsSet_ = true;
}

bool RecordInfo2_result::scheduleTimeIsSet() const
{
    return scheduleTimeIsSet_;
}

void RecordInfo2_result::unsetscheduleTime()
{
    scheduleTimeIsSet_ = false;
}

std::string RecordInfo2_result::getQueuedTime() const
{
    return queuedTime_;
}

void RecordInfo2_result::setQueuedTime(const std::string& value)
{
    queuedTime_ = value;
    queuedTimeIsSet_ = true;
}

bool RecordInfo2_result::queuedTimeIsSet() const
{
    return queuedTimeIsSet_;
}

void RecordInfo2_result::unsetqueuedTime()
{
    queuedTimeIsSet_ = false;
}

std::string RecordInfo2_result::getStartTime() const
{
    return startTime_;
}

void RecordInfo2_result::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RecordInfo2_result::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RecordInfo2_result::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string RecordInfo2_result::getRunnableTime() const
{
    return runnableTime_;
}

void RecordInfo2_result::setRunnableTime(const std::string& value)
{
    runnableTime_ = value;
    runnableTimeIsSet_ = true;
}

bool RecordInfo2_result::runnableTimeIsSet() const
{
    return runnableTimeIsSet_;
}

void RecordInfo2_result::unsetrunnableTime()
{
    runnableTimeIsSet_ = false;
}

std::string RecordInfo2_result::getFinishTime() const
{
    return finishTime_;
}

void RecordInfo2_result::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool RecordInfo2_result::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void RecordInfo2_result::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

int32_t RecordInfo2_result::getDuration() const
{
    return duration_;
}

void RecordInfo2_result::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RecordInfo2_result::durationIsSet() const
{
    return durationIsSet_;
}

void RecordInfo2_result::unsetduration()
{
    durationIsSet_ = false;
}

std::string RecordInfo2_result::getRecordStatus() const
{
    return recordStatus_;
}

void RecordInfo2_result::setRecordStatus(const std::string& value)
{
    recordStatus_ = value;
    recordStatusIsSet_ = true;
}

bool RecordInfo2_result::recordStatusIsSet() const
{
    return recordStatusIsSet_;
}

void RecordInfo2_result::unsetrecordStatus()
{
    recordStatusIsSet_ = false;
}

int32_t RecordInfo2_result::getUsePrivateSlave() const
{
    return usePrivateSlave_;
}

void RecordInfo2_result::setUsePrivateSlave(int32_t value)
{
    usePrivateSlave_ = value;
    usePrivateSlaveIsSet_ = true;
}

bool RecordInfo2_result::usePrivateSlaveIsSet() const
{
    return usePrivateSlaveIsSet_;
}

void RecordInfo2_result::unsetusePrivateSlave()
{
    usePrivateSlaveIsSet_ = false;
}

std::string RecordInfo2_result::getRegion() const
{
    return region_;
}

void RecordInfo2_result::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RecordInfo2_result::regionIsSet() const
{
    return regionIsSet_;
}

void RecordInfo2_result::unsetregion()
{
    regionIsSet_ = false;
}

std::string RecordInfo2_result::getErrMsg() const
{
    return errMsg_;
}

void RecordInfo2_result::setErrMsg(const std::string& value)
{
    errMsg_ = value;
    errMsgIsSet_ = true;
}

bool RecordInfo2_result::errMsgIsSet() const
{
    return errMsgIsSet_;
}

void RecordInfo2_result::unseterrMsg()
{
    errMsgIsSet_ = false;
}

std::string RecordInfo2_result::getBuildConfigType() const
{
    return buildConfigType_;
}

void RecordInfo2_result::setBuildConfigType(const std::string& value)
{
    buildConfigType_ = value;
    buildConfigTypeIsSet_ = true;
}

bool RecordInfo2_result::buildConfigTypeIsSet() const
{
    return buildConfigTypeIsSet_;
}

void RecordInfo2_result::unsetbuildConfigType()
{
    buildConfigTypeIsSet_ = false;
}

}
}
}
}
}


