

#include "huaweicloud/cbr/v1/model/VaultCreateParameters.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultCreateParameters::VaultCreateParameters()
{
    combinedOrderIsSet_ = false;
}

VaultCreateParameters::~VaultCreateParameters() = default;

void VaultCreateParameters::validate()
{
}

web::json::value VaultCreateParameters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(combinedOrderIsSet_) {
        val[utility::conversions::to_string_t("combined_order")] = ModelBase::toJson(combinedOrder_);
    }

    return val;
}

bool VaultCreateParameters::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("combined_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("combined_order"));
        if(!fieldValue.is_null())
        {
            CombinedOrder refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCombinedOrder(refVal);
        }
    }
    return ok;
}


CombinedOrder VaultCreateParameters::getCombinedOrder() const
{
    return combinedOrder_;
}

void VaultCreateParameters::setCombinedOrder(const CombinedOrder& value)
{
    combinedOrder_ = value;
    combinedOrderIsSet_ = true;
}

bool VaultCreateParameters::combinedOrderIsSet() const
{
    return combinedOrderIsSet_;
}

void VaultCreateParameters::unsetcombinedOrder()
{
    combinedOrderIsSet_ = false;
}

}
}
}
}
}


