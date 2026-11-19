

#include "huaweicloud/kms/v2/model/CreateTrustedKeySpaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateTrustedKeySpaceRequest::CreateTrustedKeySpaceRequest()
{
    bodyIsSet_ = false;
}

CreateTrustedKeySpaceRequest::~CreateTrustedKeySpaceRequest() = default;

void CreateTrustedKeySpaceRequest::validate()
{
}

web::json::value CreateTrustedKeySpaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTrustedKeySpaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTrustedKeySpaceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTrustedKeySpaceRequestBody CreateTrustedKeySpaceRequest::getBody() const
{
    return body_;
}

void CreateTrustedKeySpaceRequest::setBody(const CreateTrustedKeySpaceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrustedKeySpaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrustedKeySpaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


