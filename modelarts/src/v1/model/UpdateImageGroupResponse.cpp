

#include "huaweicloud/modelarts/v1/model/UpdateImageGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateImageGroupResponse::UpdateImageGroupResponse()
{
    bodyIsSet_ = false;
}

UpdateImageGroupResponse::~UpdateImageGroupResponse() = default;

void UpdateImageGroupResponse::validate()
{
}

web::json::value UpdateImageGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateImageGroupResponse::fromJson(const web::json::value& val)
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


Object UpdateImageGroupResponse::getBody() const
{
    return body_;
}

void UpdateImageGroupResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateImageGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateImageGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


