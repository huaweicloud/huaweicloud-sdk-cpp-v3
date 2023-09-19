

#include "huaweicloud/lts/v2/model/ShowAdminConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowAdminConfigResponse::ShowAdminConfigResponse()
{
    logConvergeSwitch_ = false;
    logConvergeSwitchIsSet_ = false;
}

ShowAdminConfigResponse::~ShowAdminConfigResponse() = default;

void ShowAdminConfigResponse::validate()
{
}

web::json::value ShowAdminConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConvergeSwitchIsSet_) {
        val[utility::conversions::to_string_t("log_converge_switch")] = ModelBase::toJson(logConvergeSwitch_);
    }

    return val;
}

bool ShowAdminConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_converge_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_converge_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConvergeSwitch(refVal);
        }
    }
    return ok;
}

bool ShowAdminConfigResponse::isLogConvergeSwitch() const
{
    return logConvergeSwitch_;
}

void ShowAdminConfigResponse::setLogConvergeSwitch(bool value)
{
    logConvergeSwitch_ = value;
    logConvergeSwitchIsSet_ = true;
}

bool ShowAdminConfigResponse::logConvergeSwitchIsSet() const
{
    return logConvergeSwitchIsSet_;
}

void ShowAdminConfigResponse::unsetlogConvergeSwitch()
{
    logConvergeSwitchIsSet_ = false;
}

}
}
}
}
}


