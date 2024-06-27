

#include "huaweicloud/cfw/v1/model/DeleteCaptureTaskDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteCaptureTaskDto::DeleteCaptureTaskDto()
{
    taskIdsIsSet_ = false;
}

DeleteCaptureTaskDto::~DeleteCaptureTaskDto() = default;

void DeleteCaptureTaskDto::validate()
{
}

web::json::value DeleteCaptureTaskDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("task_ids")] = ModelBase::toJson(taskIds_);
    }

    return val;
}
bool DeleteCaptureTaskDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteCaptureTaskDto::getTaskIds()
{
    return taskIds_;
}

void DeleteCaptureTaskDto::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool DeleteCaptureTaskDto::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void DeleteCaptureTaskDto::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

}
}
}
}
}


