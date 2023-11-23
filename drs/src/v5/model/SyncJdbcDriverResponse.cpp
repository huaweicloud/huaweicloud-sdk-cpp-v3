

#include "huaweicloud/drs/v5/model/SyncJdbcDriverResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SyncJdbcDriverResponse::SyncJdbcDriverResponse()
{
    bodyIsSet_ = false;
}

SyncJdbcDriverResponse::~SyncJdbcDriverResponse() = default;

void SyncJdbcDriverResponse::validate()
{
}

web::json::value SyncJdbcDriverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SyncJdbcDriverResponse::fromJson(const web::json::value& val)
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


Object SyncJdbcDriverResponse::getBody() const
{
    return body_;
}

void SyncJdbcDriverResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SyncJdbcDriverResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SyncJdbcDriverResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


