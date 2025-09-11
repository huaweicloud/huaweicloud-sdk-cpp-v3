

#include "huaweicloud/dbss/v1/model/SetSensitiveResultSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSensitiveResultSwitchResponse::SetSensitiveResultSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetSensitiveResultSwitchResponse::~SetSensitiveResultSwitchResponse() = default;

void SetSensitiveResultSwitchResponse::validate()
{
}

web::json::value SetSensitiveResultSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetSensitiveResultSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetSensitiveResultSwitchResponse::getStatus() const
{
    return status_;
}

void SetSensitiveResultSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetSensitiveResultSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetSensitiveResultSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


