

#include "huaweicloud/ga/v1/model/ShowAcceleratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowAcceleratorResponse::ShowAcceleratorResponse()
{
    acceleratorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowAcceleratorResponse::~ShowAcceleratorResponse() = default;

void ShowAcceleratorResponse::validate()
{
}

web::json::value ShowAcceleratorResponse::toJson() const
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
bool ShowAcceleratorResponse::fromJson(const web::json::value& val)
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


AcceleratorDetail ShowAcceleratorResponse::getAccelerator() const
{
    return accelerator_;
}

void ShowAcceleratorResponse::setAccelerator(const AcceleratorDetail& value)
{
    accelerator_ = value;
    acceleratorIsSet_ = true;
}

bool ShowAcceleratorResponse::acceleratorIsSet() const
{
    return acceleratorIsSet_;
}

void ShowAcceleratorResponse::unsetaccelerator()
{
    acceleratorIsSet_ = false;
}

std::string ShowAcceleratorResponse::getRequestId() const
{
    return requestId_;
}

void ShowAcceleratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowAcceleratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowAcceleratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


