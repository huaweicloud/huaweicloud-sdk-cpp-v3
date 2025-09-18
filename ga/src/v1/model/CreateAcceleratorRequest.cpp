

#include "huaweicloud/ga/v1/model/CreateAcceleratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateAcceleratorRequest::CreateAcceleratorRequest()
{
    bodyIsSet_ = false;
}

CreateAcceleratorRequest::~CreateAcceleratorRequest() = default;

void CreateAcceleratorRequest::validate()
{
}

web::json::value CreateAcceleratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAcceleratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAcceleratorRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateAcceleratorRequestBody CreateAcceleratorRequest::getBody() const
{
    return body_;
}

void CreateAcceleratorRequest::setBody(const CreateAcceleratorRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAcceleratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAcceleratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


