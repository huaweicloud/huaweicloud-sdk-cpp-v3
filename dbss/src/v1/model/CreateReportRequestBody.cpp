

#include "huaweicloud/dbss/v1/model/CreateReportRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateReportRequestBody::CreateReportRequestBody()
{
    dbIds_ = "";
    dbIdsIsSet_ = false;
    endDate_ = utility::datetime();
    endDateIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    startDate_ = utility::datetime();
    startDateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

CreateReportRequestBody::~CreateReportRequestBody() = default;

void CreateReportRequestBody::validate()
{
}

web::json::value CreateReportRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreateReportRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


std::string CreateReportRequestBody::getDbIds() const
{
    return dbIds_;
}

void CreateReportRequestBody::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool CreateReportRequestBody::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void CreateReportRequestBody::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

utility::datetime CreateReportRequestBody::getEndDate() const
{
    return endDate_;
}

void CreateReportRequestBody::setEndDate(const utility::datetime& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool CreateReportRequestBody::endDateIsSet() const
{
    return endDateIsSet_;
}

void CreateReportRequestBody::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string CreateReportRequestBody::getEndTime() const
{
    return endTime_;
}

void CreateReportRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateReportRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateReportRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

utility::datetime CreateReportRequestBody::getStartDate() const
{
    return startDate_;
}

void CreateReportRequestBody::setStartDate(const utility::datetime& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool CreateReportRequestBody::startDateIsSet() const
{
    return startDateIsSet_;
}

void CreateReportRequestBody::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string CreateReportRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateReportRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateReportRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateReportRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateReportRequestBody::getTemplateId() const
{
    return templateId_;
}

void CreateReportRequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateReportRequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateReportRequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


