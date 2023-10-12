

#include "huaweicloud/drs/v5/model/ObjectsCompareTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ObjectsCompareTaskInfo::ObjectsCompareTaskInfo()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    compareResultsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    exportStatus_ = "";
    exportStatusIsSet_ = false;
    reportRemainSeconds_ = 0L;
    reportRemainSecondsIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ObjectsCompareTaskInfo::~ObjectsCompareTaskInfo() = default;

void ObjectsCompareTaskInfo::validate()
{
}

web::json::value ObjectsCompareTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(compareResultsIsSet_) {
        val[utility::conversions::to_string_t("compare_results")] = ModelBase::toJson(compareResults_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(exportStatusIsSet_) {
        val[utility::conversions::to_string_t("export_status")] = ModelBase::toJson(exportStatus_);
    }
    if(reportRemainSecondsIsSet_) {
        val[utility::conversions::to_string_t("report_remain_seconds")] = ModelBase::toJson(reportRemainSeconds_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ObjectsCompareTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_results"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectsCompareOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResults(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_remain_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_remain_seconds"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportRemainSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
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
    return ok;
}


std::string ObjectsCompareTaskInfo::getCreateTime() const
{
    return createTime_;
}

void ObjectsCompareTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ObjectsCompareTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ObjectsCompareTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<ObjectsCompareOverviewInfo>& ObjectsCompareTaskInfo::getCompareResults()
{
    return compareResults_;
}

void ObjectsCompareTaskInfo::setCompareResults(const std::vector<ObjectsCompareOverviewInfo>& value)
{
    compareResults_ = value;
    compareResultsIsSet_ = true;
}

bool ObjectsCompareTaskInfo::compareResultsIsSet() const
{
    return compareResultsIsSet_;
}

void ObjectsCompareTaskInfo::unsetcompareResults()
{
    compareResultsIsSet_ = false;
}

std::string ObjectsCompareTaskInfo::getStartTime() const
{
    return startTime_;
}

void ObjectsCompareTaskInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ObjectsCompareTaskInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ObjectsCompareTaskInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ObjectsCompareTaskInfo::getStatus() const
{
    return status_;
}

void ObjectsCompareTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ObjectsCompareTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ObjectsCompareTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ObjectsCompareTaskInfo::getExportStatus() const
{
    return exportStatus_;
}

void ObjectsCompareTaskInfo::setExportStatus(const std::string& value)
{
    exportStatus_ = value;
    exportStatusIsSet_ = true;
}

bool ObjectsCompareTaskInfo::exportStatusIsSet() const
{
    return exportStatusIsSet_;
}

void ObjectsCompareTaskInfo::unsetexportStatus()
{
    exportStatusIsSet_ = false;
}

int64_t ObjectsCompareTaskInfo::getReportRemainSeconds() const
{
    return reportRemainSeconds_;
}

void ObjectsCompareTaskInfo::setReportRemainSeconds(int64_t value)
{
    reportRemainSeconds_ = value;
    reportRemainSecondsIsSet_ = true;
}

bool ObjectsCompareTaskInfo::reportRemainSecondsIsSet() const
{
    return reportRemainSecondsIsSet_;
}

void ObjectsCompareTaskInfo::unsetreportRemainSeconds()
{
    reportRemainSecondsIsSet_ = false;
}

std::string ObjectsCompareTaskInfo::getCompareJobId() const
{
    return compareJobId_;
}

void ObjectsCompareTaskInfo::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ObjectsCompareTaskInfo::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ObjectsCompareTaskInfo::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string ObjectsCompareTaskInfo::getErrorMsg() const
{
    return errorMsg_;
}

void ObjectsCompareTaskInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ObjectsCompareTaskInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ObjectsCompareTaskInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


