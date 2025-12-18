

#include "huaweicloud/meeting/v1/model/UpdateWebHookConfigStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateWebHookConfigStatusRequest::UpdateWebHookConfigStatusRequest()
{
    id_ = "";
    idIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

UpdateWebHookConfigStatusRequest::~UpdateWebHookConfigStatusRequest() = default;

void UpdateWebHookConfigStatusRequest::validate()
{
}

web::json::value UpdateWebHookConfigStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateWebHookConfigStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateWebHookConfigStatusRequest::getId() const
{
    return id_;
}

void UpdateWebHookConfigStatusRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateWebHookConfigStatusRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateWebHookConfigStatusRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateWebHookConfigStatusRequest::getStatus() const
{
    return status_;
}

void UpdateWebHookConfigStatusRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateWebHookConfigStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateWebHookConfigStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


