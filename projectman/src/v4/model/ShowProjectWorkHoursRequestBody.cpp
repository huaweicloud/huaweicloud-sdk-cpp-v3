

#include "huaweicloud/projectman/v4/model/ShowProjectWorkHoursRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectWorkHoursRequestBody::ShowProjectWorkHoursRequestBody()
{
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

ShowProjectWorkHoursRequestBody::~ShowProjectWorkHoursRequestBody() = default;

void ShowProjectWorkHoursRequestBody::validate()
{
}

web::json::value ShowProjectWorkHoursRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ShowProjectWorkHoursRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& ShowProjectWorkHoursRequestBody::getUserIds()
{
    return userIds_;
}

void ShowProjectWorkHoursRequestBody::setUserIds(const std::vector<std::string>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetuserIds()
{
    userIdsIsSet_ = false;
}

std::string ShowProjectWorkHoursRequestBody::getWorkHoursTypes() const
{
    return workHoursTypes_;
}

void ShowProjectWorkHoursRequestBody::setWorkHoursTypes(const std::string& value)
{
    workHoursTypes_ = value;
    workHoursTypesIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::workHoursTypesIsSet() const
{
    return workHoursTypesIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetworkHoursTypes()
{
    workHoursTypesIsSet_ = false;
}

std::string ShowProjectWorkHoursRequestBody::getWorkHoursDates() const
{
    return workHoursDates_;
}

void ShowProjectWorkHoursRequestBody::setWorkHoursDates(const std::string& value)
{
    workHoursDates_ = value;
    workHoursDatesIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::workHoursDatesIsSet() const
{
    return workHoursDatesIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetworkHoursDates()
{
    workHoursDatesIsSet_ = false;
}

std::string ShowProjectWorkHoursRequestBody::getBeginTime() const
{
    return beginTime_;
}

void ShowProjectWorkHoursRequestBody::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowProjectWorkHoursRequestBody::getEndTime() const
{
    return endTime_;
}

void ShowProjectWorkHoursRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowProjectWorkHoursRequestBody::getOffset() const
{
    return offset_;
}

void ShowProjectWorkHoursRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowProjectWorkHoursRequestBody::getLimit() const
{
    return limit_;
}

void ShowProjectWorkHoursRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowProjectWorkHoursRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowProjectWorkHoursRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


