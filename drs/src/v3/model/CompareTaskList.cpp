

#include "huaweicloud/drs/v3/model/CompareTaskList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareTaskList::CompareTaskList()
{
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    compareType_ = "";
    compareTypeIsSet_ = false;
    compareTaskStatus_ = "";
    compareTaskStatusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

CompareTaskList::~CompareTaskList() = default;

void CompareTaskList::validate()
{
}

web::json::value CompareTaskList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(compareTaskStatusIsSet_) {
        val[utility::conversions::to_string_t("compare_task_status")] = ModelBase::toJson(compareTaskStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool CompareTaskList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    return ok;
}

std::string CompareTaskList::getCompareTaskId() const
{
    return compareTaskId_;
}

void CompareTaskList::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool CompareTaskList::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void CompareTaskList::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::string CompareTaskList::getCompareType() const
{
    return compareType_;
}

void CompareTaskList::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool CompareTaskList::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void CompareTaskList::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string CompareTaskList::getCompareTaskStatus() const
{
    return compareTaskStatus_;
}

void CompareTaskList::setCompareTaskStatus(const std::string& value)
{
    compareTaskStatus_ = value;
    compareTaskStatusIsSet_ = true;
}

bool CompareTaskList::compareTaskStatusIsSet() const
{
    return compareTaskStatusIsSet_;
}

void CompareTaskList::unsetcompareTaskStatus()
{
    compareTaskStatusIsSet_ = false;
}

std::string CompareTaskList::getCreateTime() const
{
    return createTime_;
}

void CompareTaskList::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CompareTaskList::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CompareTaskList::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CompareTaskList::getEndTime() const
{
    return endTime_;
}

void CompareTaskList::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CompareTaskList::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CompareTaskList::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


