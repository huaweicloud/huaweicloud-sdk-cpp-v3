

#include "huaweicloud/vpc/v2/model/BindingVifDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BindingVifDetails::BindingVifDetails()
{
    primaryInterface_ = false;
    primaryInterfaceIsSet_ = false;
}

BindingVifDetails::~BindingVifDetails() = default;

void BindingVifDetails::validate()
{
}

web::json::value BindingVifDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(primaryInterfaceIsSet_) {
        val[utility::conversions::to_string_t("primary_interface")] = ModelBase::toJson(primaryInterface_);
    }

    return val;
}

bool BindingVifDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("primary_interface"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_interface"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryInterface(refVal);
        }
    }
    return ok;
}


bool BindingVifDetails::isPrimaryInterface() const
{
    return primaryInterface_;
}

void BindingVifDetails::setPrimaryInterface(bool value)
{
    primaryInterface_ = value;
    primaryInterfaceIsSet_ = true;
}

bool BindingVifDetails::primaryInterfaceIsSet() const
{
    return primaryInterfaceIsSet_;
}

void BindingVifDetails::unsetprimaryInterface()
{
    primaryInterfaceIsSet_ = false;
}

}
}
}
}
}


