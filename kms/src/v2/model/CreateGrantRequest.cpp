

#include "huaweicloud/kms/v2/model/CreateGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateGrantRequest::CreateGrantRequest()
{
    bodyIsSet_ = false;
}

CreateGrantRequest::~CreateGrantRequest() = default;

void CreateGrantRequest::validate()
{
}

web::json::value CreateGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateGrantRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateGrantRequestBody CreateGrantRequest::getBody() const
{
    return body_;
}

void CreateGrantRequest::setBody(const CreateGrantRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGrantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGrantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


