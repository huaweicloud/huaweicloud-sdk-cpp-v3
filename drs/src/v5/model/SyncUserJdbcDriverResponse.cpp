

#include "huaweicloud/drs/v5/model/SyncUserJdbcDriverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SyncUserJdbcDriverResponse::SyncUserJdbcDriverResponse()
{
    bodyIsSet_ = false;
}

SyncUserJdbcDriverResponse::~SyncUserJdbcDriverResponse() = default;

void SyncUserJdbcDriverResponse::validate()
{
}

web::json::value SyncUserJdbcDriverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SyncUserJdbcDriverResponse::fromJson(const web::json::value& val)
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


Object SyncUserJdbcDriverResponse::getBody() const
{
    return body_;
}

void SyncUserJdbcDriverResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SyncUserJdbcDriverResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SyncUserJdbcDriverResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


