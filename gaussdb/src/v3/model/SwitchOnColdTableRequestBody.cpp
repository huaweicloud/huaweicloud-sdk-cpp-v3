

#include "huaweicloud/gaussdb/v3/model/SwitchOnColdTableRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchOnColdTableRequestBody::SwitchOnColdTableRequestBody()
{
    switchOn_ = false;
    switchOnIsSet_ = false;
}

SwitchOnColdTableRequestBody::~SwitchOnColdTableRequestBody() = default;

void SwitchOnColdTableRequestBody::validate()
{
}

web::json::value SwitchOnColdTableRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOnIsSet_) {
        val[utility::conversions::to_string_t("switch_on")] = ModelBase::toJson(switchOn_);
    }

    return val;
}
bool SwitchOnColdTableRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOn(refVal);
        }
    }
    return ok;
}


bool SwitchOnColdTableRequestBody::isSwitchOn() const
{
    return switchOn_;
}

void SwitchOnColdTableRequestBody::setSwitchOn(bool value)
{
    switchOn_ = value;
    switchOnIsSet_ = true;
}

bool SwitchOnColdTableRequestBody::switchOnIsSet() const
{
    return switchOnIsSet_;
}

void SwitchOnColdTableRequestBody::unsetswitchOn()
{
    switchOnIsSet_ = false;
}

}
}
}
}
}


