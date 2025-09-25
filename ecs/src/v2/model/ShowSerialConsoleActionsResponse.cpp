

#include "huaweicloud/ecs/v2/model/ShowSerialConsoleActionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowSerialConsoleActionsResponse::ShowSerialConsoleActionsResponse()
{
    serialConsoleIsSet_ = false;
}

ShowSerialConsoleActionsResponse::~ShowSerialConsoleActionsResponse() = default;

void ShowSerialConsoleActionsResponse::validate()
{
}

web::json::value ShowSerialConsoleActionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serialConsoleIsSet_) {
        val[utility::conversions::to_string_t("serial_console")] = ModelBase::toJson(serialConsole_);
    }

    return val;
}
bool ShowSerialConsoleActionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serial_console"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_console"));
        if(!fieldValue.is_null())
        {
            ShowSerialConsoleActionsOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialConsole(refVal);
        }
    }
    return ok;
}


ShowSerialConsoleActionsOption ShowSerialConsoleActionsResponse::getSerialConsole() const
{
    return serialConsole_;
}

void ShowSerialConsoleActionsResponse::setSerialConsole(const ShowSerialConsoleActionsOption& value)
{
    serialConsole_ = value;
    serialConsoleIsSet_ = true;
}

bool ShowSerialConsoleActionsResponse::serialConsoleIsSet() const
{
    return serialConsoleIsSet_;
}

void ShowSerialConsoleActionsResponse::unsetserialConsole()
{
    serialConsoleIsSet_ = false;
}

}
}
}
}
}


