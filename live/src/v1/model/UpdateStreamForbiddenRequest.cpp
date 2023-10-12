

#include "huaweicloud/live/v1/model/UpdateStreamForbiddenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateStreamForbiddenRequest::UpdateStreamForbiddenRequest()
{
    bodyIsSet_ = false;
}

UpdateStreamForbiddenRequest::~UpdateStreamForbiddenRequest() = default;

void UpdateStreamForbiddenRequest::validate()
{
}

web::json::value UpdateStreamForbiddenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStreamForbiddenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StreamForbiddenSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


StreamForbiddenSetting UpdateStreamForbiddenRequest::getBody() const
{
    return body_;
}

void UpdateStreamForbiddenRequest::setBody(const StreamForbiddenSetting& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStreamForbiddenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStreamForbiddenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


