

#include "huaweicloud/projectman/v4/model/ListProjectWorkHoursRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectWorkHoursRequestBody::ListProjectWorkHoursRequestBody()
{
    projectIdsIsSet_ = false;
    userIdsIsSet_ = false;
    workHoursTypes_ = "";
    workHoursTypesIsSet_ = false;
    workHoursDates_ = "";
    workHoursDatesIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectWorkHoursRequestBody::~ListProjectWorkHoursRequestBody() = default;

void ListProjectWorkHoursRequestBody::validate()
{
}

web::json::value ListProjectWorkHoursRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdsIsSet_) {
        val[utility::conversions::to_string_t("project_ids")] = ModelBase::toJson(projectIds_);
    }
    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("user_ids")] = ModelBase::toJson(userIds_);
    }
    if(workHoursTypesIsSet_) {
        val[utility::conversions::to_string_t("work_hours_types")] = ModelBase::toJson(workHoursTypes_);
    }
    if(workHoursDatesIsSet_) {
        val[utility::conversions::to_string_t("work_hours_dates")] = ModelBase::toJson(workHoursDates_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListProjectWorkHoursRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_hours_dates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_dates"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursDates(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListProjectWorkHoursRequestBody::getProjectIds()
{
    return projectIds_;
}

void ListProjectWorkHoursRequestBody::setProjectIds(const std::vector<std::string>& value)
{
    projectIds_ = value;
    projectIdsIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::projectIdsIsSet() const
{
    return projectIdsIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetprojectIds()
{
    projectIdsIsSet_ = false;
}

std::vector<std::string>& ListProjectWorkHoursRequestBody::getUserIds()
{
    return userIds_;
}

void ListProjectWorkHoursRequestBody::setUserIds(const std::vector<std::string>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::string ListProjectWorkHoursRequestBody::getWorkHoursTypes() const
{
    return workHoursTypes_;
}

void ListProjectWorkHoursRequestBody::setWorkHoursTypes(const std::string& value)
{
    workHoursTypes_ = value;
    workHoursTypesIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::workHoursTypesIsSet() const
{
    return workHoursTypesIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetworkHoursTypes()
{
    workHoursTypesIsSet_ = false;
}

std::string ListProjectWorkHoursRequestBody::getWorkHoursDates() const
{
    return workHoursDates_;
}

void ListProjectWorkHoursRequestBody::setWorkHoursDates(const std::string& value)
{
    workHoursDates_ = value;
    workHoursDatesIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::workHoursDatesIsSet() const
{
    return workHoursDatesIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetworkHoursDates()
{
    workHoursDatesIsSet_ = false;
}

std::string ListProjectWorkHoursRequestBody::getBeginTime() const
{
    return beginTime_;
}

void ListProjectWorkHoursRequestBody::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListProjectWorkHoursRequestBody::getEndTime() const
{
    return endTime_;
}

void ListProjectWorkHoursRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListProjectWorkHoursRequestBody::getOffset() const
{
    return offset_;
}

void ListProjectWorkHoursRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectWorkHoursRequestBody::getLimit() const
{
    return limit_;
}

void ListProjectWorkHoursRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectWorkHoursRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectWorkHoursRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


