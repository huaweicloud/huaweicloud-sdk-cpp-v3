

#include "huaweicloud/cdn/v1/model/CreateRefreshTasksResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateRefreshTasksResponse::CreateRefreshTasksResponse()
{
    refreshTask_ = "";
    refreshTaskIsSet_ = false;
}

CreateRefreshTasksResponse::~CreateRefreshTasksResponse() = default;

void CreateRefreshTasksResponse::validate()
{
}

web::json::value CreateRefreshTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refreshTaskIsSet_) {
        val[utility::conversions::to_string_t("refresh_task")] = ModelBase::toJson(refreshTask_);
    }

    return val;
}

bool CreateRefreshTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("refresh_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshTask(refVal);
        }
    }
    return ok;
}

std::string CreateRefreshTasksResponse::getRefreshTask() const
{
    return refreshTask_;
}

void CreateRefreshTasksResponse::setRefreshTask(const std::string& value)
{
    refreshTask_ = value;
    refreshTaskIsSet_ = true;
}

bool CreateRefreshTasksResponse::refreshTaskIsSet() const
{
    return refreshTaskIsSet_;
}

void CreateRefreshTasksResponse::unsetrefreshTask()
{
    refreshTaskIsSet_ = false;
}

}
}
}
}
}


