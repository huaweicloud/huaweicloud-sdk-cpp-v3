

#include "huaweicloud/live/v1/model/DeletePullTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeletePullTaskRequest::DeletePullTaskRequest()
{
    region_ = "";
    regionIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeletePullTaskRequest::~DeletePullTaskRequest() = default;

void DeletePullTaskRequest::validate()
{
}

web::json::value DeletePullTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeletePullTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string DeletePullTaskRequest::getRegion() const
{
    return region_;
}

void DeletePullTaskRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DeletePullTaskRequest::regionIsSet() const
{
    return regionIsSet_;
}

void DeletePullTaskRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string DeletePullTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeletePullTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeletePullTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeletePullTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


