

#include "huaweicloud/modelarts/v1/model/RegisterImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RegisterImageRequest::RegisterImageRequest()
{
    bodyIsSet_ = false;
}

RegisterImageRequest::~RegisterImageRequest() = default;

void RegisterImageRequest::validate()
{
}

web::json::value RegisterImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RegisterImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImageRegRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ImageRegRequest RegisterImageRequest::getBody() const
{
    return body_;
}

void RegisterImageRequest::setBody(const ImageRegRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


