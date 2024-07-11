

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppInfoRequest::UpdateAppInfoRequest()
{
    bodyIsSet_ = false;
}

UpdateAppInfoRequest::~UpdateAppInfoRequest() = default;

void UpdateAppInfoRequest::validate()
{
}

web::json::value UpdateAppInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAppInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAppInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateAppInfoRequestBody UpdateAppInfoRequest::getBody() const
{
    return body_;
}

void UpdateAppInfoRequest::setBody(const UpdateAppInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAppInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAppInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


