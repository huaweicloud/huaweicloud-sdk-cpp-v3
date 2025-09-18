

#include "huaweicloud/ga/v1/model/UpdateAcceleratorRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateAcceleratorRequestBody::UpdateAcceleratorRequestBody()
{
    acceleratorIsSet_ = false;
}

UpdateAcceleratorRequestBody::~UpdateAcceleratorRequestBody() = default;

void UpdateAcceleratorRequestBody::validate()
{
}

web::json::value UpdateAcceleratorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorIsSet_) {
        val[utility::conversions::to_string_t("accelerator")] = ModelBase::toJson(accelerator_);
    }

    return val;
}
bool UpdateAcceleratorRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accelerator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator"));
        if(!fieldValue.is_null())
        {
            UpdateAcceleratorOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccelerator(refVal);
        }
    }
    return ok;
}


UpdateAcceleratorOption UpdateAcceleratorRequestBody::getAccelerator() const
{
    return accelerator_;
}

void UpdateAcceleratorRequestBody::setAccelerator(const UpdateAcceleratorOption& value)
{
    accelerator_ = value;
    acceleratorIsSet_ = true;
}

bool UpdateAcceleratorRequestBody::acceleratorIsSet() const
{
    return acceleratorIsSet_;
}

void UpdateAcceleratorRequestBody::unsetaccelerator()
{
    acceleratorIsSet_ = false;
}

}
}
}
}
}


