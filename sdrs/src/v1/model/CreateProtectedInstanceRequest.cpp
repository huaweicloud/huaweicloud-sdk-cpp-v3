

#include "huaweicloud/sdrs/v1/model/CreateProtectedInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectedInstanceRequest::CreateProtectedInstanceRequest()
{
    bodyIsSet_ = false;
}

CreateProtectedInstanceRequest::~CreateProtectedInstanceRequest() = default;

void CreateProtectedInstanceRequest::validate()
{
}

web::json::value CreateProtectedInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateProtectedInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProtectedInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateProtectedInstanceRequestBody CreateProtectedInstanceRequest::getBody() const
{
    return body_;
}

void CreateProtectedInstanceRequest::setBody(const CreateProtectedInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProtectedInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProtectedInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


