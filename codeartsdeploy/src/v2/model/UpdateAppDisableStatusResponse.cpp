

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppDisableStatusResponse::UpdateAppDisableStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateAppDisableStatusResponse::~UpdateAppDisableStatusResponse() = default;

void UpdateAppDisableStatusResponse::validate()
{
}

web::json::value UpdateAppDisableStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateAppDisableStatusResponse::fromJson(const web::json::value& val)
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


std::string UpdateAppDisableStatusResponse::getStatus() const
{
    return status_;
}

void UpdateAppDisableStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAppDisableStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAppDisableStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


