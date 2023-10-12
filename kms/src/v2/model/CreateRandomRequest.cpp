

#include "huaweicloud/kms/v2/model/CreateRandomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateRandomRequest::CreateRandomRequest()
{
    bodyIsSet_ = false;
}

CreateRandomRequest::~CreateRandomRequest() = default;

void CreateRandomRequest::validate()
{
}

web::json::value CreateRandomRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRandomRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GenRandomRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GenRandomRequestBody CreateRandomRequest::getBody() const
{
    return body_;
}

void CreateRandomRequest::setBody(const GenRandomRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRandomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRandomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


