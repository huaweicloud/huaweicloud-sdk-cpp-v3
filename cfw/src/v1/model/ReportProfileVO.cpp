

#include "huaweicloud/cfw/v1/model/ReportProfileVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ReportProfileVO::ReportProfileVO()
{
    profileId_ = "";
    profileIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    reportId_ = "";
    reportIdIsSet_ = false;
    lastTime_ = 0L;
    lastTimeIsSet_ = false;
}

ReportProfileVO::~ReportProfileVO() = default;

void ReportProfileVO::validate()
{
}

web::json::value ReportProfileVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(reportIdIsSet_) {
        val[utility::conversions::to_string_t("report_id")] = ModelBase::toJson(reportId_);
    }
    if(lastTimeIsSet_) {
        val[utility::conversions::to_string_t("last_time")] = ModelBase::toJson(lastTime_);
    }

    return val;
}
bool ReportProfileVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTime(refVal);
        }
    }
    return ok;
}


std::string ReportProfileVO::getProfileId() const
{
    return profileId_;
}

void ReportProfileVO::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool ReportProfileVO::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void ReportProfileVO::unsetprofileId()
{
    profileIdIsSet_ = false;
}

std::string ReportProfileVO::getName() const
{
    return name_;
}

void ReportProfileVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportProfileVO::nameIsSet() const
{
    return nameIsSet_;
}

void ReportProfileVO::unsetname()
{
    nameIsSet_ = false;
}

std::string ReportProfileVO::getCategory() const
{
    return category_;
}

void ReportProfileVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ReportProfileVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void ReportProfileVO::unsetcategory()
{
    categoryIsSet_ = false;
}

int32_t ReportProfileVO::getStatus() const
{
    return status_;
}

void ReportProfileVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReportProfileVO::statusIsSet() const
{
    return statusIsSet_;
}

void ReportProfileVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReportProfileVO::getReportId() const
{
    return reportId_;
}

void ReportProfileVO::setReportId(const std::string& value)
{
    reportId_ = value;
    reportIdIsSet_ = true;
}

bool ReportProfileVO::reportIdIsSet() const
{
    return reportIdIsSet_;
}

void ReportProfileVO::unsetreportId()
{
    reportIdIsSet_ = false;
}

int64_t ReportProfileVO::getLastTime() const
{
    return lastTime_;
}

void ReportProfileVO::setLastTime(int64_t value)
{
    lastTime_ = value;
    lastTimeIsSet_ = true;
}

bool ReportProfileVO::lastTimeIsSet() const
{
    return lastTimeIsSet_;
}

void ReportProfileVO::unsetlastTime()
{
    lastTimeIsSet_ = false;
}

}
}
}
}
}


