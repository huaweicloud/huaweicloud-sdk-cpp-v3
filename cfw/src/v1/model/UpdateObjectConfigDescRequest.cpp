

#include "huaweicloud/cfw/v1/model/UpdateObjectConfigDescRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateObjectConfigDescRequest::UpdateObjectConfigDescRequest()
{
    bodyIsSet_ = false;
}

UpdateObjectConfigDescRequest::~UpdateObjectConfigDescRequest() = default;

void UpdateObjectConfigDescRequest::validate()
{
}

web::json::value UpdateObjectConfigDescRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateObjectConfigDescRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ObjectInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ObjectInfoDto UpdateObjectConfigDescRequest::getBody() const
{
    return body_;
}

void UpdateObjectConfigDescRequest::setBody(const ObjectInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateObjectConfigDescRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateObjectConfigDescRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


