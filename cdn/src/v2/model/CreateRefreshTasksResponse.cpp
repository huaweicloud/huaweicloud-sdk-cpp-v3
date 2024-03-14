

#include "huaweicloud/cdn/v2/model/CreateRefreshTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateRefreshTasksResponse::CreateRefreshTasksResponse()
{
    refreshTask_ = "";
    refreshTaskIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
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

std::string CreateRefreshTasksResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateRefreshTasksResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateRefreshTasksResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateRefreshTasksResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


