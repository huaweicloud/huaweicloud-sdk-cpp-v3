

#include "huaweicloud/vod/v1/model/CreateObjectReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectReplicationResponse::CreateObjectReplicationResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateObjectReplicationResponse::~CreateObjectReplicationResponse() = default;

void CreateObjectReplicationResponse::validate()
{
}

web::json::value CreateObjectReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateObjectReplicationResponse::fromJson(const web::json::value& val)
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


std::string CreateObjectReplicationResponse::getTaskId() const
{
    return taskId_;
}

void CreateObjectReplicationResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateObjectReplicationResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateObjectReplicationResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


