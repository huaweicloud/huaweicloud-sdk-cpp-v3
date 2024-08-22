

#include "huaweicloud/drs/v5/model/DeleteUserJdbcDriverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteUserJdbcDriverResponse::DeleteUserJdbcDriverResponse()
{
    bodyIsSet_ = false;
}

DeleteUserJdbcDriverResponse::~DeleteUserJdbcDriverResponse() = default;

void DeleteUserJdbcDriverResponse::validate()
{
}

web::json::value DeleteUserJdbcDriverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteUserJdbcDriverResponse::fromJson(const web::json::value& val)
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


Object DeleteUserJdbcDriverResponse::getBody() const
{
    return body_;
}

void DeleteUserJdbcDriverResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteUserJdbcDriverResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteUserJdbcDriverResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


