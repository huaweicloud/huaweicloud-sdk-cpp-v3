

#include "huaweicloud/codeartsbuild/v3/model/HistoryRecord.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




HistoryRecord::HistoryRecord()
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
}

HistoryRecord::~HistoryRecord() = default;

void HistoryRecord::validate()
{
}

web::json::value HistoryRecord::toJson() const
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

    return val;
}

bool HistoryRecord::fromJson(const web::json::value& val)
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
    return ok;
}

std::string HistoryRecord::getRecordId() const
{
    return recordId_;
}

void HistoryRecord::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool HistoryRecord::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void HistoryRecord::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string HistoryRecord::getJobId() const
{
    return jobId_;
}

void HistoryRecord::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool HistoryRecord::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void HistoryRecord::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t HistoryRecord::getBuildNumber() const
{
    return buildNumber_;
}

void HistoryRecord::setBuildNumber(int32_t value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool HistoryRecord::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void HistoryRecord::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

std::string HistoryRecord::getStartTime() const
{
    return startTime_;
}

void HistoryRecord::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HistoryRecord::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HistoryRecord::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string HistoryRecord::getEndTime() const
{
    return endTime_;
}

void HistoryRecord::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HistoryRecord::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HistoryRecord::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string HistoryRecord::getResult() const
{
    return result_;
}

void HistoryRecord::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool HistoryRecord::resultIsSet() const
{
    return resultIsSet_;
}

void HistoryRecord::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


