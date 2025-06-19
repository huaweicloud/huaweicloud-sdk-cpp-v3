

#include "huaweicloud/codeartsbuild/v3/model/ExecuteJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ExecuteJobRequest::ExecuteJobRequest()
{
    bodyIsSet_ = false;
}

ExecuteJobRequest::~ExecuteJobRequest() = default;

void ExecuteJobRequest::validate()
{
}

web::json::value ExecuteJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteJobRequest::fromJson(const web::json::value& val)
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


RunJobRequestBody ExecuteJobRequest::getBody() const
{
    return body_;
}

void ExecuteJobRequest::setBody(const RunJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


