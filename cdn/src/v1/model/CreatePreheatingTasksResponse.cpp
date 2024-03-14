

#include "huaweicloud/cdn/v1/model/CreatePreheatingTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreatePreheatingTasksResponse::CreatePreheatingTasksResponse()
{
    preheatingTask_ = "";
    preheatingTaskIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreatePreheatingTasksResponse::~CreatePreheatingTasksResponse() = default;

void CreatePreheatingTasksResponse::validate()
{
}

web::json::value CreatePreheatingTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(preheatingTaskIsSet_) {
        val[utility::conversions::to_string_t("preheating_task")] = ModelBase::toJson(preheatingTask_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreatePreheatingTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preheating_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preheating_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreheatingTask(refVal);
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


std::string CreatePreheatingTasksResponse::getPreheatingTask() const
{
    return preheatingTask_;
}

void CreatePreheatingTasksResponse::setPreheatingTask(const std::string& value)
{
    preheatingTask_ = value;
    preheatingTaskIsSet_ = true;
}

bool CreatePreheatingTasksResponse::preheatingTaskIsSet() const
{
    return preheatingTaskIsSet_;
}

void CreatePreheatingTasksResponse::unsetpreheatingTask()
{
    preheatingTaskIsSet_ = false;
}

std::string CreatePreheatingTasksResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreatePreheatingTasksResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreatePreheatingTasksResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreatePreheatingTasksResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


