

#include "huaweicloud/codeartsbuild/v3/model/HistoryRecord_1.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




HistoryRecord_1::HistoryRecord_1()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    buildNumber_ = 0;
    buildNumberIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
}

HistoryRecord_1::~HistoryRecord_1() = default;

void HistoryRecord_1::validate()
{
}

web::json::value HistoryRecord_1::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(buildNumberIsSet_) {
        val[utility::conversions::to_string_t("build_number")] = ModelBase::toJson(buildNumber_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }

    return val;
}

bool HistoryRecord_1::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
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
    return ok;
}

std::string HistoryRecord_1::getRecordId() const
{
    return recordId_;
}

void HistoryRecord_1::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool HistoryRecord_1::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void HistoryRecord_1::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string HistoryRecord_1::getJobId() const
{
    return jobId_;
}

void HistoryRecord_1::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool HistoryRecord_1::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void HistoryRecord_1::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t HistoryRecord_1::getBuildNumber() const
{
    return buildNumber_;
}

void HistoryRecord_1::setBuildNumber(int32_t value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool HistoryRecord_1::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void HistoryRecord_1::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

std::string HistoryRecord_1::getStartTime() const
{
    return startTime_;
}

void HistoryRecord_1::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HistoryRecord_1::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HistoryRecord_1::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string HistoryRecord_1::getEndTime() const
{
    return endTime_;
}

void HistoryRecord_1::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HistoryRecord_1::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HistoryRecord_1::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string HistoryRecord_1::getResult() const
{
    return result_;
}

void HistoryRecord_1::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool HistoryRecord_1::resultIsSet() const
{
    return resultIsSet_;
}

void HistoryRecord_1::unsetresult()
{
    resultIsSet_ = false;
}

std::string HistoryRecord_1::getBranch() const
{
    return branch_;
}

void HistoryRecord_1::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool HistoryRecord_1::branchIsSet() const
{
    return branchIsSet_;
}

void HistoryRecord_1::unsetbranch()
{
    branchIsSet_ = false;
}

std::string HistoryRecord_1::getCommitId() const
{
    return commitId_;
}

void HistoryRecord_1::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool HistoryRecord_1::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void HistoryRecord_1::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string HistoryRecord_1::getCommitMessage() const
{
    return commitMessage_;
}

void HistoryRecord_1::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool HistoryRecord_1::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void HistoryRecord_1::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string HistoryRecord_1::getExecutor() const
{
    return executor_;
}

void HistoryRecord_1::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool HistoryRecord_1::executorIsSet() const
{
    return executorIsSet_;
}

void HistoryRecord_1::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string HistoryRecord_1::getTriggerType() const
{
    return triggerType_;
}

void HistoryRecord_1::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool HistoryRecord_1::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void HistoryRecord_1::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

}
}
}
}
}


