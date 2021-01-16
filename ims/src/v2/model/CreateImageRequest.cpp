

#include "huaweicloud/ims/v2/model/CreateImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateImageRequest::CreateImageRequest()
{
    bodyIsSet_ = false;
}

CreateImageRequest::~CreateImageRequest() = default;

void CreateImageRequest::validate()
{
}

web::json::value CreateImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateImageRequestBody CreateImageRequest::getBody() const
{
    return body_;
}

void CreateImageRequest::setBody(const CreateImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


