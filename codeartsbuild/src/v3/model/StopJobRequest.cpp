

#include "huaweicloud/codeartsbuild/v3/model/StopJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StopJobRequest::StopJobRequest()
{
    bodyIsSet_ = false;
}

StopJobRequest::~StopJobRequest() = default;

void StopJobRequest::validate()
{
}

web::json::value StopJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StopJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StopJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


StopJobRequestBody StopJobRequest::getBody() const
{
    return body_;
}

void StopJobRequest::setBody(const StopJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


