

#include "huaweicloud/drs/v5/model/UploadUserJdbcDriverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadUserJdbcDriverResponse::UploadUserJdbcDriverResponse()
{
    bodyIsSet_ = false;
}

UploadUserJdbcDriverResponse::~UploadUserJdbcDriverResponse() = default;

void UploadUserJdbcDriverResponse::validate()
{
}

web::json::value UploadUserJdbcDriverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadUserJdbcDriverResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object UploadUserJdbcDriverResponse::getBody() const
{
    return body_;
}

void UploadUserJdbcDriverResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadUserJdbcDriverResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadUserJdbcDriverResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


