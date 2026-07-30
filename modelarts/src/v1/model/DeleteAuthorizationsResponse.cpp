

#include "huaweicloud/modelarts/v1/model/DeleteAuthorizationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteAuthorizationsResponse::DeleteAuthorizationsResponse()
{
    bodyIsSet_ = false;
}

DeleteAuthorizationsResponse::~DeleteAuthorizationsResponse() = default;

void DeleteAuthorizationsResponse::validate()
{
}

web::json::value DeleteAuthorizationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAuthorizationsResponse::fromJson(const web::json::value& val)
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


Object DeleteAuthorizationsResponse::getBody() const
{
    return body_;
}

void DeleteAuthorizationsResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAuthorizationsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAuthorizationsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


