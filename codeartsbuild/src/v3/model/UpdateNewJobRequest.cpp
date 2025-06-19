

#include "huaweicloud/codeartsbuild/v3/model/UpdateNewJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNewJobRequest::UpdateNewJobRequest()
{
    bodyIsSet_ = false;
}

UpdateNewJobRequest::~UpdateNewJobRequest() = default;

void UpdateNewJobRequest::validate()
{
}

web::json::value UpdateNewJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNewJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateBuildJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateBuildJobRequestBody UpdateNewJobRequest::getBody() const
{
    return body_;
}

void UpdateNewJobRequest::setBody(const UpdateBuildJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNewJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNewJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


