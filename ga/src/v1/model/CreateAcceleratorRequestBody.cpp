

#include "huaweicloud/ga/v1/model/CreateAcceleratorRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateAcceleratorRequestBody::CreateAcceleratorRequestBody()
{
    acceleratorIsSet_ = false;
}

CreateAcceleratorRequestBody::~CreateAcceleratorRequestBody() = default;

void CreateAcceleratorRequestBody::validate()
{
}

web::json::value CreateAcceleratorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorIsSet_) {
        val[utility::conversions::to_string_t("accelerator")] = ModelBase::toJson(accelerator_);
    }

    return val;
}
bool CreateAcceleratorRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accelerator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator"));
        if(!fieldValue.is_null())
        {
            CreateAcceleratorOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccelerator(refVal);
        }
    }
    return ok;
}


CreateAcceleratorOption CreateAcceleratorRequestBody::getAccelerator() const
{
    return accelerator_;
}

void CreateAcceleratorRequestBody::setAccelerator(const CreateAcceleratorOption& value)
{
    accelerator_ = value;
    acceleratorIsSet_ = true;
}

bool CreateAcceleratorRequestBody::acceleratorIsSet() const
{
    return acceleratorIsSet_;
}

void CreateAcceleratorRequestBody::unsetaccelerator()
{
    acceleratorIsSet_ = false;
}

}
}
}
}
}


