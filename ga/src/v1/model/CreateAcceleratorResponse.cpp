

#include "huaweicloud/ga/v1/model/CreateAcceleratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateAcceleratorResponse::CreateAcceleratorResponse()
{
    acceleratorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreateAcceleratorResponse::~CreateAcceleratorResponse() = default;

void CreateAcceleratorResponse::validate()
{
}

web::json::value CreateAcceleratorResponse::toJson() const
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
bool CreateAcceleratorResponse::fromJson(const web::json::value& val)
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


AcceleratorDetail CreateAcceleratorResponse::getAccelerator() const
{
    return accelerator_;
}

void CreateAcceleratorResponse::setAccelerator(const AcceleratorDetail& value)
{
    accelerator_ = value;
    acceleratorIsSet_ = true;
}

bool CreateAcceleratorResponse::acceleratorIsSet() const
{
    return acceleratorIsSet_;
}

void CreateAcceleratorResponse::unsetaccelerator()
{
    acceleratorIsSet_ = false;
}

std::string CreateAcceleratorResponse::getRequestId() const
{
    return requestId_;
}

void CreateAcceleratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateAcceleratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateAcceleratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


