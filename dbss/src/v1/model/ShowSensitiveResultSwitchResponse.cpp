

#include "huaweicloud/dbss/v1/model/ShowSensitiveResultSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowSensitiveResultSwitchResponse::ShowSensitiveResultSwitchResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowSensitiveResultSwitchResponse::~ShowSensitiveResultSwitchResponse() = default;

void ShowSensitiveResultSwitchResponse::validate()
{
}

web::json::value ShowSensitiveResultSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowSensitiveResultSwitchResponse::fromJson(const web::json::value& val)
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


std::string ShowSensitiveResultSwitchResponse::getStatus() const
{
    return status_;
}

void ShowSensitiveResultSwitchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSensitiveResultSwitchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSensitiveResultSwitchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


