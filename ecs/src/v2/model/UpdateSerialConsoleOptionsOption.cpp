

#include "huaweicloud/ecs/v2/model/UpdateSerialConsoleOptionsOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateSerialConsoleOptionsOption::UpdateSerialConsoleOptionsOption()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

UpdateSerialConsoleOptionsOption::~UpdateSerialConsoleOptionsOption() = default;

void UpdateSerialConsoleOptionsOption::validate()
{
}

web::json::value UpdateSerialConsoleOptionsOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool UpdateSerialConsoleOptionsOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


bool UpdateSerialConsoleOptionsOption::isEnabled() const
{
    return enabled_;
}

void UpdateSerialConsoleOptionsOption::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateSerialConsoleOptionsOption::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateSerialConsoleOptionsOption::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


