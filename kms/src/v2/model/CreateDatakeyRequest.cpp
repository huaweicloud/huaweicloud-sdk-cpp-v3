

#include "huaweicloud/kms/v2/model/CreateDatakeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateDatakeyRequest::CreateDatakeyRequest()
{
    bodyIsSet_ = false;
}

CreateDatakeyRequest::~CreateDatakeyRequest() = default;

void CreateDatakeyRequest::validate()
{
}

web::json::value CreateDatakeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDatakeyRequest::fromJson(const web::json::value& val)
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


CreateDatakeyRequestBody CreateDatakeyRequest::getBody() const
{
    return body_;
}

void CreateDatakeyRequest::setBody(const CreateDatakeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatakeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatakeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


