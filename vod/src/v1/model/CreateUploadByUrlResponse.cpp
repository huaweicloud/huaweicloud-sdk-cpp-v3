

#include "huaweicloud/vod/v1/model/CreateUploadByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateUploadByUrlResponse::CreateUploadByUrlResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateUploadByUrlResponse::~CreateUploadByUrlResponse() = default;

void CreateUploadByUrlResponse::validate()
{
}

web::json::value CreateUploadByUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateUploadByUrlResponse::fromJson(const web::json::value& val)
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


std::string CreateUploadByUrlResponse::getTaskId() const
{
    return taskId_;
}

void CreateUploadByUrlResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateUploadByUrlResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateUploadByUrlResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


