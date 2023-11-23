

#include "huaweicloud/drs/v5/model/UploadJdbcDriverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadJdbcDriverResponse::UploadJdbcDriverResponse()
{
    bodyIsSet_ = false;
}

UploadJdbcDriverResponse::~UploadJdbcDriverResponse() = default;

void UploadJdbcDriverResponse::validate()
{
}

web::json::value UploadJdbcDriverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadJdbcDriverResponse::fromJson(const web::json::value& val)
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


Object UploadJdbcDriverResponse::getBody() const
{
    return body_;
}

void UploadJdbcDriverResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadJdbcDriverResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadJdbcDriverResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


