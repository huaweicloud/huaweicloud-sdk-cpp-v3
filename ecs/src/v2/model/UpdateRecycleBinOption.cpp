

#include "huaweicloud/ecs/v2/model/UpdateRecycleBinOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateRecycleBinOption::UpdateRecycleBinOption()
{
    switch_ = "";
    switchIsSet_ = false;
}

UpdateRecycleBinOption::~UpdateRecycleBinOption() = default;

void UpdateRecycleBinOption::validate()
{
}

web::json::value UpdateRecycleBinOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchIsSet_) {
        val[utility::conversions::to_string_t("switch")] = ModelBase::toJson(switch_);
    }

    return val;
}
bool UpdateRecycleBinOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitch(refVal);
        }
    }
    return ok;
}


std::string UpdateRecycleBinOption::getSwitch() const
{
    return switch_;
}

void UpdateRecycleBinOption::setSwitch(const std::string& value)
{
    switch_ = value;
    switchIsSet_ = true;
}

bool UpdateRecycleBinOption::switchIsSet() const
{
    return switchIsSet_;
}

void UpdateRecycleBinOption::unsetswitch()
{
    switchIsSet_ = false;
}

}
}
}
}
}


