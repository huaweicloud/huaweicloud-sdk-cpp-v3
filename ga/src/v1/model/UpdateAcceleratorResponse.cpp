

#include "huaweicloud/ga/v1/model/UpdateAcceleratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateAcceleratorResponse::UpdateAcceleratorResponse()
{
    acceleratorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateAcceleratorResponse::~UpdateAcceleratorResponse() = default;

void UpdateAcceleratorResponse::validate()
{
}

web::json::value UpdateAcceleratorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorIsSet_) {
        val[utility::conversions::to_string_t("accelerator")] = ModelBase::toJson(accelerator_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateAcceleratorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accelerator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator"));
        if(!fieldValue.is_null())
        {
            AcceleratorDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccelerator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


AcceleratorDetail UpdateAcceleratorResponse::getAccelerator() const
{
    return accelerator_;
}

void UpdateAcceleratorResponse::setAccelerator(const AcceleratorDetail& value)
{
    accelerator_ = value;
    acceleratorIsSet_ = true;
}

bool UpdateAcceleratorResponse::acceleratorIsSet() const
{
    return acceleratorIsSet_;
}

void UpdateAcceleratorResponse::unsetaccelerator()
{
    acceleratorIsSet_ = false;
}

std::string UpdateAcceleratorResponse::getRequestId() const
{
    return requestId_;
}

void UpdateAcceleratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateAcceleratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateAcceleratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


