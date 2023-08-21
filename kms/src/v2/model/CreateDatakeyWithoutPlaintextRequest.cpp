

#include "huaweicloud/kms/v2/model/CreateDatakeyWithoutPlaintextRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyWithoutPlaintextRequest::CreateDatakeyWithoutPlaintextRequest()
{
    bodyIsSet_ = false;
}

CreateDatakeyWithoutPlaintextRequest::~CreateDatakeyWithoutPlaintextRequest() = default;

void CreateDatakeyWithoutPlaintextRequest::validate()
{
}

web::json::value CreateDatakeyWithoutPlaintextRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDatakeyWithoutPlaintextRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDatakeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateDatakeyRequestBody CreateDatakeyWithoutPlaintextRequest::getBody() const
{
    return body_;
}

void CreateDatakeyWithoutPlaintextRequest::setBody(const CreateDatakeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatakeyWithoutPlaintextRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatakeyWithoutPlaintextRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


