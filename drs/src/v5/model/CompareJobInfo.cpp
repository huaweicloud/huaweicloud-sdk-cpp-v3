

#include "huaweicloud/drs/v5/model/CompareJobInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CompareJobInfo::CompareJobInfo()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    computeType_ = "";
    computeTypeIsSet_ = false;
    exportStatus_ = "";
    exportStatusIsSet_ = false;
    reportRemainSeconds_ = "";
    reportRemainSecondsIsSet_ = false;
    compareJobTagIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CompareJobInfo::~CompareJobInfo() = default;

void CompareJobInfo::validate()
{
}

web::json::value CompareJobInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(computeTypeIsSet_) {
        val[utility::conversions::to_string_t("compute_type")] = ModelBase::toJson(computeType_);
    }
    if(exportStatusIsSet_) {
        val[utility::conversions::to_string_t("export_status")] = ModelBase::toJson(exportStatus_);
    }
    if(reportRemainSecondsIsSet_) {
        val[utility::conversions::to_string_t("report_remain_seconds")] = ModelBase::toJson(reportRemainSeconds_);
    }
    if(compareJobTagIsSet_) {
        val[utility::conversions::to_string_t("compare_job_tag")] = ModelBase::toJson(compareJobTag_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool CompareJobInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeType(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportRemainSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_job_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobTag(refVal);
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

std::string CompareJobInfo::getId() const
{
    return id_;
}

void CompareJobInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CompareJobInfo::idIsSet() const
{
    return idIsSet_;
}

void CompareJobInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CompareJobInfo::getType() const
{
    return type_;
}

void CompareJobInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CompareJobInfo::typeIsSet() const
{
    return typeIsSet_;
}

void CompareJobInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string CompareJobInfo::getStartTime() const
{
    return startTime_;
}

void CompareJobInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CompareJobInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CompareJobInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CompareJobInfo::getEndTime() const
{
    return endTime_;
}

void CompareJobInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CompareJobInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CompareJobInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CompareJobInfo::getStatus() const
{
    return status_;
}

void CompareJobInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CompareJobInfo::statusIsSet() const
{
    return statusIsSet_;
}

void CompareJobInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CompareJobInfo::getComputeType() const
{
    return computeType_;
}

void CompareJobInfo::setComputeType(const std::string& value)
{
    computeType_ = value;
    computeTypeIsSet_ = true;
}

bool CompareJobInfo::computeTypeIsSet() const
{
    return computeTypeIsSet_;
}

void CompareJobInfo::unsetcomputeType()
{
    computeTypeIsSet_ = false;
}

std::string CompareJobInfo::getExportStatus() const
{
    return exportStatus_;
}

void CompareJobInfo::setExportStatus(const std::string& value)
{
    exportStatus_ = value;
    exportStatusIsSet_ = true;
}

bool CompareJobInfo::exportStatusIsSet() const
{
    return exportStatusIsSet_;
}

void CompareJobInfo::unsetexportStatus()
{
    exportStatusIsSet_ = false;
}

std::string CompareJobInfo::getReportRemainSeconds() const
{
    return reportRemainSeconds_;
}

void CompareJobInfo::setReportRemainSeconds(const std::string& value)
{
    reportRemainSeconds_ = value;
    reportRemainSecondsIsSet_ = true;
}

bool CompareJobInfo::reportRemainSecondsIsSet() const
{
    return reportRemainSecondsIsSet_;
}

void CompareJobInfo::unsetreportRemainSeconds()
{
    reportRemainSecondsIsSet_ = false;
}

std::map<std::string, std::string>& CompareJobInfo::getCompareJobTag()
{
    return compareJobTag_;
}

void CompareJobInfo::setCompareJobTag(const std::map<std::string, std::string>& value)
{
    compareJobTag_ = value;
    compareJobTagIsSet_ = true;
}

bool CompareJobInfo::compareJobTagIsSet() const
{
    return compareJobTagIsSet_;
}

void CompareJobInfo::unsetcompareJobTag()
{
    compareJobTagIsSet_ = false;
}

std::string CompareJobInfo::getErrorMsg() const
{
    return errorMsg_;
}

void CompareJobInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CompareJobInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CompareJobInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


