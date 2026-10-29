

#include "huaweicloud/codeartscheck/v2/model/JobBasicInfoV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




JobBasicInfoV3::JobBasicInfoV3()
{
    executor_ = "";
    executorIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    jobResultIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    processIsSet_ = false;
    reviewResult_ = "";
    reviewResultIsSet_ = false;
    ruleSetsIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    sourceRepoUrl_ = "";
    sourceRepoUrlIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subJobIdsIsSet_ = false;
    subJobStatusesIsSet_ = false;
    targetRepoUrl_ = "";
    targetRepoUrlIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    totalExecuteTime_ = "";
    totalExecuteTimeIsSet_ = false;
}

JobBasicInfoV3::~JobBasicInfoV3() = default;

void JobBasicInfoV3::validate()
{
}

web::json::value JobBasicInfoV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finishTime")] = ModelBase::toJson(finishTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobResultIsSet_) {
        val[utility::conversions::to_string_t("jobResult")] = ModelBase::toJson(jobResult_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("jobType")] = ModelBase::toJson(jobType_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(reviewResultIsSet_) {
        val[utility::conversions::to_string_t("reviewResult")] = ModelBase::toJson(reviewResult_);
    }
    if(ruleSetsIsSet_) {
        val[utility::conversions::to_string_t("ruleSets")] = ModelBase::toJson(ruleSets_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(sourceRepoUrlIsSet_) {
        val[utility::conversions::to_string_t("sourceRepoUrl")] = ModelBase::toJson(sourceRepoUrl_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subJobIdsIsSet_) {
        val[utility::conversions::to_string_t("subJobIds")] = ModelBase::toJson(subJobIds_);
    }
    if(subJobStatusesIsSet_) {
        val[utility::conversions::to_string_t("subJobStatuses")] = ModelBase::toJson(subJobStatuses_);
    }
    if(targetRepoUrlIsSet_) {
        val[utility::conversions::to_string_t("targetRepoUrl")] = ModelBase::toJson(targetRepoUrl_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("taskId")] = ModelBase::toJson(taskId_);
    }
    if(totalExecuteTimeIsSet_) {
        val[utility::conversions::to_string_t("totalExecuteTime")] = ModelBase::toJson(totalExecuteTime_);
    }

    return val;
}
bool JobBasicInfoV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finishTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finishTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("jobResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobResult"));
        if(!fieldValue.is_null())
        {
            JobResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            ProcessInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewResult"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleSets"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigTemplateRuleSetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sourceRepoUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sourceRepoUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subJobIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subJobIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subJobStatuses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subJobStatuses"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobStatuses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetRepoUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetRepoUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalExecuteTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalExecuteTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalExecuteTime(refVal);
        }
    }
    return ok;
}


std::string JobBasicInfoV3::getExecutor() const
{
    return executor_;
}

void JobBasicInfoV3::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool JobBasicInfoV3::executorIsSet() const
{
    return executorIsSet_;
}

void JobBasicInfoV3::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string JobBasicInfoV3::getFinishTime() const
{
    return finishTime_;
}

void JobBasicInfoV3::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool JobBasicInfoV3::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void JobBasicInfoV3::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string JobBasicInfoV3::getId() const
{
    return id_;
}

void JobBasicInfoV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobBasicInfoV3::idIsSet() const
{
    return idIsSet_;
}

void JobBasicInfoV3::unsetid()
{
    idIsSet_ = false;
}

JobResultInfo JobBasicInfoV3::getJobResult() const
{
    return jobResult_;
}

void JobBasicInfoV3::setJobResult(const JobResultInfo& value)
{
    jobResult_ = value;
    jobResultIsSet_ = true;
}

bool JobBasicInfoV3::jobResultIsSet() const
{
    return jobResultIsSet_;
}

void JobBasicInfoV3::unsetjobResult()
{
    jobResultIsSet_ = false;
}

std::string JobBasicInfoV3::getJobType() const
{
    return jobType_;
}

void JobBasicInfoV3::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobBasicInfoV3::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobBasicInfoV3::unsetjobType()
{
    jobTypeIsSet_ = false;
}

ProcessInfo JobBasicInfoV3::getProcess() const
{
    return process_;
}

