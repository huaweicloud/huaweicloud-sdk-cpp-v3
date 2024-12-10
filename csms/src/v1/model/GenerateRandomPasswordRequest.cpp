

#include "huaweicloud/csms/v1/model/GenerateRandomPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




GenerateRandomPasswordRequest::GenerateRandomPasswordRequest()
{
    bodyIsSet_ = false;
}

GenerateRandomPasswordRequest::~GenerateRandomPasswordRequest() = default;

void GenerateRandomPasswordRequest::validate()
{
}

web::json::value GenerateRandomPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool GenerateRandomPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatePasswordRequestBody GenerateRandomPasswordRequest::getBody() const
{
    return body_;
}

void GenerateRandomPasswordRequest::setBody(const CreatePasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GenerateRandomPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GenerateRandomPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


