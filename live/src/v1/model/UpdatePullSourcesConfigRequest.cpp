

#include "huaweicloud/live/v1/model/UpdatePullSourcesConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdatePullSourcesConfigRequest::UpdatePullSourcesConfigRequest()
{
    bodyIsSet_ = false;
}

UpdatePullSourcesConfigRequest::~UpdatePullSourcesConfigRequest() = default;

void UpdatePullSourcesConfigRequest::validate()
{
}

web::json::value UpdatePullSourcesConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePullSourcesConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyPullSourcesConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyPullSourcesConfig UpdatePullSourcesConfigRequest::getBody() const
{
    return body_;
}

void UpdatePullSourcesConfigRequest::setBody(const ModifyPullSourcesConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePullSourcesConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePullSourcesConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


