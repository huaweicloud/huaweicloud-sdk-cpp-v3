

#include "huaweicloud/codeartsbuild/v3/model/ShowLastHistoryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowLastHistoryResponse::ShowLastHistoryResponse()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    buildNumber_ = 0;
    buildNumberIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
}

ShowLastHistoryResponse::~ShowLastHistoryResponse() = default;

void ShowLastHistoryResponse::validate()
{
}

web::json::value ShowLastHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
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
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }

    return val;
}

bool ShowLastHistoryResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    return ok;
}

std::string ShowLastHistoryResponse::getRecordId() const
{
    return recordId_;
}

void ShowLastHistoryResponse::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ShowLastHistoryResponse::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ShowLastHistoryResponse::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string ShowLastHistoryResponse::getJobId() const
{
    return jobId_;
}

void ShowLastHistoryResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowLastHistoryResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowLastHistoryResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowLastHistoryResponse::getJobName() const
{
    return jobName_;
}

void ShowLastHistoryResponse::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowLastHistoryResponse::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowLastHistoryResponse::unsetjobName()
{
    jobNameIsSet_ = false;
}

int32_t ShowLastHistoryResponse::getBuildNumber() const
{
    return buildNumber_;
}

void ShowLastHistoryResponse::setBuildNumber(int32_t value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool ShowLastHistoryResponse::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void ShowLastHistoryResponse::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

std::string ShowLastHistoryResponse::getStartTime() const
{
    return startTime_;
}

void ShowLastHistoryResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowLastHistoryResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowLastHistoryResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowLastHistoryResponse::getEndTime() const
{
    return endTime_;
}

void ShowLastHistoryResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowLastHistoryResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowLastHistoryResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowLastHistoryResponse::getResult() const
{
    return result_;
}

void ShowLastHistoryResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowLastHistoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowLastHistoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowLastHistoryResponse::getCommitId() const
{
    return commitId_;
}

void ShowLastHistoryResponse::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ShowLastHistoryResponse::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ShowLastHistoryResponse::unsetcommitId()
{
    commitIdIsSet_ = false;
}

}
}
}
}
}


