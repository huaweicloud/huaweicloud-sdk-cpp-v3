

#include "huaweicloud/mpc/v1/model/CreateResetTracksTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateResetTracksTaskResponse::CreateResetTracksTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateResetTracksTaskResponse::~CreateResetTracksTaskResponse() = default;

void CreateResetTracksTaskResponse::validate()
{
}

web::json::value CreateResetTracksTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool CreateResetTracksTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateResetTracksTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateResetTracksTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateResetTracksTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateResetTracksTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


