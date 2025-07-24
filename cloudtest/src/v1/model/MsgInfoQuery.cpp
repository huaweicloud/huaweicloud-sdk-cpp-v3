

#include "huaweicloud/cloudtest/v1/model/MsgInfoQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MsgInfoQuery::MsgInfoQuery()
{
    alertTypesIsSet_ = false;
    caseId_ = "";
    caseIdIsSet_ = false;
    caseName_ = "";
    caseNameIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sendAlertType_ = "";
    sendAlertTypeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
}

MsgInfoQuery::~MsgInfoQuery() = default;

void MsgInfoQuery::validate()
{
}

web::json::value MsgInfoQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTypesIsSet_) {
        val[utility::conversions::to_string_t("alert_types")] = ModelBase::toJson(alertTypes_);
    }
    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(caseNameIsSet_) {
        val[utility::conversions::to_string_t("case_name")] = ModelBase::toJson(caseName_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sendAlertTypeIsSet_) {
        val[utility::conversions::to_string_t("send_alert_type")] = ModelBase::toJson(sendAlertType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool MsgInfoQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_alert_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_alert_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendAlertType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& MsgInfoQuery::getAlertTypes()
{
    return alertTypes_;
}

void MsgInfoQuery::setAlertTypes(const std::vector<std::string>& value)
{
    alertTypes_ = value;
    alertTypesIsSet_ = true;
}

bool MsgInfoQuery::alertTypesIsSet() const
{
    return alertTypesIsSet_;
}

void MsgInfoQuery::unsetalertTypes()
{
    alertTypesIsSet_ = false;
}

std::string MsgInfoQuery::getCaseId() const
{
    return caseId_;
}

void MsgInfoQuery::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool MsgInfoQuery::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void MsgInfoQuery::unsetcaseId()
{
    caseIdIsSet_ = false;
}

std::string MsgInfoQuery::getCaseName() const
{
    return caseName_;
}

void MsgInfoQuery::setCaseName(const std::string& value)
{
    caseName_ = value;
    caseNameIsSet_ = true;
}

bool MsgInfoQuery::caseNameIsSet() const
{
    return caseNameIsSet_;
}

void MsgInfoQuery::unsetcaseName()
{
    caseNameIsSet_ = false;
}

int64_t MsgInfoQuery::getEndTime() const
{
    return endTime_;
}

void MsgInfoQuery::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool MsgInfoQuery::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void MsgInfoQuery::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t MsgInfoQuery::getPageNum() const
{
    return pageNum_;
}

void MsgInfoQuery::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool MsgInfoQuery::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void MsgInfoQuery::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t MsgInfoQuery::getPageSize() const
{
    return pageSize_;
}

void MsgInfoQuery::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool MsgInfoQuery::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void MsgInfoQuery::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string MsgInfoQuery::getSendAlertType() const
{
    return sendAlertType_;
}

void MsgInfoQuery::setSendAlertType(const std::string& value)
{
    sendAlertType_ = value;
    sendAlertTypeIsSet_ = true;
}

bool MsgInfoQuery::sendAlertTypeIsSet() const
{
    return sendAlertTypeIsSet_;
}

void MsgInfoQuery::unsetsendAlertType()
{
    sendAlertTypeIsSet_ = false;
}

int64_t MsgInfoQuery::getStartTime() const
{
    return startTime_;
}

void MsgInfoQuery::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool MsgInfoQuery::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void MsgInfoQuery::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string MsgInfoQuery::getTaskId() const
{
    return taskId_;
}

void MsgInfoQuery::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool MsgInfoQuery::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void MsgInfoQuery::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string MsgInfoQuery::getTaskName() const
{
    return taskName_;
}

void MsgInfoQuery::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool MsgInfoQuery::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void MsgInfoQuery::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


