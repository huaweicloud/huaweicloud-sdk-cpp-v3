

#include "huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateDisasterRecoveryDrillNameRequestParams::UpdateDisasterRecoveryDrillNameRequestParams()
{
    name_ = "";
    nameIsSet_ = false;
}

UpdateDisasterRecoveryDrillNameRequestParams::~UpdateDisasterRecoveryDrillNameRequestParams() = default;

void UpdateDisasterRecoveryDrillNameRequestParams::validate()
{
}

web::json::value UpdateDisasterRecoveryDrillNameRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool UpdateDisasterRecoveryDrillNameRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}

std::string UpdateDisasterRecoveryDrillNameRequestParams::getName() const
{
    return name_;
}

void UpdateDisasterRecoveryDrillNameRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDisasterRecoveryDrillNameRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDisasterRecoveryDrillNameRequestParams::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


