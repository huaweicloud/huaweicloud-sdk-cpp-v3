

#include "huaweicloud/drs/v3/model/ListObejectLevelCompareOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListObejectLevelCompareOverviewResponse::ListObejectLevelCompareOverviewResponse()
{
    createTime_ = "";
    createTimeIsSet_ = false;
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
    compareResultIsSet_ = false;
}

ListObejectLevelCompareOverviewResponse::~ListObejectLevelCompareOverviewResponse() = default;

void ListObejectLevelCompareOverviewResponse::validate()
{
}

web::json::value ListObejectLevelCompareOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
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
    if(compareResultIsSet_) {
        val[utility::conversions::to_string_t("compare_result")] = ModelBase::toJson(compareResult_);
    }

    return val;
}
bool ListObejectLevelCompareOverviewResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_result"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectsCompareOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResult(refVal);
        }
    }
    return ok;
}


std::string ListObejectLevelCompareOverviewResponse::getCreateTime() const
{
    return createTime_;
}

void ListObejectLevelCompareOverviewResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListObejectLevelCompareOverviewResponse::getStartTime() const
{
    return startTime_;
}

void ListObejectLevelCompareOverviewResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListObejectLevelCompareOverviewResponse::getStatus() const
{
    return status_;
}

void ListObejectLevelCompareOverviewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListObejectLevelCompareOverviewResponse::getExportStatus() const
{
    return exportStatus_;
}

void ListObejectLevelCompareOverviewResponse::setExportStatus(const std::string& value)
{
    exportStatus_ = value;
    exportStatusIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::exportStatusIsSet() const
{
    return exportStatusIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetexportStatus()
{
    exportStatusIsSet_ = false;
}

int64_t ListObejectLevelCompareOverviewResponse::getReportRemainSeconds() const
{
    return reportRemainSeconds_;
}

void ListObejectLevelCompareOverviewResponse::setReportRemainSeconds(int64_t value)
{
    reportRemainSeconds_ = value;
    reportRemainSecondsIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::reportRemainSecondsIsSet() const
{
    return reportRemainSecondsIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetreportRemainSeconds()
{
    reportRemainSecondsIsSet_ = false;
}

std::string ListObejectLevelCompareOverviewResponse::getCompareJobId() const
{
    return compareJobId_;
}

void ListObejectLevelCompareOverviewResponse::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string ListObejectLevelCompareOverviewResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListObejectLevelCompareOverviewResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::vector<ObjectsCompareOverviewInfo>& ListObejectLevelCompareOverviewResponse::getCompareResult()
{
    return compareResult_;
}

void ListObejectLevelCompareOverviewResponse::setCompareResult(const std::vector<ObjectsCompareOverviewInfo>& value)
{
    compareResult_ = value;
    compareResultIsSet_ = true;
}

bool ListObejectLevelCompareOverviewResponse::compareResultIsSet() const
{
    return compareResultIsSet_;
}

void ListObejectLevelCompareOverviewResponse::unsetcompareResult()
{
    compareResultIsSet_ = false;
}

}
}
}
}
}


