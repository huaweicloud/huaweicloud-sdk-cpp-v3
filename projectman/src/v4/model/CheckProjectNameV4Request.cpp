

#include "huaweicloud/projectman/v4/model/CheckProjectNameV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CheckProjectNameV4Request::CheckProjectNameV4Request()
{
    bodyIsSet_ = false;
}

CheckProjectNameV4Request::~CheckProjectNameV4Request() = default;

void CheckProjectNameV4Request::validate()
{
}

web::json::value CheckProjectNameV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckProjectNameV4Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckProjectNameRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CheckProjectNameRequestV4 CheckProjectNameV4Request::getBody() const
{
    return body_;
}

void CheckProjectNameV4Request::setBody(const CheckProjectNameRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckProjectNameV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckProjectNameV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


