

#include "huaweicloud/csms/v1/model/CreateGrantsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateGrantsRequest::CreateGrantsRequest()
{
    bodyIsSet_ = false;
}

CreateGrantsRequest::~CreateGrantsRequest() = default;

void CreateGrantsRequest::validate()
{
}

web::json::value CreateGrantsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGrantsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GrantSecretReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GrantSecretReqBody CreateGrantsRequest::getBody() const
{
    return body_;
}

void CreateGrantsRequest::setBody(const GrantSecretReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGrantsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGrantsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


