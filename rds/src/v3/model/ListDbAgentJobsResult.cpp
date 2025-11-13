

#include "huaweicloud/rds/v3/model/ListDbAgentJobsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobsResult::ListDbAgentJobsResult()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    isEnabled_ = false;
    isEnabledIsSet_ = false;
    runTime_ = "";
    runTimeIsSet_ = false;
    runStatus_ = "";
    runStatusIsSet_ = false;
    lastFailureTime_ = "";
    lastFailureTimeIsSet_ = false;
    failureCount_ = 0;
    failureCountIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
    profileId_ = "";
    profileIdIsSet_ = false;
    profileName_ = "";
    profileNameIsSet_ = false;
}

ListDbAgentJobsResult::~ListDbAgentJobsResult() = default;

void ListDbAgentJobsResult::validate()
{
}

web::json::value ListDbAgentJobsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(isEnabledIsSet_) {
        val[utility::conversions::to_string_t("is_enabled")] = ModelBase::toJson(isEnabled_);
    }
    if(runTimeIsSet_) {
        val[utility::conversions::to_string_t("run_time")] = ModelBase::toJson(runTime_);
    }
    if(runStatusIsSet_) {
        val[utility::conversions::to_string_t("run_status")] = ModelBase::toJson(runStatus_);
    }
    if(lastFailureTimeIsSet_) {
        val[utility::conversions::to_string_t("last_failure_time")] = ModelBase::toJson(lastFailureTime_);
    }
    if(failureCountIsSet_) {
        val[utility::conversions::to_string_t("failure_count")] = ModelBase::toJson(failureCount_);
    }
    if(agentTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_type")] = ModelBase::toJson(agentType_);
    }
    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }
    if(profileNameIsSet_) {
        val[utility::conversions::to_string_t("profile_name")] = ModelBase::toJson(profileName_);
    }

    return val;
}
bool ListDbAgentJobsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_failure_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_failure_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastFailureTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileName(refVal);
        }
    }
    return ok;
}


std::string ListDbAgentJobsResult::getJobId() const
{
    return jobId_;
}

void ListDbAgentJobsResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDbAgentJobsResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDbAgentJobsResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListDbAgentJobsResult::getJobName() const
{
    return jobName_;
}

void ListDbAgentJobsResult::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListDbAgentJobsResult::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListDbAgentJobsResult::unsetjobName()
{
    jobNameIsSet_ = false;
}

bool ListDbAgentJobsResult::isIsEnabled() const
{
    return isEnabled_;
}

void ListDbAgentJobsResult::setIsEnabled(bool value)
{
    isEnabled_ = value;
    isEnabledIsSet_ = true;
}

bool ListDbAgentJobsResult::isEnabledIsSet() const
{
    return isEnabledIsSet_;
}

void ListDbAgentJobsResult::unsetisEnabled()
{
    isEnabledIsSet_ = false;
}

std::string ListDbAgentJobsResult::getRunTime() const
{
    return runTime_;
}

void ListDbAgentJobsResult::setRunTime(const std::string& value)
{
    runTime_ = value;
    runTimeIsSet_ = true;
}

bool ListDbAgentJobsResult::runTimeIsSet() const
{
    return runTimeIsSet_;
}

void ListDbAgentJobsResult::unsetrunTime()
{
    runTimeIsSet_ = false;
}

std::string ListDbAgentJobsResult::getRunStatus() const
{
    return runStatus_;
}

void ListDbAgentJobsResult::setRunStatus(const std::string& value)
{
    runStatus_ = value;
    runStatusIsSet_ = true;
}

bool ListDbAgentJobsResult::runStatusIsSet() const
{
    return runStatusIsSet_;
}

void ListDbAgentJobsResult::unsetrunStatus()
{
    runStatusIsSet_ = false;
}

std::string ListDbAgentJobsResult::getLastFailureTime() const
{
    return lastFailureTime_;
}

void ListDbAgentJobsResult::setLastFailureTime(const std::string& value)
{
    lastFailureTime_ = value;
    lastFailureTimeIsSet_ = true;
}

bool ListDbAgentJobsResult::lastFailureTimeIsSet() const
{
    return lastFailureTimeIsSet_;
}

void ListDbAgentJobsResult::unsetlastFailureTime()
{
    lastFailureTimeIsSet_ = false;
}

int32_t ListDbAgentJobsResult::getFailureCount() const
{
    return failureCount_;
}

void ListDbAgentJobsResult::setFailureCount(int32_t value)
{
    failureCount_ = value;
    failureCountIsSet_ = true;
}

bool ListDbAgentJobsResult::failureCountIsSet() const
{
    return failureCountIsSet_;
}

void ListDbAgentJobsResult::unsetfailureCount()
{
    failureCountIsSet_ = false;
}

std::string ListDbAgentJobsResult::getAgentType() const
{
    return agentType_;
}

void ListDbAgentJobsResult::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool ListDbAgentJobsResult::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void ListDbAgentJobsResult::unsetagentType()
{
    agentTypeIsSet_ = false;
}

std::string ListDbAgentJobsResult::getProfileId() const
{
    return profileId_;
}

void ListDbAgentJobsResult::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool ListDbAgentJobsResult::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void ListDbAgentJobsResult::unsetprofileId()
{
    profileIdIsSet_ = false;
}

std::string ListDbAgentJobsResult::getProfileName() const
{
    return profileName_;
}

void ListDbAgentJobsResult::setProfileName(const std::string& value)
{
    profileName_ = value;
    profileNameIsSet_ = true;
}

bool ListDbAgentJobsResult::profileNameIsSet() const
{
    return profileNameIsSet_;
}

void ListDbAgentJobsResult::unsetprofileName()
{
    profileNameIsSet_ = false;
}

}
}
}
}
}


