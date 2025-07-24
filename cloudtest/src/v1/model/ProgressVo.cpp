

#include "huaweicloud/cloudtest/v1/model/ProgressVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProgressVo::ProgressVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    completed_ = false;
    completedIsSet_ = false;
    cancelled_ = false;
    cancelledIsSet_ = false;
    informationsIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    submittedTime_ = "";
    submittedTimeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    serverIp_ = "";
    serverIpIsSet_ = false;
    lastModifiedTime_ = 0L;
    lastModifiedTimeIsSet_ = false;
    finishedCount_ = 0;
    finishedCountIsSet_ = false;
    returnValueIsSet_ = false;
    exceptionMessage_ = "";
    exceptionMessageIsSet_ = false;
    lineUpNum_ = 0;
    lineUpNumIsSet_ = false;
    asynOperationKey_ = "";
    asynOperationKeyIsSet_ = false;
    isEnded_ = false;
    isEndedIsSet_ = false;
    finishedPercent_ = 0;
    finishedPercentIsSet_ = false;
}

ProgressVo::~ProgressVo() = default;

void ProgressVo::validate()
{
}

web::json::value ProgressVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(completedIsSet_) {
        val[utility::conversions::to_string_t("completed")] = ModelBase::toJson(completed_);
    }
    if(cancelledIsSet_) {
        val[utility::conversions::to_string_t("cancelled")] = ModelBase::toJson(cancelled_);
    }
    if(informationsIsSet_) {
        val[utility::conversions::to_string_t("informations")] = ModelBase::toJson(informations_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(submittedTimeIsSet_) {
        val[utility::conversions::to_string_t("submitted_time")] = ModelBase::toJson(submittedTime_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(serverIpIsSet_) {
        val[utility::conversions::to_string_t("server_ip")] = ModelBase::toJson(serverIp_);
    }
    if(lastModifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modified_time")] = ModelBase::toJson(lastModifiedTime_);
    }
    if(finishedCountIsSet_) {
        val[utility::conversions::to_string_t("finished_count")] = ModelBase::toJson(finishedCount_);
    }
    if(returnValueIsSet_) {
        val[utility::conversions::to_string_t("return_value")] = ModelBase::toJson(returnValue_);
    }
    if(exceptionMessageIsSet_) {
        val[utility::conversions::to_string_t("exception_message")] = ModelBase::toJson(exceptionMessage_);
    }
    if(lineUpNumIsSet_) {
        val[utility::conversions::to_string_t("line_up_num")] = ModelBase::toJson(lineUpNum_);
    }
    if(asynOperationKeyIsSet_) {
        val[utility::conversions::to_string_t("asyn_operation_key")] = ModelBase::toJson(asynOperationKey_);
    }
    if(isEndedIsSet_) {
        val[utility::conversions::to_string_t("is_ended")] = ModelBase::toJson(isEnded_);
    }
    if(finishedPercentIsSet_) {
        val[utility::conversions::to_string_t("finished_percent")] = ModelBase::toJson(finishedPercent_);
    }

    return val;
}
bool ProgressVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cancelled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cancelled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCancelled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("informations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("informations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInformations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submitted_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submitted_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmittedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exception_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exception_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExceptionMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_up_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_up_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineUpNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asyn_operation_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asyn_operation_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsynOperationKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ended"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ended"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEnded(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedPercent(refVal);
        }
    }
    return ok;
}


std::string ProgressVo::getUri() const
{
    return uri_;
}

void ProgressVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ProgressVo::uriIsSet() const
{
    return uriIsSet_;
}

void ProgressVo::unseturi()
{
    uriIsSet_ = false;
}

std::string ProgressVo::getName() const
{
    return name_;
}

void ProgressVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProgressVo::nameIsSet() const
{
    return nameIsSet_;
}

void ProgressVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t ProgressVo::getTotal() const
{
    return total_;
}

void ProgressVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ProgressVo::totalIsSet() const
{
    return totalIsSet_;
}

void ProgressVo::unsettotal()
{
    totalIsSet_ = false;
}

bool ProgressVo::isCompleted() const
{
    return completed_;
}

void ProgressVo::setCompleted(bool value)
{
    completed_ = value;
    completedIsSet_ = true;
}

bool ProgressVo::completedIsSet() const
{
    return completedIsSet_;
}

void ProgressVo::unsetcompleted()
{
    completedIsSet_ = false;
}

bool ProgressVo::isCancelled() const
{
    return cancelled_;
}

void ProgressVo::setCancelled(bool value)
{
    cancelled_ = value;
    cancelledIsSet_ = true;
}

bool ProgressVo::cancelledIsSet() const
{
    return cancelledIsSet_;
}

void ProgressVo::unsetcancelled()
{
    cancelledIsSet_ = false;
}

std::vector<std::string>& ProgressVo::getInformations()
{
    return informations_;
}

void ProgressVo::setInformations(const std::vector<std::string>& value)
{
    informations_ = value;
    informationsIsSet_ = true;
}

bool ProgressVo::informationsIsSet() const
{
    return informationsIsSet_;
}

void ProgressVo::unsetinformations()
{
    informationsIsSet_ = false;
}

std::string ProgressVo::getCode() const
{
    return code_;
}

void ProgressVo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProgressVo::codeIsSet() const
{
    return codeIsSet_;
}

void ProgressVo::unsetcode()
{
    codeIsSet_ = false;
}

std::string ProgressVo::getReason() const
{
    return reason_;
}

void ProgressVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ProgressVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ProgressVo::unsetreason()
{
    reasonIsSet_ = false;
}

std::string ProgressVo::getSubmittedTime() const
{
    return submittedTime_;
}

void ProgressVo::setSubmittedTime(const std::string& value)
{
    submittedTime_ = value;
    submittedTimeIsSet_ = true;
}

bool ProgressVo::submittedTimeIsSet() const
{
    return submittedTimeIsSet_;
}

void ProgressVo::unsetsubmittedTime()
{
    submittedTimeIsSet_ = false;
}

std::string ProgressVo::getBeginTime() const
{
    return beginTime_;
}

void ProgressVo::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ProgressVo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ProgressVo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ProgressVo::getEndTime() const
{
    return endTime_;
}

void ProgressVo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ProgressVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ProgressVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ProgressVo::getServerIp() const
{
    return serverIp_;
}

void ProgressVo::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool ProgressVo::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void ProgressVo::unsetserverIp()
{
    serverIpIsSet_ = false;
}

int64_t ProgressVo::getLastModifiedTime() const
{
    return lastModifiedTime_;
}

void ProgressVo::setLastModifiedTime(int64_t value)
{
    lastModifiedTime_ = value;
    lastModifiedTimeIsSet_ = true;
}

bool ProgressVo::lastModifiedTimeIsSet() const
{
    return lastModifiedTimeIsSet_;
}

void ProgressVo::unsetlastModifiedTime()
{
    lastModifiedTimeIsSet_ = false;
}

int32_t ProgressVo::getFinishedCount() const
{
    return finishedCount_;
}

void ProgressVo::setFinishedCount(int32_t value)
{
    finishedCount_ = value;
    finishedCountIsSet_ = true;
}

bool ProgressVo::finishedCountIsSet() const
{
    return finishedCountIsSet_;
}

void ProgressVo::unsetfinishedCount()
{
    finishedCountIsSet_ = false;
}

Object ProgressVo::getReturnValue() const
{
    return returnValue_;
}

void ProgressVo::setReturnValue(const Object& value)
{
    returnValue_ = value;
    returnValueIsSet_ = true;
}

bool ProgressVo::returnValueIsSet() const
{
    return returnValueIsSet_;
}

void ProgressVo::unsetreturnValue()
{
    returnValueIsSet_ = false;
}

std::string ProgressVo::getExceptionMessage() const
{
    return exceptionMessage_;
}

void ProgressVo::setExceptionMessage(const std::string& value)
{
    exceptionMessage_ = value;
    exceptionMessageIsSet_ = true;
}

bool ProgressVo::exceptionMessageIsSet() const
{
    return exceptionMessageIsSet_;
}

void ProgressVo::unsetexceptionMessage()
{
    exceptionMessageIsSet_ = false;
}

int32_t ProgressVo::getLineUpNum() const
{
    return lineUpNum_;
}

void ProgressVo::setLineUpNum(int32_t value)
{
    lineUpNum_ = value;
    lineUpNumIsSet_ = true;
}

bool ProgressVo::lineUpNumIsSet() const
{
    return lineUpNumIsSet_;
}

void ProgressVo::unsetlineUpNum()
{
    lineUpNumIsSet_ = false;
}

std::string ProgressVo::getAsynOperationKey() const
{
    return asynOperationKey_;
}

void ProgressVo::setAsynOperationKey(const std::string& value)
{
    asynOperationKey_ = value;
    asynOperationKeyIsSet_ = true;
}

bool ProgressVo::asynOperationKeyIsSet() const
{
    return asynOperationKeyIsSet_;
}

void ProgressVo::unsetasynOperationKey()
{
    asynOperationKeyIsSet_ = false;
}

bool ProgressVo::isIsEnded() const
{
    return isEnded_;
}

void ProgressVo::setIsEnded(bool value)
{
    isEnded_ = value;
    isEndedIsSet_ = true;
}

bool ProgressVo::isEndedIsSet() const
{
    return isEndedIsSet_;
}

void ProgressVo::unsetisEnded()
{
    isEndedIsSet_ = false;
}

int32_t ProgressVo::getFinishedPercent() const
{
    return finishedPercent_;
}

void ProgressVo::setFinishedPercent(int32_t value)
{
    finishedPercent_ = value;
    finishedPercentIsSet_ = true;
}

bool ProgressVo::finishedPercentIsSet() const
{
    return finishedPercentIsSet_;
}

void ProgressVo::unsetfinishedPercent()
{
    finishedPercentIsSet_ = false;
}

}
}
}
}
}