void JobBasicInfoV3::setProcess(const ProcessInfo& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool JobBasicInfoV3::processIsSet() const
{
    return processIsSet_;
}

void JobBasicInfoV3::unsetprocess()
{
    processIsSet_ = false;
}

std::string JobBasicInfoV3::getReviewResult() const
{
    return reviewResult_;
}

void JobBasicInfoV3::setReviewResult(const std::string& value)
{
    reviewResult_ = value;
    reviewResultIsSet_ = true;
}

bool JobBasicInfoV3::reviewResultIsSet() const
{
    return reviewResultIsSet_;
}

void JobBasicInfoV3::unsetreviewResult()
{
    reviewResultIsSet_ = false;
}

std::vector<ConfigTemplateRuleSetInfo>& JobBasicInfoV3::getRuleSets()
{
    return ruleSets_;
}

void JobBasicInfoV3::setRuleSets(const std::vector<ConfigTemplateRuleSetInfo>& value)
{
    ruleSets_ = value;
    ruleSetsIsSet_ = true;
}

bool JobBasicInfoV3::ruleSetsIsSet() const
{
    return ruleSetsIsSet_;
}

void JobBasicInfoV3::unsetruleSets()
{
    ruleSetsIsSet_ = false;
}

std::string JobBasicInfoV3::getSource() const
{
    return source_;
}

void JobBasicInfoV3::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool JobBasicInfoV3::sourceIsSet() const
{
    return sourceIsSet_;
}

void JobBasicInfoV3::unsetsource()
{
    sourceIsSet_ = false;
}

std::string JobBasicInfoV3::getSourceRepoUrl() const
{
    return sourceRepoUrl_;
}

void JobBasicInfoV3::setSourceRepoUrl(const std::string& value)
{
    sourceRepoUrl_ = value;
    sourceRepoUrlIsSet_ = true;
}

bool JobBasicInfoV3::sourceRepoUrlIsSet() const
{
    return sourceRepoUrlIsSet_;
}

void JobBasicInfoV3::unsetsourceRepoUrl()
{
    sourceRepoUrlIsSet_ = false;
}

std::string JobBasicInfoV3::getStartTime() const
{
    return startTime_;
}

void JobBasicInfoV3::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool JobBasicInfoV3::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void JobBasicInfoV3::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string JobBasicInfoV3::getStatus() const
{
    return status_;
}

void JobBasicInfoV3::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobBasicInfoV3::statusIsSet() const
{
    return statusIsSet_;
}

void JobBasicInfoV3::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& JobBasicInfoV3::getSubJobIds()
{
    return subJobIds_;
}

void JobBasicInfoV3::setSubJobIds(const std::vector<std::string>& value)
{
    subJobIds_ = value;
    subJobIdsIsSet_ = true;
}

bool JobBasicInfoV3::subJobIdsIsSet() const
{
    return subJobIdsIsSet_;
}

void JobBasicInfoV3::unsetsubJobIds()
{
    subJobIdsIsSet_ = false;
}

std::vector<std::string>& JobBasicInfoV3::getSubJobStatuses()
{
    return subJobStatuses_;
}

void JobBasicInfoV3::setSubJobStatuses(const std::vector<std::string>& value)
{
    subJobStatuses_ = value;
    subJobStatusesIsSet_ = true;
}

bool JobBasicInfoV3::subJobStatusesIsSet() const
{
    return subJobStatusesIsSet_;
}

void JobBasicInfoV3::unsetsubJobStatuses()
{
    subJobStatusesIsSet_ = false;
}

std::string JobBasicInfoV3::getTargetRepoUrl() const
{
    return targetRepoUrl_;
}

void JobBasicInfoV3::setTargetRepoUrl(const std::string& value)
{
    targetRepoUrl_ = value;
    targetRepoUrlIsSet_ = true;
}

bool JobBasicInfoV3::targetRepoUrlIsSet() const
{
    return targetRepoUrlIsSet_;
}

void JobBasicInfoV3::unsettargetRepoUrl()
{
    targetRepoUrlIsSet_ = false;
}

std::string JobBasicInfoV3::getTaskId() const
{
    return taskId_;
}

void JobBasicInfoV3::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool JobBasicInfoV3::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void JobBasicInfoV3::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string JobBasicInfoV3::getTotalExecuteTime() const
{
    return totalExecuteTime_;
}

void JobBasicInfoV3::setTotalExecuteTime(const std::string& value)
{
    totalExecuteTime_ = value;
    totalExecuteTimeIsSet_ = true;
}

bool JobBasicInfoV3::totalExecuteTimeIsSet() const
{
    return totalExecuteTimeIsSet_;
}

void JobBasicInfoV3::unsettotalExecuteTime()
{
    totalExecuteTimeIsSet_ = false;
}

}
}
}
}
}


