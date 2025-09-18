

#include "huaweicloud/codeartscheck/v2/model/ShowProgressDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowProgressDetailResponse::ShowProgressDetailResponse()
{
    taskStatus_ = 0;
    taskStatusIsSet_ = false;
    progressIsSet_ = false;
}

ShowProgressDetailResponse::~ShowProgressDetailResponse() = default;

void ShowProgressDetailResponse::validate()
{
}

web::json::value ShowProgressDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }

    return val;
}
bool ShowProgressDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            ProgressDetailV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    return ok;
}


int32_t ShowProgressDetailResponse::getTaskStatus() const
{
    return taskStatus_;
}

void ShowProgressDetailResponse::setTaskStatus(int32_t value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ShowProgressDetailResponse::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ShowProgressDetailResponse::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

ProgressDetailV2 ShowProgressDetailResponse::getProgress() const
{
    return progress_;
}

void ShowProgressDetailResponse::setProgress(const ProgressDetailV2& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowProgressDetailResponse::progressIsSet() const
{
    return progressIsSet_;
}

void ShowProgressDetailResponse::unsetprogress()
{
    progressIsSet_ = false;
}

}
}
}
}
}


