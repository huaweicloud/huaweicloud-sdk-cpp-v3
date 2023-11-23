

#include "huaweicloud/dds/v3/model/UpdateLtsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateLtsConfigRequest::UpdateLtsConfigRequest()
{
    bodyIsSet_ = false;
}

UpdateLtsConfigRequest::~UpdateLtsConfigRequest() = default;

void UpdateLtsConfigRequest::validate()
{
}

web::json::value UpdateLtsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLtsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateLtsConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateLtsConfigRequestBody UpdateLtsConfigRequest::getBody() const
{
    return body_;
}

void UpdateLtsConfigRequest::setBody(const UpdateLtsConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLtsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLtsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


