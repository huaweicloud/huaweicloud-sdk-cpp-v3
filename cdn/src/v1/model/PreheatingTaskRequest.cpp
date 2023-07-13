

#include "huaweicloud/cdn/v1/model/PreheatingTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




PreheatingTaskRequest::PreheatingTaskRequest()
{
    preheatingTaskIsSet_ = false;
}

PreheatingTaskRequest::~PreheatingTaskRequest() = default;

void PreheatingTaskRequest::validate()
{
}

web::json::value PreheatingTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(preheatingTaskIsSet_) {
        val[utility::conversions::to_string_t("preheating_task")] = ModelBase::toJson(preheatingTask_);
    }

    return val;
}

bool PreheatingTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preheating_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preheating_task"));
        if(!fieldValue.is_null())
        {
            PreheatingTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreheatingTask(refVal);
        }
    }
    return ok;
}

PreheatingTaskRequestBody PreheatingTaskRequest::getPreheatingTask() const
{
    return preheatingTask_;
}

void PreheatingTaskRequest::setPreheatingTask(const PreheatingTaskRequestBody& value)
{
    preheatingTask_ = value;
    preheatingTaskIsSet_ = true;
}

bool PreheatingTaskRequest::preheatingTaskIsSet() const
{
    return preheatingTaskIsSet_;
}

void PreheatingTaskRequest::unsetpreheatingTask()
{
    preheatingTaskIsSet_ = false;
}

}
}
}
}
}


