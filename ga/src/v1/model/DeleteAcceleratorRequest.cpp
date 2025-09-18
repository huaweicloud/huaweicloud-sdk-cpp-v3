

#include "huaweicloud/ga/v1/model/DeleteAcceleratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DeleteAcceleratorRequest::DeleteAcceleratorRequest()
{
    acceleratorId_ = "";
    acceleratorIdIsSet_ = false;
}

DeleteAcceleratorRequest::~DeleteAcceleratorRequest() = default;

void DeleteAcceleratorRequest::validate()
{
}

web::json::value DeleteAcceleratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorIdIsSet_) {
        val[utility::conversions::to_string_t("accelerator_id")] = ModelBase::toJson(acceleratorId_);
    }

    return val;
}
bool DeleteAcceleratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accelerator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceleratorId(refVal);
        }
    }
    return ok;
}


std::string DeleteAcceleratorRequest::getAcceleratorId() const
{
    return acceleratorId_;
}

void DeleteAcceleratorRequest::setAcceleratorId(const std::string& value)
{
    acceleratorId_ = value;
    acceleratorIdIsSet_ = true;
}

bool DeleteAcceleratorRequest::acceleratorIdIsSet() const
{
    return acceleratorIdIsSet_;
}

void DeleteAcceleratorRequest::unsetacceleratorId()
{
    acceleratorIdIsSet_ = false;
}

}
}
}
}
}


