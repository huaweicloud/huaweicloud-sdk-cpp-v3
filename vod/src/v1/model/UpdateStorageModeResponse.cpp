

#include "huaweicloud/vod/v1/model/UpdateStorageModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateStorageModeResponse::UpdateStorageModeResponse()
{
    taskResultArrayIsSet_ = false;
}

UpdateStorageModeResponse::~UpdateStorageModeResponse() = default;

void UpdateStorageModeResponse::validate()
{
}

web::json::value UpdateStorageModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskResultArrayIsSet_) {
        val[utility::conversions::to_string_t("task_result_array")] = ModelBase::toJson(taskResultArray_);
    }

    return val;
}
bool UpdateStorageModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_result_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result_array"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResultArray(refVal);
        }
    }
    return ok;
}


std::vector<TaskResult>& UpdateStorageModeResponse::getTaskResultArray()
{
    return taskResultArray_;
}

void UpdateStorageModeResponse::setTaskResultArray(const std::vector<TaskResult>& value)
{
    taskResultArray_ = value;
    taskResultArrayIsSet_ = true;
}

bool UpdateStorageModeResponse::taskResultArrayIsSet() const
{
    return taskResultArrayIsSet_;
}

void UpdateStorageModeResponse::unsettaskResultArray()
{
    taskResultArrayIsSet_ = false;
}

}
}
}
}
}


