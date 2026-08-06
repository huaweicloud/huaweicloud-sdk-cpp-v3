

#include "huaweicloud/kms/v2/model/CreateAccessPointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateAccessPointRequest::CreateAccessPointRequest()
{
    bodyIsSet_ = false;
}

CreateAccessPointRequest::~CreateAccessPointRequest() = default;

void CreateAccessPointRequest::validate()
{
}

web::json::value CreateAccessPointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAccessPointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAccessPointRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateAccessPointRequestBody CreateAccessPointRequest::getBody() const
{
    return body_;
}

void CreateAccessPointRequest::setBody(const CreateAccessPointRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccessPointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccessPointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


