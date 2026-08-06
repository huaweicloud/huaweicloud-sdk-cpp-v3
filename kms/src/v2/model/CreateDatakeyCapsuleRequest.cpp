

#include "huaweicloud/kms/v2/model/CreateDatakeyCapsuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyCapsuleRequest::CreateDatakeyCapsuleRequest()
{
    bodyIsSet_ = false;
}

CreateDatakeyCapsuleRequest::~CreateDatakeyCapsuleRequest() = default;

void CreateDatakeyCapsuleRequest::validate()
{
}

web::json::value CreateDatakeyCapsuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDatakeyCapsuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDatakeyCapsuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDatakeyCapsuleRequestBody CreateDatakeyCapsuleRequest::getBody() const
{
    return body_;
}

void CreateDatakeyCapsuleRequest::setBody(const CreateDatakeyCapsuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatakeyCapsuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatakeyCapsuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


