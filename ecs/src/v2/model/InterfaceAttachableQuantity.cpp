

#include "huaweicloud/ecs/v2/model/InterfaceAttachableQuantity.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




InterfaceAttachableQuantity::InterfaceAttachableQuantity()
{
    freeNic_ = 0;
    freeNicIsSet_ = false;
}

InterfaceAttachableQuantity::~InterfaceAttachableQuantity() = default;

void InterfaceAttachableQuantity::validate()
{
}

web::json::value InterfaceAttachableQuantity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(freeNicIsSet_) {
        val[utility::conversions::to_string_t("free_nic")] = ModelBase::toJson(freeNic_);
    }

    return val;
}

bool InterfaceAttachableQuantity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("free_nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_nic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeNic(refVal);
        }
    }
    return ok;
}

int32_t InterfaceAttachableQuantity::getFreeNic() const
{
    return freeNic_;
}

void InterfaceAttachableQuantity::setFreeNic(int32_t value)
{
    freeNic_ = value;
    freeNicIsSet_ = true;
}

bool InterfaceAttachableQuantity::freeNicIsSet() const
{
    return freeNicIsSet_;
}

void InterfaceAttachableQuantity::unsetfreeNic()
{
    freeNicIsSet_ = false;
}

}
}
}
}
}


