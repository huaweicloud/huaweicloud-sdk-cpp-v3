

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchReplicaRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchReplicaRequestBody::SwitchReplicaRequestBody()
{
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

SwitchReplicaRequestBody::~SwitchReplicaRequestBody() = default;

void SwitchReplicaRequestBody::validate()
{
}

web::json::value SwitchReplicaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool SwitchReplicaRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


bool SwitchReplicaRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void SwitchReplicaRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool SwitchReplicaRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void SwitchReplicaRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


