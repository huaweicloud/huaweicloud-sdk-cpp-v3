

#include "huaweicloud/vpc/v2/model/CreatePrivateipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePrivateipRequest::CreatePrivateipRequest()
{
    bodyIsSet_ = false;
}

CreatePrivateipRequest::~CreatePrivateipRequest() = default;

void CreatePrivateipRequest::validate()
{
}

web::json::value CreatePrivateipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePrivateipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePrivateipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreatePrivateipRequestBody CreatePrivateipRequest::getBody() const
{
    return body_;
}

void CreatePrivateipRequest::setBody(const CreatePrivateipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePrivateipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePrivateipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


