

#include "huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateBuildJobRequest::UpdateBuildJobRequest()
{
    bodyIsSet_ = false;
}

UpdateBuildJobRequest::~UpdateBuildJobRequest() = default;

void UpdateBuildJobRequest::validate()
{
}

web::json::value UpdateBuildJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBuildJobRequest::fromJson(const web::json::value& val)
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


UpdateBuildJobRequestBody UpdateBuildJobRequest::getBody() const
{
    return body_;
}

void UpdateBuildJobRequest::setBody(const UpdateBuildJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBuildJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBuildJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


