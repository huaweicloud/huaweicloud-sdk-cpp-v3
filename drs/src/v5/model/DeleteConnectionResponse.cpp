

#include "huaweicloud/drs/v5/model/DeleteConnectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteConnectionResponse::DeleteConnectionResponse()
{
    bodyIsSet_ = false;
}

DeleteConnectionResponse::~DeleteConnectionResponse() = default;

void DeleteConnectionResponse::validate()
{
}

web::json::value DeleteConnectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteConnectionResponse::fromJson(const web::json::value& val)
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


Object DeleteConnectionResponse::getBody() const
{
    return body_;
}

void DeleteConnectionResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteConnectionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteConnectionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


