

#include "huaweicloud/lts/v2/model/UpdateLogConvergeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogConvergeConfigResponse::UpdateLogConvergeConfigResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateLogConvergeConfigResponse::~UpdateLogConvergeConfigResponse() = default;

void UpdateLogConvergeConfigResponse::validate()
{
}

web::json::value UpdateLogConvergeConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateLogConvergeConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateLogConvergeConfigResponse::getStatus() const
{
    return status_;
}

void UpdateLogConvergeConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateLogConvergeConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateLogConvergeConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


