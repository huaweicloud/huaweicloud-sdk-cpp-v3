

#include "huaweicloud/drs/v3/model/CompareJobInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareJobInfo::CompareJobInfo()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    optionsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    exportStatus_ = "";
    exportStatusIsSet_ = false;
    reportRemainSeconds_ = 0L;
    reportRemainSecondsIsSet_ = false;
    compareJobTagIsSet_ = false;
    proportionValue_ = "";
    proportionValueIsSet_ = false;
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
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
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
    if(exportStatusIsSet_) {
        val[utility::conversions::to_string_t("export_status")] = ModelBase::toJson(exportStatus_);
    }
    if(reportRemainSecondsIsSet_) {
        val[utility::conversions::to_string_t("report_remain_seconds")] = ModelBase::toJson(reportRemainSeconds_);
    }
    if(compareJobTagIsSet_) {
        val[utility::conversions::to_string_t("compare_job_tag")] = ModelBase::toJson(compareJobTag_);
    }
    if(proportionValueIsSet_) {
        val[utility::conversions::to_string_t("proportion_value")] = ModelBase::toJson(proportionValue_);
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
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("compare_job_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proportion_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proportion_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProportionValue(refVal);
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

std::map<std::string, std::string>& CompareJobInfo::getOptions()
{
    return options_;
}

void CompareJobInfo::setOptions(const std::map<std::string, std::string>& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool CompareJobInfo::optionsIsSet() const
{
    return optionsIsSet_;
}

void CompareJobInfo::unsetoptions()
{
    optionsIsSet_ = false;
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

int64_t CompareJobInfo::getReportRemainSeconds() const
{
    return reportRemainSeconds_;
}

void CompareJobInfo::setReportRemainSeconds(int64_t value)
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

std::string CompareJobInfo::getProportionValue() const
{
    return proportionValue_;
}

void CompareJobInfo::setProportionValue(const std::string& value)
{
    proportionValue_ = value;
    proportionValueIsSet_ = true;
}

bool CompareJobInfo::proportionValueIsSet() const
{
    return proportionValueIsSet_;
}

void CompareJobInfo::unsetproportionValue()
{
    proportionValueIsSet_ = false;
}

}
}
}
}
}


