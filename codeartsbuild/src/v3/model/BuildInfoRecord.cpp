

#include "huaweicloud/codeartsbuild/v3/model/BuildInfoRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildInfoRecord::BuildInfoRecord()
{
    number_ = 0;
    numberIsSet_ = false;
    buildTime_ = 0;
    buildTimeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    jobRunningStatus_ = "";
    jobRunningStatusIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    nickname_ = "";
    nicknameIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    costTime_ = 0;
    costTimeIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    commitInfoIsSet_ = false;
    buildType_ = "";
    buildTypeIsSet_ = false;
    codeBranch_ = "";
    codeBranchIsSet_ = false;
    scmType_ = "";
    scmTypeIsSet_ = false;
    scmWebUrl_ = "";
    scmWebUrlIsSet_ = false;
    commitDetailUrl_ = "";
    commitDetailUrlIsSet_ = false;
}

BuildInfoRecord::~BuildInfoRecord() = default;

void BuildInfoRecord::validate()
{
}

web::json::value BuildInfoRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(buildTimeIsSet_) {
        val[utility::conversions::to_string_t("build_time")] = ModelBase::toJson(buildTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(jobRunningStatusIsSet_) {
        val[utility::conversions::to_string_t("job_running_status")] = ModelBase::toJson(jobRunningStatus_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(nicknameIsSet_) {
        val[utility::conversions::to_string_t("nickname")] = ModelBase::toJson(nickname_);
    }
    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(costTimeIsSet_) {
        val[utility::conversions::to_string_t("cost_time")] = ModelBase::toJson(costTime_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(commitInfoIsSet_) {
        val[utility::conversions::to_string_t("commit_info")] = ModelBase::toJson(commitInfo_);
    }
    if(buildTypeIsSet_) {
        val[utility::conversions::to_string_t("build_type")] = ModelBase::toJson(buildType_);
    }
    if(codeBranchIsSet_) {
        val[utility::conversions::to_string_t("code_branch")] = ModelBase::toJson(codeBranch_);
    }
    if(scmTypeIsSet_) {
        val[utility::conversions::to_string_t("scm_type")] = ModelBase::toJson(scmType_);
    }
    if(scmWebUrlIsSet_) {
        val[utility::conversions::to_string_t("scm_web_url")] = ModelBase::toJson(scmWebUrl_);
    }
    if(commitDetailUrlIsSet_) {
        val[utility::conversions::to_string_t("commit_detail_url")] = ModelBase::toJson(commitDetailUrl_);
    }

    return val;
}
bool BuildInfoRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_running_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_running_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobRunningStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nickname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nickname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickname(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_info"));
        if(!fieldValue.is_null())
        {
            BuildInfoRecord_commit_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commit_detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitDetailUrl(refVal);
        }
    }
    return ok;
}


int32_t BuildInfoRecord::getNumber() const
{
    return number_;
}

void BuildInfoRecord::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool BuildInfoRecord::numberIsSet() const
{
    return numberIsSet_;
}

void BuildInfoRecord::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t BuildInfoRecord::getBuildTime() const
{
    return buildTime_;
}

void BuildInfoRecord::setBuildTime(int32_t value)
{
    buildTime_ = value;
    buildTimeIsSet_ = true;
}

bool BuildInfoRecord::buildTimeIsSet() const
{
    return buildTimeIsSet_;
}

void BuildInfoRecord::unsetbuildTime()
{
    buildTimeIsSet_ = false;
}

int64_t BuildInfoRecord::getStartTime() const
{
    return startTime_;
}

void BuildInfoRecord::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BuildInfoRecord::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BuildInfoRecord::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BuildInfoRecord::getJobRunningStatus() const
{
    return jobRunningStatus_;
}

void BuildInfoRecord::setJobRunningStatus(const std::string& value)
{
    jobRunningStatus_ = value;
    jobRunningStatusIsSet_ = true;
}

bool BuildInfoRecord::jobRunningStatusIsSet() const
{
    return jobRunningStatusIsSet_;
}

void BuildInfoRecord::unsetjobRunningStatus()
{
    jobRunningStatusIsSet_ = false;
}

std::string BuildInfoRecord::getState() const
{
    return state_;
}

void BuildInfoRecord::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool BuildInfoRecord::stateIsSet() const
{
    return stateIsSet_;
}

void BuildInfoRecord::unsetstate()
{
    stateIsSet_ = false;
}

std::string BuildInfoRecord::getUserId() const
{
    return userId_;
}

void BuildInfoRecord::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool BuildInfoRecord::userIdIsSet() const
{
    return userIdIsSet_;
}

void BuildInfoRecord::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string BuildInfoRecord::getExecutor() const
{
    return executor_;
}

void BuildInfoRecord::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool BuildInfoRecord::executorIsSet() const
{
    return executorIsSet_;
}

void BuildInfoRecord::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string BuildInfoRecord::getNickname() const
{
    return nickname_;
}

void BuildInfoRecord::setNickname(const std::string& value)
{
    nickname_ = value;
    nicknameIsSet_ = true;
}

bool BuildInfoRecord::nicknameIsSet() const
{
    return nicknameIsSet_;
}

void BuildInfoRecord::unsetnickname()
{
    nicknameIsSet_ = false;
}

std::string BuildInfoRecord::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void BuildInfoRecord::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool BuildInfoRecord::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void BuildInfoRecord::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

std::string BuildInfoRecord::getTriggerType() const
{
    return triggerType_;
}

void BuildInfoRecord::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool BuildInfoRecord::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void BuildInfoRecord::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

int32_t BuildInfoRecord::getCostTime() const
{
    return costTime_;
}

void BuildInfoRecord::setCostTime(int32_t value)
{
    costTime_ = value;
    costTimeIsSet_ = true;
}

bool BuildInfoRecord::costTimeIsSet() const
{
    return costTimeIsSet_;
}

void BuildInfoRecord::unsetcostTime()
{
    costTimeIsSet_ = false;
}

std::string BuildInfoRecord::getCommitId() const
{
    return commitId_;
}

void BuildInfoRecord::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool BuildInfoRecord::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void BuildInfoRecord::unsetcommitId()
{
    commitIdIsSet_ = false;
}

BuildInfoRecord_commit_info BuildInfoRecord::getCommitInfo() const
{
    return commitInfo_;
}

void BuildInfoRecord::setCommitInfo(const BuildInfoRecord_commit_info& value)
{
    commitInfo_ = value;
    commitInfoIsSet_ = true;
}

bool BuildInfoRecord::commitInfoIsSet() const
{
    return commitInfoIsSet_;
}

void BuildInfoRecord::unsetcommitInfo()
{
    commitInfoIsSet_ = false;
}

std::string BuildInfoRecord::getBuildType() const
{
    return buildType_;
}

void BuildInfoRecord::setBuildType(const std::string& value)
{
    buildType_ = value;
    buildTypeIsSet_ = true;
}

bool BuildInfoRecord::buildTypeIsSet() const
{
    return buildTypeIsSet_;
}

void BuildInfoRecord::unsetbuildType()
{
    buildTypeIsSet_ = false;
}

std::string BuildInfoRecord::getCodeBranch() const
{
    return codeBranch_;
}

void BuildInfoRecord::setCodeBranch(const std::string& value)
{
    codeBranch_ = value;
    codeBranchIsSet_ = true;
}

bool BuildInfoRecord::codeBranchIsSet() const
{
    return codeBranchIsSet_;
}

void BuildInfoRecord::unsetcodeBranch()
{
    codeBranchIsSet_ = false;
}

std::string BuildInfoRecord::getScmType() const
{
    return scmType_;
}

void BuildInfoRecord::setScmType(const std::string& value)
{
    scmType_ = value;
    scmTypeIsSet_ = true;
}

bool BuildInfoRecord::scmTypeIsSet() const
{
    return scmTypeIsSet_;
}

void BuildInfoRecord::unsetscmType()
{
    scmTypeIsSet_ = false;
}

std::string BuildInfoRecord::getScmWebUrl() const
{
    return scmWebUrl_;
}

void BuildInfoRecord::setScmWebUrl(const std::string& value)
{
    scmWebUrl_ = value;
    scmWebUrlIsSet_ = true;
}

bool BuildInfoRecord::scmWebUrlIsSet() const
{
    return scmWebUrlIsSet_;
}

void BuildInfoRecord::unsetscmWebUrl()
{
    scmWebUrlIsSet_ = false;
}

std::string BuildInfoRecord::getCommitDetailUrl() const
{
    return commitDetailUrl_;
}

void BuildInfoRecord::setCommitDetailUrl(const std::string& value)
{
    commitDetailUrl_ = value;
    commitDetailUrlIsSet_ = true;
}

bool BuildInfoRecord::commitDetailUrlIsSet() const
{
    return commitDetailUrlIsSet_;
}

void BuildInfoRecord::unsetcommitDetailUrl()
{
    commitDetailUrlIsSet_ = false;
}

}
}
}
}
}


