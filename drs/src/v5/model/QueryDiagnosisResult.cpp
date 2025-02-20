

#include "huaweicloud/drs/v5/model/QueryDiagnosisResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDiagnosisResult::QueryDiagnosisResult()
{
    score_ = 0;
    scoreIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    normalCount_ = 0L;
    normalCountIsSet_ = false;
    abnormalCount_ = 0L;
    abnormalCountIsSet_ = false;
    alarmCount_ = 0L;
    alarmCountIsSet_ = false;
    failureCount_ = 0L;
    failureCountIsSet_ = false;
    timeoutCount_ = 0L;
    timeoutCountIsSet_ = false;
    diagnosisResultsIsSet_ = false;
}

QueryDiagnosisResult::~QueryDiagnosisResult() = default;

void QueryDiagnosisResult::validate()
{
}

web::json::value QueryDiagnosisResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(normalCountIsSet_) {
        val[utility::conversions::to_string_t("normal_count")] = ModelBase::toJson(normalCount_);
    }
    if(abnormalCountIsSet_) {
        val[utility::conversions::to_string_t("abnormal_count")] = ModelBase::toJson(abnormalCount_);
    }
    if(alarmCountIsSet_) {
        val[utility::conversions::to_string_t("alarm_count")] = ModelBase::toJson(alarmCount_);
    }
    if(failureCountIsSet_) {
        val[utility::conversions::to_string_t("failure_count")] = ModelBase::toJson(failureCount_);
    }
    if(timeoutCountIsSet_) {
        val[utility::conversions::to_string_t("timeout_count")] = ModelBase::toJson(timeoutCount_);
    }
    if(diagnosisResultsIsSet_) {
        val[utility::conversions::to_string_t("diagnosis_results")] = ModelBase::toJson(diagnosisResults_);
    }

    return val;
}
bool QueryDiagnosisResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normal_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diagnosis_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diagnosis_results"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDiagnosisResult_diagnosis_results> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiagnosisResults(refVal);
        }
    }
    return ok;
}


int32_t QueryDiagnosisResult::getScore() const
{
    return score_;
}

void QueryDiagnosisResult::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool QueryDiagnosisResult::scoreIsSet() const
{
    return scoreIsSet_;
}

void QueryDiagnosisResult::unsetscore()
{
    scoreIsSet_ = false;
}

std::string QueryDiagnosisResult::getStatus() const
{
    return status_;
}

void QueryDiagnosisResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryDiagnosisResult::statusIsSet() const
{
    return statusIsSet_;
}

void QueryDiagnosisResult::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t QueryDiagnosisResult::getProgress() const
{
    return progress_;
}

void QueryDiagnosisResult::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool QueryDiagnosisResult::progressIsSet() const
{
    return progressIsSet_;
}

void QueryDiagnosisResult::unsetprogress()
{
    progressIsSet_ = false;
}

std::string QueryDiagnosisResult::getErrorMsg() const
{
    return errorMsg_;
}

void QueryDiagnosisResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool QueryDiagnosisResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void QueryDiagnosisResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string QueryDiagnosisResult::getStartTime() const
{
    return startTime_;
}

void QueryDiagnosisResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool QueryDiagnosisResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void QueryDiagnosisResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string QueryDiagnosisResult::getEndTime() const
{
    return endTime_;
}

void QueryDiagnosisResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryDiagnosisResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryDiagnosisResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t QueryDiagnosisResult::getTotal() const
{
    return total_;
}

void QueryDiagnosisResult::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool QueryDiagnosisResult::totalIsSet() const
{
    return totalIsSet_;
}

void QueryDiagnosisResult::unsettotal()
{
    totalIsSet_ = false;
}

int64_t QueryDiagnosisResult::getNormalCount() const
{
    return normalCount_;
}

void QueryDiagnosisResult::setNormalCount(int64_t value)
{
    normalCount_ = value;
    normalCountIsSet_ = true;
}

bool QueryDiagnosisResult::normalCountIsSet() const
{
    return normalCountIsSet_;
}

void QueryDiagnosisResult::unsetnormalCount()
{
    normalCountIsSet_ = false;
}

int64_t QueryDiagnosisResult::getAbnormalCount() const
{
    return abnormalCount_;
}

void QueryDiagnosisResult::setAbnormalCount(int64_t value)
{
    abnormalCount_ = value;
    abnormalCountIsSet_ = true;
}

bool QueryDiagnosisResult::abnormalCountIsSet() const
{
    return abnormalCountIsSet_;
}

void QueryDiagnosisResult::unsetabnormalCount()
{
    abnormalCountIsSet_ = false;
}

int64_t QueryDiagnosisResult::getAlarmCount() const
{
    return alarmCount_;
}

void QueryDiagnosisResult::setAlarmCount(int64_t value)
{
    alarmCount_ = value;
    alarmCountIsSet_ = true;
}

bool QueryDiagnosisResult::alarmCountIsSet() const
{
    return alarmCountIsSet_;
}

void QueryDiagnosisResult::unsetalarmCount()
{
    alarmCountIsSet_ = false;
}

int64_t QueryDiagnosisResult::getFailureCount() const
{
    return failureCount_;
}

void QueryDiagnosisResult::setFailureCount(int64_t value)
{
    failureCount_ = value;
    failureCountIsSet_ = true;
}

bool QueryDiagnosisResult::failureCountIsSet() const
{
    return failureCountIsSet_;
}

void QueryDiagnosisResult::unsetfailureCount()
{
    failureCountIsSet_ = false;
}

int64_t QueryDiagnosisResult::getTimeoutCount() const
{
    return timeoutCount_;
}

void QueryDiagnosisResult::setTimeoutCount(int64_t value)
{
    timeoutCount_ = value;
    timeoutCountIsSet_ = true;
}

bool QueryDiagnosisResult::timeoutCountIsSet() const
{
    return timeoutCountIsSet_;
}

void QueryDiagnosisResult::unsettimeoutCount()
{
    timeoutCountIsSet_ = false;
}

std::vector<QueryDiagnosisResult_diagnosis_results>& QueryDiagnosisResult::getDiagnosisResults()
{
    return diagnosisResults_;
}

void QueryDiagnosisResult::setDiagnosisResults(const std::vector<QueryDiagnosisResult_diagnosis_results>& value)
{
    diagnosisResults_ = value;
    diagnosisResultsIsSet_ = true;
}

bool QueryDiagnosisResult::diagnosisResultsIsSet() const
{
    return diagnosisResultsIsSet_;
}

void QueryDiagnosisResult::unsetdiagnosisResults()
{
    diagnosisResultsIsSet_ = false;
}

}
}
}
}
}


