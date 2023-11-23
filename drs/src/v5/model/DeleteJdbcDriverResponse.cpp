

#include "huaweicloud/drs/v5/model/DeleteJdbcDriverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteJdbcDriverResponse::DeleteJdbcDriverResponse()
{
    bodyIsSet_ = false;
}

DeleteJdbcDriverResponse::~DeleteJdbcDriverResponse() = default;

void DeleteJdbcDriverResponse::validate()
{
}

web::json::value DeleteJdbcDriverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteJdbcDriverResponse::fromJson(const web::json::value& val)
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


Object DeleteJdbcDriverResponse::getBody() const
{
    return body_;
}

void DeleteJdbcDriverResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteJdbcDriverResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteJdbcDriverResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


