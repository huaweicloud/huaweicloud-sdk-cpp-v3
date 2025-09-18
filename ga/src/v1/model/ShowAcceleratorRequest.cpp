

#include "huaweicloud/ga/v1/model/ShowAcceleratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowAcceleratorRequest::ShowAcceleratorRequest()
{
    acceleratorId_ = "";
    acceleratorIdIsSet_ = false;
}

ShowAcceleratorRequest::~ShowAcceleratorRequest() = default;

void ShowAcceleratorRequest::validate()
{
}

web::json::value ShowAcceleratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorIdIsSet_) {
        val[utility::conversions::to_string_t("accelerator_id")] = ModelBase::toJson(acceleratorId_);
    }

    return val;
}
bool ShowAcceleratorRequest::fromJson(const web::json::value& val)
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


std::string ShowAcceleratorRequest::getAcceleratorId() const
{
    return acceleratorId_;
}

void ShowAcceleratorRequest::setAcceleratorId(const std::string& value)
{
    acceleratorId_ = value;
    acceleratorIdIsSet_ = true;
}

bool ShowAcceleratorRequest::acceleratorIdIsSet() const
{
    return acceleratorIdIsSet_;
}

void ShowAcceleratorRequest::unsetacceleratorId()
{
    acceleratorIdIsSet_ = false;
}

}
}
}
}
}


