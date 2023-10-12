

#include "huaweicloud/cdn/v1/model/RefreshTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RefreshTaskRequest::RefreshTaskRequest()
{
    refreshTaskIsSet_ = false;
}

RefreshTaskRequest::~RefreshTaskRequest() = default;

void RefreshTaskRequest::validate()
{
}

web::json::value RefreshTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refreshTaskIsSet_) {
        val[utility::conversions::to_string_t("refresh_task")] = ModelBase::toJson(refreshTask_);
    }

    return val;
}
bool RefreshTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("refresh_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh_task"));
        if(!fieldValue.is_null())
        {
            RefreshTaskRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshTask(refVal);
        }
    }
    return ok;
}


RefreshTaskRequestBody RefreshTaskRequest::getRefreshTask() const
{
    return refreshTask_;
}

void RefreshTaskRequest::setRefreshTask(const RefreshTaskRequestBody& value)
{
    refreshTask_ = value;
    refreshTaskIsSet_ = true;
}

bool RefreshTaskRequest::refreshTaskIsSet() const
{
    return refreshTaskIsSet_;
}

void RefreshTaskRequest::unsetrefreshTask()
{
    refreshTaskIsSet_ = false;
}

}
}
}
}
}


