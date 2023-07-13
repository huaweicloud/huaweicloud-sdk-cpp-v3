

#include "huaweicloud/mpc/v1/model/ListTranscodeDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListTranscodeDetailResponse::ListTranscodeDetailResponse()
{
    taskArrayIsSet_ = false;
}

ListTranscodeDetailResponse::~ListTranscodeDetailResponse() = default;

void ListTranscodeDetailResponse::validate()
{
}

web::json::value ListTranscodeDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskArrayIsSet_) {
        val[utility::conversions::to_string_t("task_array")] = ModelBase::toJson(taskArray_);
    }

    return val;
}

bool ListTranscodeDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskArray(refVal);
        }
    }
    return ok;
}

std::vector<TaskDetailInfo>& ListTranscodeDetailResponse::getTaskArray()
{
    return taskArray_;
}

void ListTranscodeDetailResponse::setTaskArray(const std::vector<TaskDetailInfo>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListTranscodeDetailResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListTranscodeDetailResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

}
}
}
}
}


