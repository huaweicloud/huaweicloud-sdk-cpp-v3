

#include "huaweicloud/projectman/v4/model/AddIssueWorkHoursRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddIssueWorkHoursRequestBody::AddIssueWorkHoursRequestBody()
{
    startDate_ = "";
    startDateIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
    workHours_ = 0.0;
    workHoursIsSet_ = false;
    workHoursTypeId_ = 0;
    workHoursTypeIdIsSet_ = false;
}

AddIssueWorkHoursRequestBody::~AddIssueWorkHoursRequestBody() = default;

void AddIssueWorkHoursRequestBody::validate()
{
}

web::json::value AddIssueWorkHoursRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }
    if(workHoursIsSet_) {
        val[utility::conversions::to_string_t("work_hours")] = ModelBase::toJson(workHours_);
    }
    if(workHoursTypeIdIsSet_) {
        val[utility::conversions::to_string_t("work_hours_type_id")] = ModelBase::toJson(workHoursTypeId_);
    }

    return val;
}
bool AddIssueWorkHoursRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_type_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursTypeId(refVal);
        }
    }
    return ok;
}


std::string AddIssueWorkHoursRequestBody::getStartDate() const
{
    return startDate_;
}

void AddIssueWorkHoursRequestBody::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool AddIssueWorkHoursRequestBody::startDateIsSet() const
{
    return startDateIsSet_;
}

void AddIssueWorkHoursRequestBody::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string AddIssueWorkHoursRequestBody::getDueDate() const
{
    return dueDate_;
}

void AddIssueWorkHoursRequestBody::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool AddIssueWorkHoursRequestBody::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void AddIssueWorkHoursRequestBody::unsetdueDate()
{
    dueDateIsSet_ = false;
}

double AddIssueWorkHoursRequestBody::getWorkHours() const
{
    return workHours_;
}

void AddIssueWorkHoursRequestBody::setWorkHours(double value)
{
    workHours_ = value;
    workHoursIsSet_ = true;
}

bool AddIssueWorkHoursRequestBody::workHoursIsSet() const
{
    return workHoursIsSet_;
}

void AddIssueWorkHoursRequestBody::unsetworkHours()
{
    workHoursIsSet_ = false;
}

int32_t AddIssueWorkHoursRequestBody::getWorkHoursTypeId() const
{
    return workHoursTypeId_;
}

void AddIssueWorkHoursRequestBody::setWorkHoursTypeId(int32_t value)
{
    workHoursTypeId_ = value;
    workHoursTypeIdIsSet_ = true;
}

bool AddIssueWorkHoursRequestBody::workHoursTypeIdIsSet() const
{
    return workHoursTypeIdIsSet_;
}

void AddIssueWorkHoursRequestBody::unsetworkHoursTypeId()
{
    workHoursTypeIdIsSet_ = false;
}

}
}
}
}
}


