

#include "huaweicloud/cce/v3/model/TaskStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




TaskStatus::TaskStatus()
{
    jobID_ = "";
    jobIDIsSet_ = false;
}

TaskStatus::~TaskStatus() = default;

void TaskStatus::validate()
{
}

web::json::value TaskStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIDIsSet_) {
        val[utility::conversions::to_string_t("jobID")] = ModelBase::toJson(jobID_);
    }

    return val;
}
bool TaskStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobID(refVal);
        }
    }
    return ok;
}


std::string TaskStatus::getJobID() const
{
    return jobID_;
}

void TaskStatus::setJobID(const std::string& value)
{
    jobID_ = value;
    jobIDIsSet_ = true;
}

bool TaskStatus::jobIDIsSet() const
{
    return jobIDIsSet_;
}

void TaskStatus::unsetjobID()
{
    jobIDIsSet_ = false;
}

}
}
}
}
}


