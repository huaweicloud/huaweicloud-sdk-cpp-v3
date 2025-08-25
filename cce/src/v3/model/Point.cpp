

#include "huaweicloud/cce/v3/model/Point.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Point::Point()
{
    taskTypeIsSet_ = false;
}

Point::~Point() = default;

void Point::validate()
{
}

web::json::value Point::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("taskType")] = ModelBase::toJson(taskType_);
    }

    return val;
}
bool Point::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("taskType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskType"));
        if(!fieldValue.is_null())
        {
            TaskType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    return ok;
}


TaskType Point::getTaskType() const
{
    return taskType_;
}

void Point::setTaskType(const TaskType& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool Point::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void Point::unsettaskType()
{
    taskTypeIsSet_ = false;
}

}
}
}
}
}


