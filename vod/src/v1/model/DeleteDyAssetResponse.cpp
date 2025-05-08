

#include "huaweicloud/vod/v1/model/DeleteDyAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteDyAssetResponse::DeleteDyAssetResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteDyAssetResponse::~DeleteDyAssetResponse() = default;

void DeleteDyAssetResponse::validate()
{
}

web::json::value DeleteDyAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteDyAssetResponse::fromJson(const web::json::value& val)
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


std::string DeleteDyAssetResponse::getTaskId() const
{
    return taskId_;
}

void DeleteDyAssetResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteDyAssetResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteDyAssetResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


