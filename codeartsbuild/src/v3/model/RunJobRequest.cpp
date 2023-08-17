

#include "huaweicloud/codeartsbuild/v3/model/RunJobRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RunJobRequest::RunJobRequest()
{
    bodyIsSet_ = false;
}

RunJobRequest::~RunJobRequest() = default;

void RunJobRequest::validate()
{
}

web::json::value RunJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RunJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RunJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

RunJobRequestBody RunJobRequest::getBody() const
{
    return body_;
}

void RunJobRequest::setBody(const RunJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


