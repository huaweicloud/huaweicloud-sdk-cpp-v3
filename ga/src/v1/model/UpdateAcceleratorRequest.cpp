

#include "huaweicloud/ga/v1/model/UpdateAcceleratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateAcceleratorRequest::UpdateAcceleratorRequest()
{
    acceleratorId_ = "";
    acceleratorIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAcceleratorRequest::~UpdateAcceleratorRequest() = default;

void UpdateAcceleratorRequest::validate()
{
}

web::json::value UpdateAcceleratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceleratorIdIsSet_) {
        val[utility::conversions::to_string_t("accelerator_id")] = ModelBase::toJson(acceleratorId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAcceleratorRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAcceleratorRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAcceleratorRequest::getAcceleratorId() const
{
    return acceleratorId_;
}

void UpdateAcceleratorRequest::setAcceleratorId(const std::string& value)
{
    acceleratorId_ = value;
    acceleratorIdIsSet_ = true;
}

bool UpdateAcceleratorRequest::acceleratorIdIsSet() const
{
    return acceleratorIdIsSet_;
}

void UpdateAcceleratorRequest::unsetacceleratorId()
{
    acceleratorIdIsSet_ = false;
}

UpdateAcceleratorRequestBody UpdateAcceleratorRequest::getBody() const
{
    return body_;
}

void UpdateAcceleratorRequest::setBody(const UpdateAcceleratorRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAcceleratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAcceleratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


