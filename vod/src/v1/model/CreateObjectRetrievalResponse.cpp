

#include "huaweicloud/vod/v1/model/CreateObjectRetrievalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectRetrievalResponse::CreateObjectRetrievalResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateObjectRetrievalResponse::~CreateObjectRetrievalResponse() = default;

void CreateObjectRetrievalResponse::validate()
{
}

web::json::value CreateObjectRetrievalResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateObjectRetrievalResponse::fromJson(const web::json::value& val)
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


std::string CreateObjectRetrievalResponse::getTaskId() const
{
    return taskId_;
}

void CreateObjectRetrievalResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateObjectRetrievalResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateObjectRetrievalResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


