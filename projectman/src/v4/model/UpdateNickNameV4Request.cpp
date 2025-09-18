

#include "huaweicloud/projectman/v4/model/UpdateNickNameV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateNickNameV4Request::UpdateNickNameV4Request()
{
    bodyIsSet_ = false;
}

UpdateNickNameV4Request::~UpdateNickNameV4Request() = default;

void UpdateNickNameV4Request::validate()
{
}

web::json::value UpdateNickNameV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNickNameV4Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateUserNickNameRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateUserNickNameRequestV4 UpdateNickNameV4Request::getBody() const
{
    return body_;
}

void UpdateNickNameV4Request::setBody(const UpdateUserNickNameRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNickNameV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNickNameV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


