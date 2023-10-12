

#include "huaweicloud/live/v1/model/UpdateObsBucketAuthorityPublicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateObsBucketAuthorityPublicRequest::UpdateObsBucketAuthorityPublicRequest()
{
    bodyIsSet_ = false;
}

UpdateObsBucketAuthorityPublicRequest::~UpdateObsBucketAuthorityPublicRequest() = default;

void UpdateObsBucketAuthorityPublicRequest::validate()
{
}

web::json::value UpdateObsBucketAuthorityPublicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateObsBucketAuthorityPublicRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ObsAuthorityConfigV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ObsAuthorityConfigV2 UpdateObsBucketAuthorityPublicRequest::getBody() const
{
    return body_;
}

void UpdateObsBucketAuthorityPublicRequest::setBody(const ObsAuthorityConfigV2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateObsBucketAuthorityPublicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateObsBucketAuthorityPublicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


